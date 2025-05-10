// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraLiquidVoid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraLiquidVoid() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraLiquidVoid_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraLiquidVoid();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulator();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UZibraLiquidVoid::execGetDeletedParticleCountPerFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDeletedParticleCountPerFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidVoid::execGetDeletedParticleCountTotal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetDeletedParticleCountTotal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidVoid::execDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidVoid::execEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enable();
		P_NATIVE_END;
	}
	void UZibraLiquidVoid::StaticRegisterNativesUZibraLiquidVoid()
	{
		UClass* Class = UZibraLiquidVoid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Disable", &UZibraLiquidVoid::execDisable },
			{ "Enable", &UZibraLiquidVoid::execEnable },
			{ "GetDeletedParticleCountPerFrame", &UZibraLiquidVoid::execGetDeletedParticleCountPerFrame },
			{ "GetDeletedParticleCountTotal", &UZibraLiquidVoid::execGetDeletedParticleCountTotal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZibraLiquidVoid_Disable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidVoid_Disable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Void" },
		{ "ModuleRelativePath", "Public/ZibraLiquidVoid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidVoid_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidVoid, nullptr, "Disable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidVoid_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidVoid_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidVoid_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidVoid_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidVoid_Enable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidVoid_Enable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Void" },
		{ "Comment", "//API\n" },
		{ "ModuleRelativePath", "Public/ZibraLiquidVoid.h" },
		{ "ToolTip", "API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidVoid_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidVoid, nullptr, "Enable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidVoid_Enable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidVoid_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidVoid_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidVoid_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics
	{
		struct ZibraLiquidVoid_eventGetDeletedParticleCountPerFrame_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidVoid_eventGetDeletedParticleCountPerFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Void" },
		{ "ModuleRelativePath", "Public/ZibraLiquidVoid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidVoid, nullptr, "GetDeletedParticleCountPerFrame", nullptr, nullptr, sizeof(ZibraLiquidVoid_eventGetDeletedParticleCountPerFrame_Parms), Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics
	{
		struct ZibraLiquidVoid_eventGetDeletedParticleCountTotal_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidVoid_eventGetDeletedParticleCountTotal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Void" },
		{ "ModuleRelativePath", "Public/ZibraLiquidVoid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidVoid, nullptr, "GetDeletedParticleCountTotal", nullptr, nullptr, sizeof(ZibraLiquidVoid_eventGetDeletedParticleCountTotal_Parms), Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZibraLiquidVoid_NoRegister()
	{
		return UZibraLiquidVoid::StaticClass();
	}
	struct Z_Construct_UClass_UZibraLiquidVoid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deletedParticleCountTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_deletedParticleCountTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deletedParticleCountPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deletedParticleCountPerFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZibraLiquidVoid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZibraManipulator,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZibraLiquidVoid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZibraLiquidVoid_Disable, "Disable" }, // 277517173
		{ &Z_Construct_UFunction_UZibraLiquidVoid_Enable, "Enable" }, // 2308924378
		{ &Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountPerFrame, "GetDeletedParticleCountPerFrame" }, // 2944168053
		{ &Z_Construct_UFunction_UZibraLiquidVoid_GetDeletedParticleCountTotal, "GetDeletedParticleCountTotal" }, // 1791702507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidVoid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ZibraAI" },
		{ "DisplayName", "Zibra Void" },
		{ "HideCategories", "Rendering Replication Input Actor Base Collision Shape OverlapCapsule Physics Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "ZibraLiquidVoid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ZibraLiquidVoid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidVoid_Statics::NewProp_deletedParticleCountTotal_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "DisplayName", "Deleted particles total" },
		{ "ModuleRelativePath", "Public/ZibraLiquidVoid.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UZibraLiquidVoid_Statics::NewProp_deletedParticleCountTotal = { "deletedParticleCountTotal", nullptr, (EPropertyFlags)0x0090000400020001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidVoid, deletedParticleCountTotal), METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidVoid_Statics::NewProp_deletedParticleCountTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidVoid_Statics::NewProp_deletedParticleCountTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidVoid_Statics::NewProp_deletedParticleCountPerFrame_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "DisplayName", "Deleted particles last frame" },
		{ "ModuleRelativePath", "Public/ZibraLiquidVoid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZibraLiquidVoid_Statics::NewProp_deletedParticleCountPerFrame = { "deletedParticleCountPerFrame", nullptr, (EPropertyFlags)0x0090000400020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidVoid, deletedParticleCountPerFrame), METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidVoid_Statics::NewProp_deletedParticleCountPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidVoid_Statics::NewProp_deletedParticleCountPerFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZibraLiquidVoid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidVoid_Statics::NewProp_deletedParticleCountTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidVoid_Statics::NewProp_deletedParticleCountPerFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZibraLiquidVoid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZibraLiquidVoid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZibraLiquidVoid_Statics::ClassParams = {
		&UZibraLiquidVoid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZibraLiquidVoid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidVoid_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidVoid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidVoid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZibraLiquidVoid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZibraLiquidVoid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZibraLiquidVoid, 33142926);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<UZibraLiquidVoid>()
	{
		return UZibraLiquidVoid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZibraLiquidVoid(Z_Construct_UClass_UZibraLiquidVoid, &UZibraLiquidVoid::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("UZibraLiquidVoid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZibraLiquidVoid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
