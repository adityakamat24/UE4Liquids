// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#include "ZibraAILiquidEditor.h"
#include "ZibraModuleStyle.h"
#include "ZibraModuleCommands.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SButton.h"
#include "Components/StaticMeshComponent.h"
#include "PropertyCustomizationHelpers.h"
#include "DetailLayoutBuilder.h"
#include "ToolMenus.h"
#include "ZibraAILiquidRuntime/Public/ZibraHTTPService.h"
#include "UObject/Class.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"


#define LOCTEXT_NAMESPACE "FZibraAILiquidEditorModule"

static const FName ZibraLiquidsModuleTabName("ZibraLiquids");


void FZibraAILiquidEditorModule::StartupModule()
{
	FZibraModuleStyle::Initialize();
	FZibraModuleStyle::ReloadTextures();

	FZibraModuleCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FZibraModuleCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FZibraAILiquidEditorModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FZibraAILiquidEditorModule::RegisterMenus));

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(ZibraLiquidsModuleTabName, FOnSpawnTab::CreateRaw(this, &FZibraAILiquidEditorModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FZibraLiquidsTabTitle", "ZibraLiquids"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	TickDelegate = FTickerDelegate::CreateRaw(this, &FZibraAILiquidEditorModule::Tick);
	TickDelegateHandle = FTicker::GetCoreTicker().AddTicker(TickDelegate);
}

void FZibraAILiquidEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FZibraModuleStyle::Shutdown();

	FZibraModuleCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(ZibraLiquidsModuleTabName);

	FTicker::GetCoreTicker().RemoveTicker(TickDelegateHandle);
}

bool FZibraAILiquidEditorModule::Tick(float DeltaTime)
{
	if (StatusTextPtr)
		StatusTextPtr->SetText(GetStatus());
	return true;
}

TSharedRef<SDockTab> FZibraAILiquidEditorModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "{0}"),
		FText::FromString(TEXT("Please enter your License Key"))
	);
	FText WidgetTextStatus = FText::Format(
		LOCTEXT("Status", "{0}"),
		FText::FromString(TEXT("Current Status:"))
	);

	FText WidgetButtonMeshSelector = FText::Format(
		LOCTEXT("WindowWidgetButtonText", "{0}"),
		FText::FromString(TEXT("Validate Key")
		));

	FText WidgetButtonMeshSelectorRegister = FText::Format(
		LOCTEXT("RegistationForm", "{0}"),
		FText::FromString(TEXT("Register Key")
		));

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(5)
		[
			SNew(STextBlock)
			.Text(WidgetText)
		] 
	+ SVerticalBox::Slot()
		.Padding(2.0f)
		.HAlign(HAlign_Center)
		.AutoHeight()
		[
			SNew(SButton)
			.Text(WidgetButtonMeshSelectorRegister)
		.OnClicked_Raw(this, &FZibraAILiquidEditorModule::OnButtonClickedRegister)
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(STextBlock)
			.Text(WidgetTextStatus)
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SAssignNew(StatusTextPtr, STextBlock)
			.Text(GetStatus())
		]
	+ SVerticalBox::Slot()
		.Padding(2.0f)
		.AutoHeight()
		[
			SAssignNew(EditableTextBoxPtr, SEditableTextBox)
			.Text(GetKeyText())
		]
	+ SVerticalBox::Slot()
		.Padding(2.0f)
		.HAlign(HAlign_Center)
		.AutoHeight()
		[
			SNew(SButton)
			.Text(WidgetButtonMeshSelector)
		.OnClicked_Raw(this, &FZibraAILiquidEditorModule::OnButtonClicked)
		]

		];

}


void FZibraAILiquidEditorModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(ZibraLiquidsModuleTabName);
}


void FZibraAILiquidEditorModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FZibraModuleCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FZibraModuleCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

FReply FZibraAILiquidEditorModule::OnButtonClicked()
{
//Neb:	SendRequest();
	return FReply::Handled();
}

FReply FZibraAILiquidEditorModule::OnButtonClickedRegister()
{
//Neb:	FPlatformProcess::LaunchURL(TEXT("https://registration.zibra.ai/"), NULL, NULL);
	return FReply::Handled();
}


FText FZibraAILiquidEditorModule::GetKeyText()
{
//Neb:	UZibraHTTPService::Get(GetID())->Initialize();
	return FText::FromString(UZibraHTTPService::GetPluginLicenseKey());
}

void FZibraAILiquidEditorModule::OnKeyTextCommitted(const FText& InText, ETextCommit::Type)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *InText.ToString());
}

FText FZibraAILiquidEditorModule::GetStatus()
{
	//return FText::FromString(TEXT("OK"));
/*Neb:+*/ return FText::FromString(TEXT("OK"));
	return UEnum::GetDisplayValueAsText(UZibraHTTPService::Get(GetID())->GetStatus());
}

int FZibraAILiquidEditorModule::GetID()
{
	if (HttpServiceID == -1)
		HttpServiceID = UZibraHTTPService::GetID();

	return HttpServiceID;
}

void FZibraAILiquidEditorModule::SendRequest()
{
	UZibraHTTPService::SetPluginLicenseKey(EditableTextBoxPtr.Get()->GetText().ToString());
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FZibraAILiquidEditorModule, ZibraAILiquidEditor)
