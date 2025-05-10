// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraLiquidAnalyticSDFActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraLiquidAnalyticSDFActor() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_AZibraLiquidAnalyticSDFActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraAnalyticSDFCollider_NoRegister();
// End Cross Module References
	void AZibraLiquidAnalyticSDFActor::StaticRegisterNativesAZibraLiquidAnalyticSDFActor()
	{
	}
	UClass* Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_NoRegister()
	{
		return AZibraLiquidAnalyticSDFActor::StaticClass();
	}
	struct Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZibraAnalyticSDFCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZibraAnalyticSDFCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::Class_MetaDataParams[] = {
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "ZibraLiquidAnalyticSDFActor.h" },
		{ "ModuleRelativePath", "Public/ZibraLiquidAnalyticSDFActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::NewProp_ZibraAnalyticSDFCollider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ZibraAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZibraLiquidAnalyticSDFActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::NewProp_ZibraAnalyticSDFCollider = { "ZibraAnalyticSDFCollider", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquidAnalyticSDFActor, ZibraAnalyticSDFCollider), Z_Construct_UClass_UZibraAnalyticSDFCollider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::NewProp_ZibraAnalyticSDFCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::NewProp_ZibraAnalyticSDFCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::NewProp_ZibraAnalyticSDFCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZibraLiquidAnalyticSDFActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::ClassParams = {
		&AZibraLiquidAnalyticSDFActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZibraLiquidAnalyticSDFActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZibraLiquidAnalyticSDFActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZibraLiquidAnalyticSDFActor, 3829851807);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<AZibraLiquidAnalyticSDFActor>()
	{
		return AZibraLiquidAnalyticSDFActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZibraLiquidAnalyticSDFActor(Z_Construct_UClass_AZibraLiquidAnalyticSDFActor, &AZibraLiquidAnalyticSDFActor::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("AZibraLiquidAnalyticSDFActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZibraLiquidAnalyticSDFActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
