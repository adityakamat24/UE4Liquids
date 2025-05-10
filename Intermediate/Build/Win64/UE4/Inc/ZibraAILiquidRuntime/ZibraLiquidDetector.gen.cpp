// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraLiquidDetector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraLiquidDetector() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraLiquidDetector_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraLiquidDetector();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulator();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UZibraLiquidDetector::execGetParticlesInside)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetParticlesInside();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidDetector::execDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidDetector::execEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enable();
		P_NATIVE_END;
	}
	void UZibraLiquidDetector::StaticRegisterNativesUZibraLiquidDetector()
	{
		UClass* Class = UZibraLiquidDetector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Disable", &UZibraLiquidDetector::execDisable },
			{ "Enable", &UZibraLiquidDetector::execEnable },
			{ "GetParticlesInside", &UZibraLiquidDetector::execGetParticlesInside },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZibraLiquidDetector_Disable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidDetector_Disable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Detector" },
		{ "ModuleRelativePath", "Public/ZibraLiquidDetector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidDetector_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidDetector, nullptr, "Disable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidDetector_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidDetector_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidDetector_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidDetector_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidDetector_Enable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidDetector_Enable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Detector" },
		{ "Comment", "//API\n" },
		{ "ModuleRelativePath", "Public/ZibraLiquidDetector.h" },
		{ "ToolTip", "API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidDetector_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidDetector, nullptr, "Enable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidDetector_Enable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidDetector_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidDetector_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidDetector_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics
	{
		struct ZibraLiquidDetector_eventGetParticlesInside_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidDetector_eventGetParticlesInside_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Detector" },
		{ "ModuleRelativePath", "Public/ZibraLiquidDetector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidDetector, nullptr, "GetParticlesInside", nullptr, nullptr, sizeof(ZibraLiquidDetector_eventGetParticlesInside_Parms), Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZibraLiquidDetector_NoRegister()
	{
		return UZibraLiquidDetector::StaticClass();
	}
	struct Z_Construct_UClass_UZibraLiquidDetector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particlesInside_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_particlesInside;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZibraLiquidDetector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZibraManipulator,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZibraLiquidDetector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZibraLiquidDetector_Disable, "Disable" }, // 159886521
		{ &Z_Construct_UFunction_UZibraLiquidDetector_Enable, "Enable" }, // 2091019118
		{ &Z_Construct_UFunction_UZibraLiquidDetector_GetParticlesInside, "GetParticlesInside" }, // 2286147500
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidDetector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ZibraAI" },
		{ "DisplayName", "Zibra Detector" },
		{ "HideCategories", "Rendering Replication Input Actor Base Collision Shape OverlapCapsule Physics Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "ZibraLiquidDetector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ZibraLiquidDetector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidDetector_Statics::NewProp_particlesInside_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "ModuleRelativePath", "Public/ZibraLiquidDetector.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZibraLiquidDetector_Statics::NewProp_particlesInside = { "particlesInside", nullptr, (EPropertyFlags)0x0090000400020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidDetector, particlesInside), METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidDetector_Statics::NewProp_particlesInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidDetector_Statics::NewProp_particlesInside_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZibraLiquidDetector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidDetector_Statics::NewProp_particlesInside,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZibraLiquidDetector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZibraLiquidDetector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZibraLiquidDetector_Statics::ClassParams = {
		&UZibraLiquidDetector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZibraLiquidDetector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidDetector_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidDetector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidDetector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZibraLiquidDetector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZibraLiquidDetector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZibraLiquidDetector, 1206538736);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<UZibraLiquidDetector>()
	{
		return UZibraLiquidDetector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZibraLiquidDetector(Z_Construct_UClass_UZibraLiquidDetector, &UZibraLiquidDetector::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("UZibraLiquidDetector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZibraLiquidDetector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
