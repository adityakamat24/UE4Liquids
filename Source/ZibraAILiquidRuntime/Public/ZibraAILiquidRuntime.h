// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogZibraAILiquidRuntime, Log, All);

class FZibraAILiquidRuntimeModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	/** Handle to the test dll we will load */
	void*	Zibra_DLLHandle;

	bool ImportDLLMethods();
};
