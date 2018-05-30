// Fill out your copyright notice in the Description page of Project Settings.

#include "AssualtCharacter.h"
#include "UnitAIController.h"
#include "Runtime/AIModule/Classes/Perception/PawnSensingComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"


// Sets default values
AAssualtCharacter::AAssualtCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(FName("Sensing Component"));
}

// Called when the game starts or when spawned
void AAssualtCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (PawnSensingComponent == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("There is no Pawn Sensing Component!"));
		return;
	}

	PawnSensingComponent->OnSeePawn.AddDynamic(this, &AAssualtCharacter::OnSeePlayer);
	PawnSensingComponent->OnHearNoise.AddDynamic(this, &AAssualtCharacter::OnHearNoise);

	if (Controller != nullptr)
	{
		AUnitAIController* controller = Cast<AUnitAIController>(Controller);
		m_BlackboardComponent = controller->GetBlackboardComponent();
	}
}

// Called every frame
void AAssualtCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAssualtCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAssualtCharacter::OnSeePlayer(APawn * Pawn)
{
	m_BlackboardComponent->SetValueAsObject(FName("PlayerObject"), Pawn);
	m_BlackboardComponent->SetValueAsVector(FName("TargetLocation"), Pawn->GetActorLocation());
}

void AAssualtCharacter::OnHearNoise(APawn * Pawn, const FVector & Location, float Volume)
{
}
