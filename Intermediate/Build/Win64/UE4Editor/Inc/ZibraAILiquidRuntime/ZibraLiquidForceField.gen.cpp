// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraLiquidForceField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraLiquidForceField() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldShape();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldType();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraLiquidForceField_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraLiquidForceField();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulator();
// End Cross Module References
	static UEnum* EForceFieldShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldShape, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("EForceFieldShape"));
		}
		return Singleton;
	}
	template<> ZIBRAAILIQUIDRUNTIME_API UEnum* StaticEnum<EForceFieldShape>()
	{
		return EForceFieldShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EForceFieldShape(EForceFieldShape_StaticEnum, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("EForceFieldShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldShape_Hash() { return 354038967U; }
	UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EForceFieldShape"), 0, Get_Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EForceFieldShape_Sphere", (int64)EForceFieldShape_Sphere },
				{ "EForceFieldShape_Cube", (int64)EForceFieldShape_Cube },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EForceFieldShape_Cube.DisplayName", "Cube" },
				{ "EForceFieldShape_Cube.Name", "EForceFieldShape_Cube" },
				{ "EForceFieldShape_Sphere.DisplayName", "Sphere" },
				{ "EForceFieldShape_Sphere.Name", "EForceFieldShape_Sphere" },
				{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
				nullptr,
				"EForceFieldShape",
				"EForceFieldShape",
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
	static UEnum* EForceFieldType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldType, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("EForceFieldType"));
		}
		return Singleton;
	}
	template<> ZIBRAAILIQUIDRUNTIME_API UEnum* StaticEnum<EForceFieldType>()
	{
		return EForceFieldType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EForceFieldType(EForceFieldType_StaticEnum, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("EForceFieldType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldType_Hash() { return 2378572182U; }
	UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EForceFieldType"), 0, Get_Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EForceFieldType_Radial", (int64)EForceFieldType_Radial },
				{ "EForceFieldType_Directional", (int64)EForceFieldType_Directional },
				{ "EForceFieldType_Swirl", (int64)EForceFieldType_Swirl },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EForceFieldType_Directional.DisplayName", "Directional" },
				{ "EForceFieldType_Directional.Name", "EForceFieldType_Directional" },
				{ "EForceFieldType_Radial.DisplayName", "Radial" },
				{ "EForceFieldType_Radial.Name", "EForceFieldType_Radial" },
				{ "EForceFieldType_Swirl.DisplayName", "Swirl" },
				{ "EForceFieldType_Swirl.Name", "EForceFieldType_Swirl" },
				{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
				nullptr,
				"EForceFieldType",
				"EForceFieldType",
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
	DEFINE_FUNCTION(UZibraLiquidForceField::execSetDistanceDecay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistanceDecay(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidForceField::execGetDistanceDecay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDistanceDecay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidForceField::execSetStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStrength(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidForceField::execGetStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidForceField::execGetShape)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EForceFieldShape>*)Z_Param__Result=P_THIS->GetShape();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidForceField::execSetShape)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShape(EForceFieldShape(Z_Param_NewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidForceField::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EForceFieldType>*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidForceField::execSetType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetType(EForceFieldType(Z_Param_NewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidForceField::execDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraLiquidForceField::execEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enable();
		P_NATIVE_END;
	}
	void UZibraLiquidForceField::StaticRegisterNativesUZibraLiquidForceField()
	{
		UClass* Class = UZibraLiquidForceField::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Disable", &UZibraLiquidForceField::execDisable },
			{ "Enable", &UZibraLiquidForceField::execEnable },
			{ "GetDistanceDecay", &UZibraLiquidForceField::execGetDistanceDecay },
			{ "GetShape", &UZibraLiquidForceField::execGetShape },
			{ "GetStrength", &UZibraLiquidForceField::execGetStrength },
			{ "GetType", &UZibraLiquidForceField::execGetType },
			{ "SetDistanceDecay", &UZibraLiquidForceField::execSetDistanceDecay },
			{ "SetShape", &UZibraLiquidForceField::execSetShape },
			{ "SetStrength", &UZibraLiquidForceField::execSetStrength },
			{ "SetType", &UZibraLiquidForceField::execSetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZibraLiquidForceField_Disable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidForceField_Disable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Force Field" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidForceField_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidForceField, nullptr, "Disable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidForceField_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidForceField_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidForceField_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidForceField_Enable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidForceField_Enable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Force Field" },
		{ "Comment", "//API\n" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
		{ "ToolTip", "API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidForceField_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidForceField, nullptr, "Enable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidForceField_Enable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidForceField_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidForceField_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics
	{
		struct ZibraLiquidForceField_eventGetDistanceDecay_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidForceField_eventGetDistanceDecay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Force Field" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidForceField, nullptr, "GetDistanceDecay", nullptr, nullptr, sizeof(ZibraLiquidForceField_eventGetDistanceDecay_Parms), Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics
	{
		struct ZibraLiquidForceField_eventGetShape_Parms
		{
			TEnumAsByte<EForceFieldShape> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidForceField_eventGetShape_Parms, ReturnValue), Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Force Field" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidForceField, nullptr, "GetShape", nullptr, nullptr, sizeof(ZibraLiquidForceField_eventGetShape_Parms), Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidForceField_GetShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidForceField_GetShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics
	{
		struct ZibraLiquidForceField_eventGetStrength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidForceField_eventGetStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Force Field" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidForceField, nullptr, "GetStrength", nullptr, nullptr, sizeof(ZibraLiquidForceField_eventGetStrength_Parms), Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidForceField_GetStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidForceField_GetStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics
	{
		struct ZibraLiquidForceField_eventGetType_Parms
		{
			TEnumAsByte<EForceFieldType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidForceField_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Force Field" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidForceField, nullptr, "GetType", nullptr, nullptr, sizeof(ZibraLiquidForceField_eventGetType_Parms), Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidForceField_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidForceField_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics
	{
		struct ZibraLiquidForceField_eventSetDistanceDecay_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidForceField_eventSetDistanceDecay_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Force Field" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidForceField, nullptr, "SetDistanceDecay", nullptr, nullptr, sizeof(ZibraLiquidForceField_eventSetDistanceDecay_Parms), Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics
	{
		struct ZibraLiquidForceField_eventSetShape_Parms
		{
			TEnumAsByte<EForceFieldShape> NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidForceField_eventSetShape_Parms, NewValue), Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Force Field" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidForceField, nullptr, "SetShape", nullptr, nullptr, sizeof(ZibraLiquidForceField_eventSetShape_Parms), Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidForceField_SetShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidForceField_SetShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics
	{
		struct ZibraLiquidForceField_eventSetStrength_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidForceField_eventSetStrength_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Force Field" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidForceField, nullptr, "SetStrength", nullptr, nullptr, sizeof(ZibraLiquidForceField_eventSetStrength_Parms), Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidForceField_SetStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidForceField_SetStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics
	{
		struct ZibraLiquidForceField_eventSetType_Parms
		{
			TEnumAsByte<EForceFieldType> NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquidForceField_eventSetType_Parms, NewValue), Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Force Field" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraLiquidForceField, nullptr, "SetType", nullptr, nullptr, sizeof(ZibraLiquidForceField_eventSetType_Parms), Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraLiquidForceField_SetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraLiquidForceField_SetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZibraLiquidForceField_NoRegister()
	{
		return UZibraLiquidForceField::StaticClass();
	}
	struct Z_Construct_UClass_UZibraLiquidForceField_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceDecay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceDecay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZibraLiquidForceField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZibraManipulator,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZibraLiquidForceField_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZibraLiquidForceField_Disable, "Disable" }, // 3514166348
		{ &Z_Construct_UFunction_UZibraLiquidForceField_Enable, "Enable" }, // 498876400
		{ &Z_Construct_UFunction_UZibraLiquidForceField_GetDistanceDecay, "GetDistanceDecay" }, // 3135827127
		{ &Z_Construct_UFunction_UZibraLiquidForceField_GetShape, "GetShape" }, // 1452174817
		{ &Z_Construct_UFunction_UZibraLiquidForceField_GetStrength, "GetStrength" }, // 2960594585
		{ &Z_Construct_UFunction_UZibraLiquidForceField_GetType, "GetType" }, // 2048627497
		{ &Z_Construct_UFunction_UZibraLiquidForceField_SetDistanceDecay, "SetDistanceDecay" }, // 849015626
		{ &Z_Construct_UFunction_UZibraLiquidForceField_SetShape, "SetShape" }, // 4079035327
		{ &Z_Construct_UFunction_UZibraLiquidForceField_SetStrength, "SetStrength" }, // 3980300351
		{ &Z_Construct_UFunction_UZibraLiquidForceField_SetType, "SetType" }, // 1153748243
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidForceField_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ZibraAI" },
		{ "DisplayName", "Zibra Force Field" },
		{ "HideCategories", "Rendering Replication Input Actor Base Collision Shape OverlapCapsule Physics Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "ZibraLiquidForceField.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidForceField, Type), Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldType, METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidForceField, Shape), Z_Construct_UEnum_ZibraAILiquidRuntime_EForceFieldShape, METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Shape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
		{ "Tooltip", "The strength of the force acting on the liquid" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidForceField, Strength), METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_DistanceDecay_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidForceField.h" },
		{ "Tooltip", "How fast does the force lose its strenght with distance to the center" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_DistanceDecay = { "DistanceDecay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraLiquidForceField, DistanceDecay), METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_DistanceDecay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_DistanceDecay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZibraLiquidForceField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Shape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraLiquidForceField_Statics::NewProp_DistanceDecay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZibraLiquidForceField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZibraLiquidForceField>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZibraLiquidForceField_Statics::ClassParams = {
		&UZibraLiquidForceField::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZibraLiquidForceField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidForceField_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZibraLiquidForceField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraLiquidForceField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZibraLiquidForceField()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZibraLiquidForceField_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZibraLiquidForceField, 4011929216);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<UZibraLiquidForceField>()
	{
		return UZibraLiquidForceField::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZibraLiquidForceField(Z_Construct_UClass_UZibraLiquidForceField, &UZibraLiquidForceField::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("UZibraLiquidForceField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZibraLiquidForceField);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
