// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CoverPointGenerator.h"
#include "CoverPointGeneratorStyle.h"
#include "CoverPointGeneratorCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "SCheckBox.h"
#include "SButton.h"
#include "Engine/Selection.h"
#include "Editor.h"
#include "CoverPoint.h"
#include "Engine/EngineTypes.h"
#include "UnrealMathUtility.h"

static const FName CoverPointGeneratorTabName("CoverPointGenerator");

#define LOCTEXT_NAMESPACE "FCoverPointGeneratorModule"

void FCoverPointGeneratorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FCoverPointGeneratorStyle::Initialize();
	FCoverPointGeneratorStyle::ReloadTextures();

	FCoverPointGeneratorCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FCoverPointGeneratorCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FCoverPointGeneratorModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FCoverPointGeneratorModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FCoverPointGeneratorModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(CoverPointGeneratorTabName, FOnSpawnTab::CreateRaw(this, &FCoverPointGeneratorModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FCoverPointGeneratorTabTitle", "CoverPointGenerator"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FCoverPointGeneratorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FCoverPointGeneratorStyle::Shutdown();

	FCoverPointGeneratorCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(CoverPointGeneratorTabName);
}

TSharedRef<SDockTab> FCoverPointGeneratorModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SVerticalBox)

			//Start Description
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight()
			[
				SNew(STextBlock)
				.Text(LOCTEXT("CoverPointDescription1", "1: Select the shape of the Actors you want to select.")).AutoWrapText(true)
			]
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight()
			[
				SNew(STextBlock)
				.Text(LOCTEXT("CoverPointDescription2", "2: Select all the Actors you want to use.")).AutoWrapText(true)
			]
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight().Padding(0.0f, 0.0f, 0.0f, 20.0f)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("CoverPointDescription3", "3: Press Generate.")).AutoWrapText(true)
			]
			//End Description
			
			//Start Checkboxes
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight().Padding(0.0f, 0.0f, 0.0f, 20.0f)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot().HAlign(HAlign_Left).AutoWidth().Padding(0.0f, 0.0f, 20.0f, 0.0f)
				[
					CreateCheckBox(FText::FromString("Is Rectangle"), &bIsRectangle)
				]
				+ SHorizontalBox::Slot().HAlign(HAlign_Left)
				[
					CreateCheckBox(FText::FromString("Is Circular"), &bIsCircular)
				]
			]
			//End CheckBoxes

			//Start Button
			+ SVerticalBox::Slot().VAlign(VAlign_Top).AutoHeight()
			[
				SNew(SButton)
				.Text(LOCTEXT("GenerateCoverPointLabel", "Generate"))
				.OnClicked_Raw(this, &FCoverPointGeneratorModule::OnGenerateButtonClick)
				.HAlign(HAlign_Center)
			]
		];
}

#pragma region CheckBox Functions
TSharedRef<SWidget> FCoverPointGeneratorModule::CreateCheckBox(const FText CheckBoxName, bool* CheckBoxValue)
{
	return SNew(SCheckBox)
		.IsChecked_Raw(this, &FCoverPointGeneratorModule::HandleCheckBoxIsChecked, CheckBoxValue)
		.OnCheckStateChanged_Raw(this, &FCoverPointGeneratorModule::HandleCheckBoxStateChange, CheckBoxValue)
		[
			SNew(STextBlock).Text(CheckBoxName)
		];
}

ECheckBoxState FCoverPointGeneratorModule::HandleCheckBoxIsChecked(bool* CheckBockValue) const
{
	return (*CheckBockValue) ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void FCoverPointGeneratorModule::HandleCheckBoxStateChange(ECheckBoxState NewState, bool* CheckBoxValue)
{
	*CheckBoxValue = (NewState == ECheckBoxState::Checked);
}
#pragma endregion

#pragma region GeneratePoints
FReply FCoverPointGeneratorModule::OnGenerateButtonClick()
{
	if (!SettingsValid())
		return FReply::Unhandled();

	if (!StartGeneration())
		return FReply::Unhandled();

	UE_LOG(LogTemp, Warning, TEXT("Cover Point Generator Tool: Succesfuly created cover points!"))
	return FReply::Handled();
}

bool FCoverPointGeneratorModule::SettingsValid()
{
	if ((bIsRectangle && bIsCircular) || (!bIsRectangle && !bIsCircular))
	{
		UE_LOG(LogTemp, Error, TEXT("Cover Point Generator Tool Error: Settings are not valid. Only one setting can be applied. \nSolution: (Un)Check one option."));
		return false;
	}

	return true;
}

bool FCoverPointGeneratorModule::StartGeneration()
{
	//Loop through all selected actors
	for (FSelectionIterator i(GEditor->GetSelectedActorIterator()); i; ++i)
	{
		if (AActor* actor = Cast<AActor>(*i))
		{
			if (bIsRectangle)
				GenerateRectangleCoverPoints(actor);
			else if (bIsCircular)
				GenerateCircularCoverPoints(actor);

		}
	}

	return true;
}

void FCoverPointGeneratorModule::GenerateRectangleCoverPoints(AActor* Actor)
{
	//Save original rotation and set it to zero
	FRotator defaultActorRotation = Actor->GetActorRotation();
	Actor->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));

	FBox actorBoundingBox = Actor->GetComponentsBoundingBox();

	//We imagine a 2d actor (look from above)
	FVector leftBottom = FVector(actorBoundingBox.GetCenter().X - (actorBoundingBox.GetSize().X * 0.5f), actorBoundingBox.GetCenter().Y - (actorBoundingBox.GetSize().Y * 0.5f), actorBoundingBox.GetCenter().Z - (actorBoundingBox.GetSize().Z * 0.5f));
	FVector rightTop = FVector(actorBoundingBox.GetCenter().X + (actorBoundingBox.GetSize().X * 0.5f), actorBoundingBox.GetCenter().Y + (actorBoundingBox.GetSize().Y * 0.5f), actorBoundingBox.GetCenter().Z - (actorBoundingBox.GetSize().Z * 0.5f));

	int32 horizontalPointAmount = 0, verticalPointAmount = 0;

	int32 horizontalDistance = rightTop.X - leftBottom.X;
	int32 verticalDistance = rightTop.Y - leftBottom.Y;

	TArray<ACoverPoint*> coverPoints; // Store the points for later checks

	if (horizontalDistance >= 100)
	{
		horizontalPointAmount = (horizontalDistance / POINT_DISTANCE_CM) - 1; // subtract 1 because we don't want to place a object on the corner of the actor
	}
	else if (horizontalDistance >= POINT_DISTANCE_CM) // If the actor is to small for multiple point we place the point instant without looping
	{
		CreateAndPlacePoint(FVector(leftBottom.X + (horizontalDistance * 0.5), leftBottom.Y - HORIZONTAL_OFFSET, leftBottom.Z = VERTICAL_OFFSET), Actor, coverPoints);
		CreateAndPlacePoint(FVector(rightTop.X - (horizontalDistance * 0.5), rightTop.Y + HORIZONTAL_OFFSET, rightTop.Z + VERTICAL_OFFSET), Actor, coverPoints);
	}
		

	if (verticalDistance >= 100)
	{
		verticalPointAmount = (verticalDistance / POINT_DISTANCE_CM) - 1; // subtract 1 because we don't want to place a object on the corner of the actor
	}
	else if (verticalDistance >= POINT_DISTANCE_CM) // If the actor is to small for multiple point we place the point instant without looping
	{
		CreateAndPlacePoint(FVector(leftBottom.X - HORIZONTAL_OFFSET, leftBottom.Y + (verticalDistance * 0.5), leftBottom.Z + VERTICAL_OFFSET), Actor, coverPoints);
		CreateAndPlacePoint(FVector(rightTop.X + HORIZONTAL_OFFSET, rightTop.Y - (verticalDistance * 0.5), rightTop.Z + VERTICAL_OFFSET), Actor, coverPoints);
	}

	//Calculate horizontal positions
	for (int32 i = 0; i != horizontalPointAmount; ++i)
	{
		FVector placeLocation = FVector(((leftBottom.X + POINT_DISTANCE_CM) + (POINT_DISTANCE_CM * i)), leftBottom.Y - HORIZONTAL_OFFSET, leftBottom.Z + VERTICAL_OFFSET);
		CreateAndPlacePoint(placeLocation, Actor, coverPoints);

		placeLocation = FVector(((rightTop.X - POINT_DISTANCE_CM) - (POINT_DISTANCE_CM * i)), rightTop.Y + HORIZONTAL_OFFSET, rightTop.Z + VERTICAL_OFFSET);
		CreateAndPlacePoint(placeLocation, Actor, coverPoints);
	}

	//Calculate Vertical positions
	for (int32 i = 0; i != verticalPointAmount; ++i)
	{
		FVector placeLocation = FVector(leftBottom.X - HORIZONTAL_OFFSET, ((leftBottom.Y + POINT_DISTANCE_CM) + (POINT_DISTANCE_CM * i)), leftBottom.Z + VERTICAL_OFFSET);
		CreateAndPlacePoint(placeLocation, Actor, coverPoints);

		placeLocation = FVector(rightTop.X + HORIZONTAL_OFFSET, ((rightTop.Y - POINT_DISTANCE_CM) - (POINT_DISTANCE_CM * i)), rightTop.Z + VERTICAL_OFFSET);
		CreateAndPlacePoint(placeLocation, Actor, coverPoints);
	}

	//Reset the rotation as it was before
	Actor->SetActorRotation(defaultActorRotation);

	//Check if points are reachable in world if not destroy them
	CheckPointsValid(coverPoints);
}

void FCoverPointGeneratorModule::GenerateCircularCoverPoints(AActor* Actor)
{
	//Save original rotation and set it to zero
	FRotator defaultActorRotation = Actor->GetActorRotation();
	Actor->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));

	//Get needed information about the cylinder
	float radius;
	float halfHeight;
	FVector centerPosition;

	Actor->GetComponentsBoundingCylinder(radius, halfHeight);
	centerPosition = Actor->GetComponentsBoundingBox().GetCenter();

	int32 amountOfPoints = 360 / ANGLE_DISTANCE;

	TArray<ACoverPoint*> coverPoints; // Store the points for later checks

	//Place all the points one for one
	for (int i = 0; i != amountOfPoints; ++i)
	{
		//Calculates position where point has to be placed
		FVector pointPosition = FVector(centerPosition.X + radius * FMath::Cos(FMath::DegreesToRadians((ANGLE_DISTANCE * i))), centerPosition.Y + radius * FMath::Sin(FMath::DegreesToRadians((ANGLE_DISTANCE * i))), (centerPosition.Z - halfHeight) + VERTICAL_OFFSET);
		CreateAndPlacePoint(pointPosition, Actor, coverPoints);
	}

	//Reset the rotation as it was before
	Actor->SetActorRotation(defaultActorRotation);

	//Check if points are reachable in world if not destroy them
	CheckPointsValid(coverPoints);
}

void FCoverPointGeneratorModule::CreateAndPlacePoint(FVector Location, AActor* Parent, TArray<ACoverPoint*>& OutPoints)
{
	//Spawn Cover point as actor
	AActor* coverPoint = GEditor->GetEditorWorldContext().World()->SpawnActor(ACoverPoint::StaticClass(), &Location);
	coverPoint->SetActorLocation(Location);
	coverPoint->AttachToActor(Parent, FAttachmentTransformRules(EAttachmentRule::KeepWorld, false));
	
	//Add Cover point to array for processing later
	OutPoints.Add(Cast<ACoverPoint>(coverPoint));
}

void FCoverPointGeneratorModule::CheckPointsValid(TArray<ACoverPoint*>& CoverPoints)
{
	//Loop through all places coverpoints and check if they need to be removed because of overlapping
	for (int32 i = 0; i != CoverPoints.Num(); ++i)
	{
		CoverPoints[i]->CheckSpawnCollision();
	}
}

#pragma endregion

void FCoverPointGeneratorModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->InvokeTab(CoverPointGeneratorTabName);
}

void FCoverPointGeneratorModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FCoverPointGeneratorCommands::Get().OpenPluginWindow);
}

void FCoverPointGeneratorModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FCoverPointGeneratorCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCoverPointGeneratorModule, CoverPointGenerator)