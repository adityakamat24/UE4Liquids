// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraSDFCollider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraSDFCollider() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ESDFType();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraSDFCollider_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraSDFCollider();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
// End Cross Module References
	static UEnum* ESDFType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ZibraAILiquidRuntime_ESDFType, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ESDFType"));
		}
		return Singleton;
	}
	template<> ZIBRAAILIQUIDRUNTIME_API UEnum* StaticEnum<ESDFType>()
	{
		return ESDFType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESDFType(ESDFType_StaticEnum, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ESDFType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ZibraAILiquidRuntime_ESDFType_Hash() { return 107040830U; }
	UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ESDFType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESDFType"), 0, Get_Z_Construct_UEnum_ZibraAILiquidRuntime_ESDFType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESDFType_Sphere", (int64)ESDFType_Sphere },
				{ "ESDFType_Box", (int64)ESDFType_Box },
				{ "ESDFType_Capsule", (int64)ESDFType_Capsule },
				{ "ESDFType_Torus", (int64)ESDFType_Torus },
				{ "ESDFType_Cylinder", (int64)ESDFType_Cylinder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ESDFType_Box.DisplayName", "Box" },
				{ "ESDFType_Box.Name", "ESDFType_Box" },
				{ "ESDFType_Capsule.DisplayName", "Capsule" },
				{ "ESDFType_Capsule.Name", "ESDFType_Capsule" },
				{ "ESDFType_Cylinder.DisplayName", "Cylinder" },
				{ "ESDFType_Cylinder.Name", "ESDFType_Cylinder" },
				{ "ESDFType_Sphere.DisplayName", "Sphere" },
				{ "ESDFType_Sphere.Name", "ESDFType_Sphere" },
				{ "ESDFType_Torus.DisplayName", "Torus" },
				{ "ESDFType_Torus.Name", "ESDFType_Torus" },
				{ "ModuleRelativePath", "Public/ZibraSDFCollider.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
				nullptr,
				"ESDFType",
				"ESDFType",
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
	void UZibraSDFCollider::StaticRegisterNativesUZibraSDFCollider()
	{
	}
	UClass* Z_Construct_UClass_UZibraSDFCollider_NoRegister()
	{
		return UZibraSDFCollider::StaticClass();
	}
	struct Z_Construct_UClass_UZibraSDFCollider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceInteraction_MetaData[];
#endif
		static void NewProp_bForceInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertSDF_MetaData[];
#endif
		static void NewProp_bInvertSDF_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertSDF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZibraSDFCollider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZibraManipulator,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraSDFCollider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ZibraAI" },
		{ "DisplayName", "SDF Collider" },
		{ "HideCategories", "Rendering Replication Input Actor Base Collision Shape OverlapCapsule Physics Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "ZibraSDFCollider.h" },
		{ "ModuleRelativePath", "Public/ZibraSDFCollider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_FluidFriction_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraSDFCollider.h" },
		{ "Tooltip", "0.0 fluid flows without friction, 1.0 fluid sticks to the surface (0 is hydrophobic, 1 is hydrophilic)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_FluidFriction = { "FluidFriction", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraSDFCollider, FluidFriction), METADATA_PARAMS(Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_FluidFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_FluidFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bForceInteraction_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "DisplayName", "Force Interaction" },
		{ "ModuleRelativePath", "Public/ZibraSDFCollider.h" },
		{ "Tooltip", "Allows the fluid to apply force to the object" },
	};
#endif
	void Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bForceInteraction_SetBit(void* Obj)
	{
		((UZibraSDFCollider*)Obj)->bForceInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bForceInteraction = { "bForceInteraction", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UZibraSDFCollider), &Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bForceInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bForceInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bForceInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bInvertSDF_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "DisplayName", "Invert SDF" },
		{ "ModuleRelativePath", "Public/ZibraSDFCollider.h" },
		{ "Tooltip", "Inverts collider so liquid can only exist inside" },
	};
#endif
	void Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bInvertSDF_SetBit(void* Obj)
	{
		((UZibraSDFCollider*)Obj)->bInvertSDF = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bInvertSDF = { "bInvertSDF", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UZibraSDFCollider), &Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bInvertSDF_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bInvertSDF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bInvertSDF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_ObjectTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraSDFCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_ObjectTransform = { "ObjectTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraSDFCollider, ObjectTransform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_ObjectTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_ObjectTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZibraSDFCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_FluidFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bForceInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_bInvertSDF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraSDFCollider_Statics::NewProp_ObjectTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZibraSDFCollider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZibraSDFCollider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZibraSDFCollider_Statics::ClassParams = {
		&UZibraSDFCollider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZibraSDFCollider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZibraSDFCollider_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UZibraSDFCollider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraSDFCollider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZibraSDFCollider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZibraSDFCollider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZibraSDFCollider, 2006808463);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<UZibraSDFCollider>()
	{
		return UZibraSDFCollider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZibraSDFCollider(Z_Construct_UClass_UZibraSDFCollider, &UZibraSDFCollider::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("UZibraSDFCollider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZibraSDFCollider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
