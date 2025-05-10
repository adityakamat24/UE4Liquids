// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PropertyEditorModule.h"
#include "Modules/ModuleManager.h"
#include "Containers/Ticker.h"

class FZibraAILiquidEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	FTickerDelegate TickDelegate;
	FDelegateHandle TickDelegateHandle;

	bool Tick(float DeltaTime);

private:

	void RegisterMenus();

	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

	void PluginButtonClicked();
	void SendRequest();
	FReply OnButtonClicked();
	FReply OnButtonClickedRegister();

	TSharedPtr<SEditableTextBox> EditableTextBoxPtr;
	TSharedPtr<STextBlock> StatusTextPtr;

	FText GetKeyText();
	void OnKeyTextCommitted(const FText& InText, ETextCommit::Type);
	FText GetStatus();

	int HttpServiceID = -1;

	int GetID();
	TSharedPtr<class FUICommandList> PluginCommands;
};
