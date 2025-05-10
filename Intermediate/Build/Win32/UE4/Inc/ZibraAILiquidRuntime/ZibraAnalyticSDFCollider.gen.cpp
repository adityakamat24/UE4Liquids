// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraAnalyticSDFCollider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraAnalyticSDFCollider() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraAnalyticSDFCollider_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraAnalyticSDFCollider();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraSDFCollider();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ESDFType();
// End Cross Module References
	void UZibraAnalyticSDFCollider::StaticRegisterNativesUZibraAnalyticSDFCollider()
	{
	}
	UClass* Z_Construct_UClass_UZibraAnalyticSDFCollider_NoRegister()
	{
		return UZibraAnalyticSDFCollider::StaticClass();
	}
	struct Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chosenSDFTypeUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_chosenSDFTypeUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZibraSDFCollider,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ZibraAI" },
		{ "DisplayName", "Zibra Analytic SDF Collider" },
		{ "HideCategories", "Rendering Replication Input Actor Base Collision Shape OverlapCapsule Cooking Rendering Replication Input Actor Base Collision Shape OverlapCapsule Physics Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "ZibraAnalyticSDFCollider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ZibraAnalyticSDFCollider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::NewProp_chosenSDFTypeUI_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "DisplayName", "SDF Type" },
		{ "ModuleRelativePath", "Public/ZibraAnalyticSDFCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::NewProp_chosenSDFTypeUI = { "chosenSDFTypeUI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraAnalyticSDFCollider, chosenSDFTypeUI), Z_Construct_UEnum_ZibraAILiquidRuntime_ESDFType, METADATA_PARAMS(Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::NewProp_chosenSDFTypeUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::NewProp_chosenSDFTypeUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::NewProp_chosenSDFTypeUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZibraAnalyticSDFCollider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::ClassParams = {
		&UZibraAnalyticSDFCollider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZibraAnalyticSDFCollider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZibraAnalyticSDFCollider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZibraAnalyticSDFCollider, 139313675);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<UZibraAnalyticSDFCollider>()
	{
		return UZibraAnalyticSDFCollider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZibraAnalyticSDFCollider(Z_Construct_UClass_UZibraAnalyticSDFCollider, &UZibraAnalyticSDFCollider::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("UZibraAnalyticSDFCollider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZibraAnalyticSDFCollider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
