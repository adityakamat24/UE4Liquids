// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraManipulator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraManipulator() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_FManipulatorType();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulator_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulator();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	static UEnum* FManipulatorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ZibraAILiquidRuntime_FManipulatorType, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("FManipulatorType"));
		}
		return Singleton;
	}
	template<> ZIBRAAILIQUIDRUNTIME_API UEnum* StaticEnum<FManipulatorType>()
	{
		return FManipulatorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FManipulatorType(FManipulatorType_StaticEnum, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("FManipulatorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ZibraAILiquidRuntime_FManipulatorType_Hash() { return 3802572049U; }
	UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_FManipulatorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FManipulatorType"), 0, Get_Z_Construct_UEnum_ZibraAILiquidRuntime_FManipulatorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "Emitter", (int64)Emitter },
				{ "Void", (int64)Void },
				{ "ForceField", (int64)ForceField },
				{ "AnalyticCollider", (int64)AnalyticCollider },
				{ "ZibraNeuralCollider", (int64)ZibraNeuralCollider },
				{ "Detector", (int64)Detector },
				{ "Portal", (int64)Portal },
				{ "TypeNum", (int64)TypeNum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnalyticCollider.Name", "AnalyticCollider" },
				{ "Detector.Name", "Detector" },
				{ "Emitter.Name", "Emitter" },
				{ "ForceField.Name", "ForceField" },
				{ "ModuleRelativePath", "Public/ZibraManipulator.h" },
				{ "None.Name", "None" },
				{ "Portal.Name", "Portal" },
				{ "TypeNum.Name", "TypeNum" },
				{ "Void.Name", "Void" },
				{ "ZibraNeuralCollider.Name", "ZibraNeuralCollider" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
				nullptr,
				"FManipulatorType",
				"FManipulatorType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UZibraManipulator::StaticRegisterNativesUZibraManipulator()
	{
	}
	UClass* Z_Construct_UClass_UZibraManipulator_NoRegister()
	{
		return UZibraManipulator::StaticClass();
	}
	struct Z_Construct_UClass_UZibraManipulator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstAdditionalData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstAdditionalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstAdditionalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZibraManipulator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraManipulator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ZibraManipulator.h" },
		{ "ModuleRelativePath", "Public/ZibraManipulator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZibraManipulator_Statics::NewProp_ConstAdditionalData_Inner = { "ConstAdditionalData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraManipulator_Statics::NewProp_ConstAdditionalData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraManipulator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZibraManipulator_Statics::NewProp_ConstAdditionalData = { "ConstAdditionalData", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraManipulator, ConstAdditionalData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZibraManipulator_Statics::NewProp_ConstAdditionalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraManipulator_Statics::NewProp_ConstAdditionalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraManipulator_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "DisplayName", "Is Enabled" },
		{ "ModuleRelativePath", "Public/ZibraManipulator.h" },
	};
#endif
	void Z_Construct_UClass_UZibraManipulator_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UZibraManipulator*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZibraManipulator_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UZibraManipulator), &Z_Construct_UClass_UZibraManipulator_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZibraManipulator_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraManipulator_Statics::NewProp_bIsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZibraManipulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraManipulator_Statics::NewProp_ConstAdditionalData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraManipulator_Statics::NewProp_ConstAdditionalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraManipulator_Statics::NewProp_bIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZibraManipulator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZibraManipulator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZibraManipulator_Statics::ClassParams = {
		&UZibraManipulator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZibraManipulator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZibraManipulator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZibraManipulator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraManipulator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZibraManipulator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZibraManipulator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZibraManipulator, 2387985318);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<UZibraManipulator>()
	{
		return UZibraManipulator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZibraManipulator(Z_Construct_UClass_UZibraManipulator, &UZibraManipulator::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("UZibraManipulator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZibraManipulator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
