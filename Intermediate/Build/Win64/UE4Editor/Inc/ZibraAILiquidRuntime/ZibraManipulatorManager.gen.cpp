// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraManipulatorManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraManipulatorManager() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulatorManager_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulatorManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
// End Cross Module References
	void UZibraManipulatorManager::StaticRegisterNativesUZibraManipulatorManager()
	{
	}
	UClass* Z_Construct_UClass_UZibraManipulatorManager_NoRegister()
	{
		return UZibraManipulatorManager::StaticClass();
	}
	struct Z_Construct_UClass_UZibraManipulatorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SDFGrid_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SDFGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SDFGrid;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Embeddings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Embeddings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Embeddings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZibraManipulatorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraManipulatorManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ZibraAI" },
		{ "DisplayName", "Zibra Manipulator Manager" },
		{ "IncludePath", "ZibraManipulatorManager.h" },
		{ "ModuleRelativePath", "Public/ZibraManipulatorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_SDFGrid_Inner = { "SDFGrid", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_SDFGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraManipulatorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_SDFGrid = { "SDFGrid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraManipulatorManager, SDFGrid), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_SDFGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_SDFGrid_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_Embeddings_Inner = { "Embeddings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_Embeddings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraManipulatorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_Embeddings = { "Embeddings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraManipulatorManager, Embeddings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_Embeddings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_Embeddings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZibraManipulatorManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_SDFGrid_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_SDFGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_Embeddings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraManipulatorManager_Statics::NewProp_Embeddings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZibraManipulatorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZibraManipulatorManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZibraManipulatorManager_Statics::ClassParams = {
		&UZibraManipulatorManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZibraManipulatorManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZibraManipulatorManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZibraManipulatorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraManipulatorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZibraManipulatorManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZibraManipulatorManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZibraManipulatorManager, 3616786702);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<UZibraManipulatorManager>()
	{
		return UZibraManipulatorManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZibraManipulatorManager(Z_Construct_UClass_UZibraManipulatorManager, &UZibraManipulatorManager::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("UZibraManipulatorManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZibraManipulatorManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
