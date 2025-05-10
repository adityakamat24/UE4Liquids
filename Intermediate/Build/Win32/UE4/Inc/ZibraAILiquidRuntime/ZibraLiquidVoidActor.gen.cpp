// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraLiquidVoidActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraLiquidVoidActor() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_AZibraLiquidVoidActor_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_AZibraLiquidVoidActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraLiquidVoid_NoRegister();
// End Cross Module References
	void AZibraLiquidVoidActor::StaticRegisterNativesAZibraLiquidVoidActor()
	{
	}
	UClass* Z_Construct_UClass_AZibraLiquidVoidActor_NoRegister()
	{
		return AZibraLiquidVoidActor::StaticClass();
	}
	struct Z_Construct_UClass_AZibraLiquidVoidActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiquidVoid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LiquidVoid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZibraLiquidVoidActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquidVoidActor_Statics::Class_MetaDataParams[] = {
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "ZibraLiquidVoidActor.h" },
		{ "ModuleRelativePath", "Public/ZibraLiquidVoidActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquidVoidActor_Statics::NewProp_LiquidVoid_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ZibraAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZibraLiquidVoidActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZibraLiquidVoidActor_Statics::NewProp_LiquidVoid = { "LiquidVoid", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquidVoidActor, LiquidVoid), Z_Construct_UClass_UZibraLiquidVoid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquidVoidActor_Statics::NewProp_LiquidVoid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquidVoidActor_Statics::NewProp_LiquidVoid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZibraLiquidVoidActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquidVoidActor_Statics::NewProp_LiquidVoid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZibraLiquidVoidActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZibraLiquidVoidActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZibraLiquidVoidActor_Statics::ClassParams = {
		&AZibraLiquidVoidActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZibraLiquidVoidActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquidVoidActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZibraLiquidVoidActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquidVoidActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZibraLiquidVoidActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZibraLiquidVoidActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZibraLiquidVoidActor, 139710641);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<AZibraLiquidVoidActor>()
	{
		return AZibraLiquidVoidActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZibraLiquidVoidActor(Z_Construct_UClass_AZibraLiquidVoidActor, &AZibraLiquidVoidActor::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("AZibraLiquidVoidActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZibraLiquidVoidActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
