// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraNeuralCollider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraNeuralCollider() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_EEmbeddingsStatus();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraNeuralCollider_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraNeuralCollider();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraSDFCollider();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraVoxel_Representation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelEmbedding();
// End Cross Module References
	static UEnum* EEmbeddingsStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ZibraAILiquidRuntime_EEmbeddingsStatus, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("EEmbeddingsStatus"));
		}
		return Singleton;
	}
	template<> ZIBRAAILIQUIDRUNTIME_API UEnum* StaticEnum<EEmbeddingsStatus>()
	{
		return EEmbeddingsStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmbeddingsStatus(EEmbeddingsStatus_StaticEnum, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("EEmbeddingsStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ZibraAILiquidRuntime_EEmbeddingsStatus_Hash() { return 1079297183U; }
	UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_EEmbeddingsStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmbeddingsStatus"), 0, Get_Z_Construct_UEnum_ZibraAILiquidRuntime_EEmbeddingsStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEmbeddingsStatus_NoEmbeddings", (int64)EEmbeddingsStatus_NoEmbeddings },
				{ "EEmbeddingsStatus_Requested", (int64)EEmbeddingsStatus_Requested },
				{ "EEmbeddingsStatus_Ready", (int64)EEmbeddingsStatus_Ready },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EEmbeddingsStatus_NoEmbeddings.DisplayName", "No SDF" },
				{ "EEmbeddingsStatus_NoEmbeddings.Name", "EEmbeddingsStatus_NoEmbeddings" },
				{ "EEmbeddingsStatus_Ready.DisplayName", "SDF Ready to Use" },
				{ "EEmbeddingsStatus_Ready.Name", "EEmbeddingsStatus_Ready" },
				{ "EEmbeddingsStatus_Requested.DisplayName", "SDF Requested" },
				{ "EEmbeddingsStatus_Requested.Name", "EEmbeddingsStatus_Requested" },
				{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
				nullptr,
				"EEmbeddingsStatus",
				"EEmbeddingsStatus",
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
	DEFINE_FUNCTION(UZibraNeuralCollider::execGetResponseData)
	{
		P_GET_STRUCT(FZibraVoxel_Representation,Z_Param_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetResponseData(Z_Param_Response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraNeuralCollider::execCancelRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZibraNeuralCollider::execGenerateRepresenation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateRepresenation();
		P_NATIVE_END;
	}
	void UZibraNeuralCollider::StaticRegisterNativesUZibraNeuralCollider()
	{
		UClass* Class = UZibraNeuralCollider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelRequest", &UZibraNeuralCollider::execCancelRequest },
			{ "GenerateRepresenation", &UZibraNeuralCollider::execGenerateRepresenation },
			{ "GetResponseData", &UZibraNeuralCollider::execGetResponseData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZibraNeuralCollider_CancelRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraNeuralCollider_CancelRequest_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Zibra Liquid Manipulator" },
		{ "DisplayName", "Cancel Request" },
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraNeuralCollider_CancelRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraNeuralCollider, nullptr, "CancelRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraNeuralCollider_CancelRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraNeuralCollider_CancelRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraNeuralCollider_CancelRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraNeuralCollider_CancelRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraNeuralCollider_GenerateRepresenation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraNeuralCollider_GenerateRepresenation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Zibra Liquid Manipulator" },
		{ "DisplayName", "Generate Collider" },
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraNeuralCollider_GenerateRepresenation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraNeuralCollider, nullptr, "GenerateRepresenation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraNeuralCollider_GenerateRepresenation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraNeuralCollider_GenerateRepresenation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraNeuralCollider_GenerateRepresenation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraNeuralCollider_GenerateRepresenation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics
	{
		struct ZibraNeuralCollider_eventGetResponseData_Parms
		{
			FZibraVoxel_Representation Response;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraNeuralCollider_eventGetResponseData_Parms, Response), Z_Construct_UScriptStruct_FZibraVoxel_Representation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZibraNeuralCollider, nullptr, "GetResponseData", nullptr, nullptr, sizeof(ZibraNeuralCollider_eventGetResponseData_Parms), Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZibraNeuralCollider_NoRegister()
	{
		return UZibraNeuralCollider::StaticClass();
	}
	struct Z_Construct_UClass_UZibraNeuralCollider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundingBoxMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundingBoxMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRepresentationV3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentRepresentationV3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRepresentationV3_MetaData[];
#endif
		static void NewProp_bHasRepresentationV3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRepresentationV3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmbeddingsStatusDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmbeddingsStatusDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRAMFootprintDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VRAMFootprintDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmbeddingsStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmbeddingsStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZibraNeuralCollider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZibraSDFCollider,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZibraNeuralCollider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZibraNeuralCollider_CancelRequest, "CancelRequest" }, // 2834289386
		{ &Z_Construct_UFunction_UZibraNeuralCollider_GenerateRepresenation, "GenerateRepresenation" }, // 2108510981
		{ &Z_Construct_UFunction_UZibraNeuralCollider_GetResponseData, "GetResponseData" }, // 2482229402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraNeuralCollider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ZibraAI" },
		{ "DisplayName", "Zibra Neural Collider" },
		{ "HideCategories", "Replication Input Actor Base Shape OverlapCapsule Cooking Rendering Replication Input Actor Base Collision Shape OverlapCapsule Physics Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "ZibraNeuralCollider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_BoundingBoxMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_BoundingBoxMin = { "BoundingBoxMin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraNeuralCollider, BoundingBoxMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_BoundingBoxMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_BoundingBoxMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_BoundingBoxMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_BoundingBoxMax = { "BoundingBoxMax", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraNeuralCollider, BoundingBoxMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_BoundingBoxMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_BoundingBoxMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_CurrentRepresentationV3_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_CurrentRepresentationV3 = { "CurrentRepresentationV3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraNeuralCollider, CurrentRepresentationV3), Z_Construct_UScriptStruct_FZibraVoxel_Representation, METADATA_PARAMS(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_CurrentRepresentationV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_CurrentRepresentationV3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_bHasRepresentationV3_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	void Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_bHasRepresentationV3_SetBit(void* Obj)
	{
		((UZibraNeuralCollider*)Obj)->bHasRepresentationV3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_bHasRepresentationV3 = { "bHasRepresentationV3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UZibraNeuralCollider), &Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_bHasRepresentationV3_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_bHasRepresentationV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_bHasRepresentationV3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_EmbeddingsStatusDisplay_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "DisplayName", "SDF Status" },
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_EmbeddingsStatusDisplay = { "EmbeddingsStatusDisplay", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraNeuralCollider, EmbeddingsStatusDisplay), METADATA_PARAMS(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_EmbeddingsStatusDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_EmbeddingsStatusDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_VRAMFootprintDisplay_MetaData[] = {
		{ "Category", "Zibra Liquid Manipulator" },
		{ "DisplayName", "Approximate VRAM footprint" },
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_VRAMFootprintDisplay = { "VRAMFootprintDisplay", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraNeuralCollider, VRAMFootprintDisplay), METADATA_PARAMS(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_VRAMFootprintDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_VRAMFootprintDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_EmbeddingsStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_EmbeddingsStatus = { "EmbeddingsStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraNeuralCollider, EmbeddingsStatus), Z_Construct_UEnum_ZibraAILiquidRuntime_EEmbeddingsStatus, METADATA_PARAMS(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_EmbeddingsStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_EmbeddingsStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_VoxelInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraNeuralCollider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_VoxelInfo = { "VoxelInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZibraNeuralCollider, VoxelInfo), Z_Construct_UScriptStruct_FVoxelEmbedding, METADATA_PARAMS(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_VoxelInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_VoxelInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZibraNeuralCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_BoundingBoxMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_BoundingBoxMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_CurrentRepresentationV3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_bHasRepresentationV3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_EmbeddingsStatusDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_VRAMFootprintDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_EmbeddingsStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZibraNeuralCollider_Statics::NewProp_VoxelInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZibraNeuralCollider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZibraNeuralCollider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZibraNeuralCollider_Statics::ClassParams = {
		&UZibraNeuralCollider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZibraNeuralCollider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZibraNeuralCollider_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZibraNeuralCollider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZibraNeuralCollider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZibraNeuralCollider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZibraNeuralCollider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZibraNeuralCollider, 3166894867);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<UZibraNeuralCollider>()
	{
		return UZibraNeuralCollider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZibraNeuralCollider(Z_Construct_UClass_UZibraNeuralCollider, &UZibraNeuralCollider::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("UZibraNeuralCollider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZibraNeuralCollider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
