// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FToolWindowModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command (by default it will bring up plugin window) */
	void PluginButtonClicked();
	
	
private:

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

private:
	TSharedPtr<class FUICommandList> PluginCommands;

	class FReply OnGeneratePointClick();

	TSharedRef<SWidget> CreateCheckBox(const FText CheckBoxName, bool* CheckBoxChoice);
	ECheckBoxState HandleCheckBoxIsChecked(bool* CheckBox) const;
	void HandleCheckBoxCheckedStateChanged(ECheckBoxState NewState, bool* CheckBoxThatChanged);

	bool CheckSettings();
	
	bool bSelectionIsRecatangle;
	bool bSelectionIsCircular;
};