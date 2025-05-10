// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraLiquidEmitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraLiquidEmitter() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraLiquidEmitter_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraLiquidEmitter();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulator();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UZibraLiquidEmitter::execGetCreatedParticlesPerFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCreatedParticlesPerFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidEmitter::execGetCreatedParticlesTotal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetCreatedParticlesTotal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidEmitter::execGetInitialVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInitialVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidEmitter::execSetInitialVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitialVelocity(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidEmitter::execDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidEmitter::execEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enable();
		P_NATIVE_END;
	}
	void UZibraLiquidEmitter::StaticRegisterNativesUZibraLiquidEmitter()
	{
		UClass* Class = UZibraLiquidEmitter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Disable", &UZibraLiquidEmitter::execDisable },
			{ "Enable", &UZibraLiquidEmitter::execEnable },
			{ "GetCreatedParticlesPerFrame", &UZibraLiquidEmitter::execGetCreatedParticlesPerFrame },
			{ "GetCreatedParticlesTotal", &UZibraLiquidEmitter::execGetCreatedParticlesTotal },
			{ "GetInitialVelocity", &UZibraLiquidEmitter::execGetInitialVelocity },
			{ "SetInitialVelocity", &UZibraLiquidEmitter::execSetInitialVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZibraLiquidEmitter_Disable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidEmitter_Disable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Emitter" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidEmitter_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidEmitter, nullptr, "Disable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidEmitter_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidEmitter_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidEmitter_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidEmitter_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidEmitter_Enable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidEmitter_Enable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Emitter" },
		{ "Comment", "//API\n" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
		{ "ToolTip", "API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidEmitter_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidEmitter, nullptr, "Enable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidEmitter_Enable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidEmitter_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidEmitter_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidEmitter_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics
	{
		struct ZibraLiquidEmitter_eventGetCreatedParticlesPerFrame_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidEmitter_eventGetCreatedParticlesPerFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Emitter" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidEmitter, nullptr, "GetCreatedParticlesPerFrame", nullptr, nullptr, sizeof(ZibraLiquidEmitter_eventGetCreatedParticlesPerFrame_Parms), Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics
	{
		struct ZibraLiquidEmitter_eventGetCreatedParticlesTotal_Parms
		{
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidEmitter_eventGetCreatedParticlesTotal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Emitter" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidEmitter, nullptr, "GetCreatedParticlesTotal", nullptr, nullptr, sizeof(ZibraLiquidEmitter_eventGetCreatedParticlesTotal_Parms), Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics
	{
		struct ZibraLiquidEmitter_eventGetInitialVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidEmitter_eventGetInitialVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Emitter" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidEmitter, nullptr, "GetInitialVelocity", nullptr, nullptr, sizeof(ZibraLiquidEmitter_eventGetInitialVelocity_Parms), Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics
	{
		struct ZibraLiquidEmitter_eventSetInitialVelocity_Parms
		{
			FVector NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidEmitter_eventSetInitialVelocity_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Emitter" },
		{ "Comment", "/*UFUNCTION(BlueprintCallable, Category = \"Zibra Liquid Emitter\")\n\x09void SetParticlesPerSecond(float NewValue);\n\n\x09UFUNCTION(BlueprintCallable, Category = \"Zibra Liquid Emitter\")\n\x09""float GetParticlePerSecond();*/" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Zibra Liquid Emitter\")\n       void SetParticlesPerSecond(float NewValue);\n\n       UFUNCTION(BlueprintCallable, Category = \"Zibra Liquid Emitter\")\n       float GetParticlePerSecond();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidEmitter, nullptr, "SetInitialVelocity", nullptr, nullptr, sizeof(ZibraLiquidEmitter_eventSetInitialVelocity_Parms), Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZibraLiquidEmitter_NoRegister()
	{
		return UZibraLiquidEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UZibraLiquidEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedParticlesTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_CreatedParticlesTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedParticlesPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CreatedParticlesPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumePerSimTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumePerSimTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZibraLiquidEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZibraManipulator,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZibraLiquidEmitter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZibraLiquidEmitter_Disable, "Disable" }, // 2072415499
		{ &Z_Construct_UFunction_UZibraLiquidEmitter_Enable, "Enable" }, // 1534400141
		{ &Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesPerFrame, "GetCreatedParticlesPerFrame" }, // 4209785073
		{ &Z_Construct_UFunction_UZibraLiquidEmitter_GetCreatedParticlesTotal, "GetCreatedParticlesTotal" }, // 4033482412
		{ &Z_Construct_UFunction_UZibraLiquidEmitter_GetInitialVelocity, "GetInitialVelocity" }, // 3539210582
		{ &Z_Construct_UFunction_UZibraLiquidEmitter_SetInitialVelocity, "SetInitialVelocity" }, // 2551793800
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidEmitter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ZibraAI" },
		{ "DisplayName", "Zibra Emitter" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ZibraLiquidEmitter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_CreatedParticlesTotal_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Total amount of created particles" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
		{ "Tooltip", "Emitted particles total" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_CreatedParticlesTotal = { "CreatedParticlesTotal", nullptr, (EPropertyFlags)0x0090000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidEmitter, CreatedParticlesTotal), METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_CreatedParticlesTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_CreatedParticlesTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_CreatedParticlesPerFrame_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Amount of created particles per frame" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
		{ "Tooltip", "Emitted particles last frame" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_CreatedParticlesPerFrame = { "CreatedParticlesPerFrame", nullptr, (EPropertyFlags)0x0090000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidEmitter, CreatedParticlesPerFrame), METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_CreatedParticlesPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_CreatedParticlesPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_VolumePerSimTime_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
		{ "Tooltip", "Emitted volume per simulation time unit" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_VolumePerSimTime = { "VolumePerSimTime", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidEmitter, VolumePerSimTime), METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_VolumePerSimTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_VolumePerSimTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_InitialVelocity_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "ModuleRelativePath", "Public/ZibraLiquidEmitter.h" },
		{ "Tooltip", "The velocity of the created liquid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidEmitter, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_InitialVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_InitialVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZibraLiquidEmitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_CreatedParticlesTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_CreatedParticlesPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_VolumePerSimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidEmitter_Statics::NewProp_InitialVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZibraLiquidEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZibraLiquidEmitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZibraLiquidEmitter_Statics::ClassParams = {
		&UZibraLiquidEmitter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZibraLiquidEmitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidEmitter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZibraLiquidEmitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZibraLiquidEmitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZibraLiquidEmitter, 2012281938);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<UZibraLiquidEmitter>()
	{
		return UZibraLiquidEmitter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZibraLiquidEmitter(Z_Construct_UClass_UZibraLiquidEmitter, &UZibraLiquidEmitter::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("UZibraLiquidEmitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZibraLiquidEmitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
