// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraLiquidTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraLiquidTypes() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_EZibraLicenseKeyStatus();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ERayMarchingBounces();
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ELiquidRefractionQuality();
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ERenderingMode();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLicenseKeyResponse();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraResponse_Data();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraResponse_Content();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraVoxel_Representation();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FObjectTransform();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraRequest_Content();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelEmbedding();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraLiquidMaterialParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraLiquidSolverParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EZibraLicenseKeyStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ZibraAILiquidRuntime_EZibraLicenseKeyStatus, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("EZibraLicenseKeyStatus"));
		}
		return Singleton;
	}
	template<> ZIBRAAILIQUIDRUNTIME_API UEnum* StaticEnum<EZibraLicenseKeyStatus>()
	{
		return EZibraLicenseKeyStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EZibraLicenseKeyStatus(EZibraLicenseKeyStatus_StaticEnum, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("EZibraLicenseKeyStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ZibraAILiquidRuntime_EZibraLicenseKeyStatus_Hash() { return 2502366506U; }
	UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_EZibraLicenseKeyStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EZibraLicenseKeyStatus"), 0, Get_Z_Construct_UEnum_ZibraAILiquidRuntime_EZibraLicenseKeyStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EZibraLicenseKeyStatus_OK", (int64)EZibraLicenseKeyStatus_OK },
				{ "EZibraLicenseKeyStatus_KeyValidationInProgress", (int64)EZibraLicenseKeyStatus_KeyValidationInProgress },
				{ "EZibraLicenseKeyStatus_NetworkError", (int64)EZibraLicenseKeyStatus_NetworkError },
				{ "EZibraLicenseKeyStatus_NotRegistered", (int64)EZibraLicenseKeyStatus_NotRegistered },
				{ "EZibraLicenseKeyStatus_NotInitialized", (int64)EZibraLicenseKeyStatus_NotInitialized },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EZibraLicenseKeyStatus_KeyValidationInProgress.DisplayName", "Key Validation In Progress" },
				{ "EZibraLicenseKeyStatus_KeyValidationInProgress.Name", "EZibraLicenseKeyStatus_KeyValidationInProgress" },
				{ "EZibraLicenseKeyStatus_NetworkError.DisplayName", "Network Error" },
				{ "EZibraLicenseKeyStatus_NetworkError.Name", "EZibraLicenseKeyStatus_NetworkError" },
				{ "EZibraLicenseKeyStatus_NotInitialized.DisplayName", "Not Initialized" },
				{ "EZibraLicenseKeyStatus_NotInitialized.Name", "EZibraLicenseKeyStatus_NotInitialized" },
				{ "EZibraLicenseKeyStatus_NotRegistered.DisplayName", "Not Registered" },
				{ "EZibraLicenseKeyStatus_NotRegistered.Name", "EZibraLicenseKeyStatus_NotRegistered" },
				{ "EZibraLicenseKeyStatus_OK.DisplayName", "OK" },
				{ "EZibraLicenseKeyStatus_OK.Name", "EZibraLicenseKeyStatus_OK" },
				{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
				nullptr,
				"EZibraLicenseKeyStatus",
				"EZibraLicenseKeyStatus",
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
	static UEnum* ERayMarchingBounces_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ZibraAILiquidRuntime_ERayMarchingBounces, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ERayMarchingBounces"));
		}
		return Singleton;
	}
	template<> ZIBRAAILIQUIDRUNTIME_API UEnum* StaticEnum<ERayMarchingBounces>()
	{
		return ERayMarchingBounces_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERayMarchingBounces(ERayMarchingBounces_StaticEnum, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ERayMarchingBounces"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ZibraAILiquidRuntime_ERayMarchingBounces_Hash() { return 1315088769U; }
	UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ERayMarchingBounces()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERayMarchingBounces"), 0, Get_Z_Construct_UEnum_ZibraAILiquidRuntime_ERayMarchingBounces_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERayMarchingBounces_SingleBounce", (int64)ERayMarchingBounces_SingleBounce },
				{ "ERayMarchingBounces_TwoBounces", (int64)ERayMarchingBounces_TwoBounces },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ERayMarchingBounces_SingleBounce.DisplayName", "Single Bounce" },
				{ "ERayMarchingBounces_SingleBounce.Name", "ERayMarchingBounces_SingleBounce" },
				{ "ERayMarchingBounces_TwoBounces.DisplayName", "Two Bounces" },
				{ "ERayMarchingBounces_TwoBounces.Name", "ERayMarchingBounces_TwoBounces" },
				{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
				nullptr,
				"ERayMarchingBounces",
				"ERayMarchingBounces",
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
	static UEnum* ELiquidRefractionQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ZibraAILiquidRuntime_ELiquidRefractionQuality, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ELiquidRefractionQuality"));
		}
		return Singleton;
	}
	template<> ZIBRAAILIQUIDRUNTIME_API UEnum* StaticEnum<ELiquidRefractionQuality>()
	{
		return ELiquidRefractionQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELiquidRefractionQuality(ELiquidRefractionQuality_StaticEnum, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ELiquidRefractionQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ZibraAILiquidRuntime_ELiquidRefractionQuality_Hash() { return 1853836791U; }
	UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ELiquidRefractionQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELiquidRefractionQuality"), 0, Get_Z_Construct_UEnum_ZibraAILiquidRuntime_ELiquidRefractionQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELiquidRefractionQuality_PerVertexRender", (int64)ELiquidRefractionQuality_PerVertexRender },
				{ "ELiquidRefractionQuality_PerPixelRender", (int64)ELiquidRefractionQuality_PerPixelRender },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "//Advanced Parameters\n" },
				{ "ELiquidRefractionQuality_PerPixelRender.DisplayName", "Per Pixel Render" },
				{ "ELiquidRefractionQuality_PerPixelRender.Name", "ELiquidRefractionQuality_PerPixelRender" },
				{ "ELiquidRefractionQuality_PerVertexRender.DisplayName", "Per Vertex Render" },
				{ "ELiquidRefractionQuality_PerVertexRender.Name", "ELiquidRefractionQuality_PerVertexRender" },
				{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
				{ "ToolTip", "Advanced Parameters" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
				nullptr,
				"ELiquidRefractionQuality",
				"ELiquidRefractionQuality",
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
	static UEnum* ERenderingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ZibraAILiquidRuntime_ERenderingMode, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ERenderingMode"));
		}
		return Singleton;
	}
	template<> ZIBRAAILIQUIDRUNTIME_API UEnum* StaticEnum<ERenderingMode>()
	{
		return ERenderingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERenderingMode(ERenderingMode_StaticEnum, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ERenderingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ZibraAILiquidRuntime_ERenderingMode_Hash() { return 1182439964U; }
	UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ERenderingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERenderingMode"), 0, Get_Z_Construct_UEnum_ZibraAILiquidRuntime_ERenderingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERenderingMode_ParticleRender", (int64)ERenderingMode_ParticleRender },
				{ "ERenderingMode_MeshRender", (int64)ERenderingMode_MeshRender },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ERenderingMode_MeshRender.DisplayName", "Mesh Render" },
				{ "ERenderingMode_MeshRender.Name", "ERenderingMode_MeshRender" },
				{ "ERenderingMode_ParticleRender.DisplayName", "Particle Render" },
				{ "ERenderingMode_ParticleRender.Name", "ERenderingMode_ParticleRender" },
				{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
				nullptr,
				"ERenderingMode",
				"ERenderingMode",
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
class UScriptStruct* FLicenseKeyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FLicenseKeyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLicenseKeyResponse, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("LicenseKeyResponse"), sizeof(FLicenseKeyResponse), Get_Z_Construct_UScriptStruct_FLicenseKeyResponse_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FLicenseKeyResponse>()
{
	return FLicenseKeyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLicenseKeyResponse(FLicenseKeyResponse::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("LicenseKeyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFLicenseKeyResponse
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFLicenseKeyResponse()
	{
		UScriptStruct::DeferCppStructOps<FLicenseKeyResponse>(FName(TEXT("LicenseKeyResponse")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFLicenseKeyResponse;
	struct Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_api_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_api_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLicenseKeyResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::NewProp_api_key_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::NewProp_api_key = { "api_key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLicenseKeyResponse, api_key), METADATA_PARAMS(Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::NewProp_api_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::NewProp_api_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::NewProp_api_key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"LicenseKeyResponse",
		sizeof(FLicenseKeyResponse),
		alignof(FLicenseKeyResponse),
		Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLicenseKeyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLicenseKeyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LicenseKeyResponse"), sizeof(FLicenseKeyResponse), Get_Z_Construct_UScriptStruct_FLicenseKeyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLicenseKeyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLicenseKeyResponse_Hash() { return 3363340712U; }
class UScriptStruct* FZibraLiquidAdvancedRenderParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ZibraLiquidAdvancedRenderParameters"), sizeof(FZibraLiquidAdvancedRenderParameters), Get_Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FZibraLiquidAdvancedRenderParameters>()
{
	return FZibraLiquidAdvancedRenderParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FZibraLiquidAdvancedRenderParameters(FZibraLiquidAdvancedRenderParameters::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ZibraLiquidAdvancedRenderParameters"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraLiquidAdvancedRenderParameters
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraLiquidAdvancedRenderParameters()
	{
		UScriptStruct::DeferCppStructOps<FZibraLiquidAdvancedRenderParameters>(FName(TEXT("ZibraLiquidAdvancedRenderParameters")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraLiquidAdvancedRenderParameters;
	struct Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefractionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RefractionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefractionBounces_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RefractionBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLiquidMeshSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLiquidMeshSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalJFAIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AdditionalJFAIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexOptimizationIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexOptimizationIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOptimizationIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MeshOptimizationIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexOptimizationStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertexOptimizationStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOptimizationStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshOptimizationStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DualContourIsoSurfaceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DualContourIsoSurfaceLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsoSurfaceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsoSurfaceLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayMarchIsoSurface_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayMarchIsoSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayMarchMaxSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RayMarchMaxSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayMarchStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayMarchStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayMarchStepFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayMarchStepFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZibraLiquidAdvancedRenderParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RefractionQuality_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Controls the quality of the liquid depth" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RefractionQuality = { "RefractionQuality", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, RefractionQuality), Z_Construct_UEnum_ZibraAILiquidRuntime_ELiquidRefractionQuality, METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RefractionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RefractionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RefractionBounces_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Number of bounces of the refraction ray, to see the liquid behing itself you need 2 bounces" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RefractionBounces = { "RefractionBounces", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, RefractionBounces), Z_Construct_UEnum_ZibraAILiquidRuntime_ERayMarchingBounces, METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RefractionBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RefractionBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MaxLiquidMeshSize_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The maximum fraction of triangles the mesh can have (below 1.0f there is a chance of rendering only part of the mesh). Has a large effect on VRAM and performance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MaxLiquidMeshSize = { "MaxLiquidMeshSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, MaxLiquidMeshSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MaxLiquidMeshSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MaxLiquidMeshSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_AdditionalJFAIterations_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Additional JFA Iterations" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Number of additional sphere render iterations, controls how large spheres can get, has a large impact on performance" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_AdditionalJFAIterations = { "AdditionalJFAIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, AdditionalJFAIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_AdditionalJFAIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_AdditionalJFAIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_VertexOptimizationIterations_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Number of iterations that move the mesh vertex to the liquid isosurface" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_VertexOptimizationIterations = { "VertexOptimizationIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, VertexOptimizationIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_VertexOptimizationIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_VertexOptimizationIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MeshOptimizationIterations_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Number of smoothing iterations for the mesh" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MeshOptimizationIterations = { "MeshOptimizationIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, MeshOptimizationIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MeshOptimizationIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MeshOptimizationIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_VertexOptimizationStep_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "This parameter moves liquid mesh vertices to be closer to the actual liquid surface. It should be manually fine tuned until you get a smooth mesh." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_VertexOptimizationStep = { "VertexOptimizationStep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, VertexOptimizationStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_VertexOptimizationStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_VertexOptimizationStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MeshOptimizationStep_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "This parameter moves liquid mesh vertices to be closer to the actual liquid surface. It should be manually fine tuned until you get a smooth mesh." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MeshOptimizationStep = { "MeshOptimizationStep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, MeshOptimizationStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MeshOptimizationStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MeshOptimizationStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_DualContourIsoSurfaceLevel_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The isovalue at which the mesh vertices are generated" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_DualContourIsoSurfaceLevel = { "DualContourIsoSurfaceLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, DualContourIsoSurfaceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_DualContourIsoSurfaceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_DualContourIsoSurfaceLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_IsoSurfaceLevel_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Controls the position of the fluid surface. Lower values result in thicker surface." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_IsoSurfaceLevel = { "IsoSurfaceLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, IsoSurfaceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_IsoSurfaceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_IsoSurfaceLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchIsoSurface_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The isosufrace level for the ray marching. Should be about 1-1/2 of the liquid density." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchIsoSurface = { "RayMarchIsoSurface", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, RayMarchIsoSurface), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchIsoSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchIsoSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchMaxSteps_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "128" },
		{ "ClampMin", "4" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Maximum number of steps the ray can go, has a large effect on the performance" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchMaxSteps = { "RayMarchMaxSteps", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, RayMarchMaxSteps), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchMaxSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchMaxSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchStepSize_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Step size of the ray marching, controls accuracy, also has a large effect on performance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchStepSize = { "RayMarchStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, RayMarchStepSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchStepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchStepFactor_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Varies the ray marching step size, in some cases might improve performace by slightly reducing ray marching quality" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchStepFactor = { "RayMarchStepFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidAdvancedRenderParameters, RayMarchStepFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchStepFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchStepFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RefractionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RefractionBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MaxLiquidMeshSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_AdditionalJFAIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_VertexOptimizationIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MeshOptimizationIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_VertexOptimizationStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_MeshOptimizationStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_DualContourIsoSurfaceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_IsoSurfaceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchIsoSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchMaxSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::NewProp_RayMarchStepFactor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"ZibraLiquidAdvancedRenderParameters",
		sizeof(FZibraLiquidAdvancedRenderParameters),
		alignof(FZibraLiquidAdvancedRenderParameters),
		Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ZibraLiquidAdvancedRenderParameters"), sizeof(FZibraLiquidAdvancedRenderParameters), Get_Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters_Hash() { return 1595772856U; }
class UScriptStruct* FZibraResponse_Data::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FZibraResponse_Data_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FZibraResponse_Data, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ZibraResponse_Data"), sizeof(FZibraResponse_Data), Get_Z_Construct_UScriptStruct_FZibraResponse_Data_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FZibraResponse_Data>()
{
	return FZibraResponse_Data::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FZibraResponse_Data(FZibraResponse_Data::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ZibraResponse_Data"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraResponse_Data
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraResponse_Data()
	{
		UScriptStruct::DeferCppStructOps<FZibraResponse_Data>(FName(TEXT("ZibraResponse_Data")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraResponse_Data;
	struct Z_Construct_UScriptStruct_FZibraResponse_Data_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraResponse_Data_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZibraResponse_Data_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZibraResponse_Data>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZibraResponse_Data_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"ZibraResponse_Data",
		sizeof(FZibraResponse_Data),
		alignof(FZibraResponse_Data),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraResponse_Data_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraResponse_Data_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZibraResponse_Data()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FZibraResponse_Data_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ZibraResponse_Data"), sizeof(FZibraResponse_Data), Get_Z_Construct_UScriptStruct_FZibraResponse_Data_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FZibraResponse_Data_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FZibraResponse_Data_Hash() { return 4001343610U; }
class UScriptStruct* FZibraResponse_Content::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FZibraResponse_Content_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FZibraResponse_Content, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ZibraResponse_Content"), sizeof(FZibraResponse_Content), Get_Z_Construct_UScriptStruct_FZibraResponse_Content_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FZibraResponse_Content>()
{
	return FZibraResponse_Content::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FZibraResponse_Content(FZibraResponse_Content::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ZibraResponse_Content"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraResponse_Content
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraResponse_Content()
	{
		UScriptStruct::DeferCppStructOps<FZibraResponse_Content>(FName(TEXT("ZibraResponse_Content")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraResponse_Content;
	struct Z_Construct_UScriptStruct_FZibraResponse_Content_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZibraResponse_Content>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_status_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraResponse_Content, status), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_result_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraResponse_Content, result), Z_Construct_UScriptStruct_FZibraVoxel_Representation, METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_reason_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_reason = { "reason", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraResponse_Content, reason), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::NewProp_reason,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"ZibraResponse_Content",
		sizeof(FZibraResponse_Content),
		alignof(FZibraResponse_Content),
		Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZibraResponse_Content()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FZibraResponse_Content_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ZibraResponse_Content"), sizeof(FZibraResponse_Content), Get_Z_Construct_UScriptStruct_FZibraResponse_Content_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FZibraResponse_Content_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FZibraResponse_Content_Hash() { return 4154966671U; }
class UScriptStruct* FSkinnedVoxelRepresentation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("SkinnedVoxelRepresentation"), sizeof(FSkinnedVoxelRepresentation), Get_Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FSkinnedVoxelRepresentation>()
{
	return FSkinnedVoxelRepresentation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkinnedVoxelRepresentation(FSkinnedVoxelRepresentation::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("SkinnedVoxelRepresentation"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFSkinnedVoxelRepresentation
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFSkinnedVoxelRepresentation()
	{
		UScriptStruct::DeferCppStructOps<FSkinnedVoxelRepresentation>(FName(TEXT("SkinnedVoxelRepresentation")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFSkinnedVoxelRepresentation;
	struct Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_meshes_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshes_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_meshes_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkinnedVoxelRepresentation>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::NewProp_meshes_data_Inner = { "meshes_data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FZibraVoxel_Representation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::NewProp_meshes_data_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::NewProp_meshes_data = { "meshes_data", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkinnedVoxelRepresentation, meshes_data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::NewProp_meshes_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::NewProp_meshes_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::NewProp_meshes_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::NewProp_meshes_data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"SkinnedVoxelRepresentation",
		sizeof(FSkinnedVoxelRepresentation),
		alignof(FSkinnedVoxelRepresentation),
		Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkinnedVoxelRepresentation"), sizeof(FSkinnedVoxelRepresentation), Get_Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkinnedVoxelRepresentation_Hash() { return 119543873U; }
class UScriptStruct* FZibraVoxel_Representation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FZibraVoxel_Representation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FZibraVoxel_Representation, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ZibraVoxel_Representation"), sizeof(FZibraVoxel_Representation), Get_Z_Construct_UScriptStruct_FZibraVoxel_Representation_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FZibraVoxel_Representation>()
{
	return FZibraVoxel_Representation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FZibraVoxel_Representation(FZibraVoxel_Representation::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ZibraVoxel_Representation"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraVoxel_Representation
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraVoxel_Representation()
	{
		UScriptStruct::DeferCppStructOps<FZibraVoxel_Representation>(FName(TEXT("ZibraVoxel_Representation")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraVoxel_Representation;
	struct Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_embeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_embeds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sd_grid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sd_grid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZibraVoxel_Representation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_embeds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_embeds = { "embeds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraVoxel_Representation, embeds), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_embeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_embeds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_sd_grid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_sd_grid = { "sd_grid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraVoxel_Representation, sd_grid), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_sd_grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_sd_grid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraVoxel_Representation, transform), Z_Construct_UScriptStruct_FObjectTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_embeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_sd_grid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::NewProp_transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"ZibraVoxel_Representation",
		sizeof(FZibraVoxel_Representation),
		alignof(FZibraVoxel_Representation),
		Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZibraVoxel_Representation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FZibraVoxel_Representation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ZibraVoxel_Representation"), sizeof(FZibraVoxel_Representation), Get_Z_Construct_UScriptStruct_FZibraVoxel_Representation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FZibraVoxel_Representation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FZibraVoxel_Representation_Hash() { return 275415623U; }
class UScriptStruct* FZibraRequest_Content::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FZibraRequest_Content_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FZibraRequest_Content, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ZibraRequest_Content"), sizeof(FZibraRequest_Content), Get_Z_Construct_UScriptStruct_FZibraRequest_Content_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FZibraRequest_Content>()
{
	return FZibraRequest_Content::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FZibraRequest_Content(FZibraRequest_Content::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ZibraRequest_Content"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraRequest_Content
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraRequest_Content()
	{
		UScriptStruct::DeferCppStructOps<FZibraRequest_Content>(FName(TEXT("ZibraRequest_Content")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraRequest_Content;
	struct Z_Construct_UScriptStruct_FZibraRequest_Content_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_vertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_faces_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_faces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vox_dim_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_vox_dim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sdf_dim_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sdf_dim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cutoff_weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cutoff_weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_static_quantization_MetaData[];
#endif
		static void NewProp_static_quantization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_static_quantization;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZibraRequest_Content>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_vertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_vertices = { "vertices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraRequest_Content, vertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_vertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_faces_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_faces = { "faces", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraRequest_Content, faces), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_faces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_faces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_vox_dim_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_vox_dim = { "vox_dim", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraRequest_Content, vox_dim), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_vox_dim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_vox_dim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_sdf_dim_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_sdf_dim = { "sdf_dim", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraRequest_Content, sdf_dim), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_sdf_dim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_sdf_dim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_cutoff_weight_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_cutoff_weight = { "cutoff_weight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraRequest_Content, cutoff_weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_cutoff_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_cutoff_weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_static_quantization_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_static_quantization_SetBit(void* Obj)
	{
		((FZibraRequest_Content*)Obj)->static_quantization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_static_quantization = { "static_quantization", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FZibraRequest_Content), &Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_static_quantization_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_static_quantization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_static_quantization_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_faces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_vox_dim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_sdf_dim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_cutoff_weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::NewProp_static_quantization,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"ZibraRequest_Content",
		sizeof(FZibraRequest_Content),
		alignof(FZibraRequest_Content),
		Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZibraRequest_Content()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FZibraRequest_Content_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ZibraRequest_Content"), sizeof(FZibraRequest_Content), Get_Z_Construct_UScriptStruct_FZibraRequest_Content_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FZibraRequest_Content_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FZibraRequest_Content_Hash() { return 3583209051U; }
class UScriptStruct* FVoxelEmbedding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FVoxelEmbedding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelEmbedding, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("VoxelEmbedding"), sizeof(FVoxelEmbedding), Get_Z_Construct_UScriptStruct_FVoxelEmbedding_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FVoxelEmbedding>()
{
	return FVoxelEmbedding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelEmbedding(FVoxelEmbedding::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("VoxelEmbedding"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFVoxelEmbedding
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFVoxelEmbedding()
	{
		UScriptStruct::DeferCppStructOps<FVoxelEmbedding>(FName(TEXT("VoxelEmbedding")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFVoxelEmbedding;
	struct Z_Construct_UScriptStruct_FVoxelEmbedding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_embeds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_embeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_embeds;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_grid_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_grid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelEmbedding>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_embeds_Inner = { "embeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_embeds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_embeds = { "embeds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelEmbedding, embeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_embeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_embeds_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_grid_Inner = { "grid", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_grid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelEmbedding, grid), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_grid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelEmbedding, transform), Z_Construct_UScriptStruct_FObjectTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_embeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_embeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_grid_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_grid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::NewProp_transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"VoxelEmbedding",
		sizeof(FVoxelEmbedding),
		alignof(FVoxelEmbedding),
		Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelEmbedding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelEmbedding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelEmbedding"), sizeof(FVoxelEmbedding), Get_Z_Construct_UScriptStruct_FVoxelEmbedding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelEmbedding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelEmbedding_Hash() { return 146950101U; }
class UScriptStruct* FObjectTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FObjectTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectTransform, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ObjectTransform"), sizeof(FObjectTransform), Get_Z_Construct_UScriptStruct_FObjectTransform_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FObjectTransform>()
{
	return FObjectTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectTransform(FObjectTransform::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ObjectTransform"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFObjectTransform
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFObjectTransform()
	{
		UScriptStruct::DeferCppStructOps<FObjectTransform>(FName(TEXT("ObjectTransform")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFObjectTransform;
	struct Z_Construct_UScriptStruct_FObjectTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Q_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Q;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_T;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectTransform_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_Q_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectTransform, Q), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_Q_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_Q_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_T_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectTransform, T), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_T_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_S_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectTransform, S), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_S_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_S_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_Q,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_T,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectTransform_Statics::NewProp_S,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"ObjectTransform",
		sizeof(FObjectTransform),
		alignof(FObjectTransform),
		Z_Construct_UScriptStruct_FObjectTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectTransform"), sizeof(FObjectTransform), Get_Z_Construct_UScriptStruct_FObjectTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectTransform_Hash() { return 2161133329U; }
class UScriptStruct* FZibraLiquidMaterialParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ZibraLiquidMaterialParams"), sizeof(FZibraLiquidMaterialParams), Get_Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FZibraLiquidMaterialParams>()
{
	return FZibraLiquidMaterialParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FZibraLiquidMaterialParams(FZibraLiquidMaterialParams::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ZibraLiquidMaterialParams"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraLiquidMaterialParams
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraLiquidMaterialParams()
	{
		UScriptStruct::DeferCppStructOps<FZibraLiquidMaterialParams>(FName(TEXT("ZibraLiquidMaterialParams")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraLiquidMaterialParams;
	struct Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReflectionColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmmisiveMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmmisiveMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metalness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Metalness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScatteringAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScatteringAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Opacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorptionAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorptionAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexOfRefraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndexOfRefraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidSurfaceBlur_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidSurfaceBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpecularIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FresnelStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FresnelStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZibraLiquidMaterialParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The color of the liquid body" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_ReflectionColor_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The color of the liquid reflection mod (A - fresnel mod)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_ReflectionColor = { "ReflectionColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, ReflectionColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_ReflectionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_ReflectionColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_EmissiveColor_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The emissive color of the liquid. Normally black for most liquids." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, EmissiveColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_EmissiveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_EmmisiveMultiplier_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The multiplier for the brightness of the emissive color of the liquid." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_EmmisiveMultiplier = { "EmmisiveMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, EmmisiveMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_EmmisiveMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_EmmisiveMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Roughness_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The Roughness of the liquid body" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, Roughness), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Roughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Roughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Metalness_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The metalness of the surface" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Metalness = { "Metalness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, Metalness), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Metalness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Metalness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_ScatteringAmount_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The amount of light being scattered by the liquid volume. Visually adds a fog to the fluid volume. Maximum value makes the liquid opaque." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_ScatteringAmount = { "ScatteringAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, ScatteringAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_ScatteringAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_ScatteringAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Opacity_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The amount of light absorbed in the liquid volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, Opacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Opacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Opacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_AbsorptionAmount_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The amount of light absorbed in the liquid volume. Visually darkens all colors except to the selected liquid color." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_AbsorptionAmount = { "AbsorptionAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, AbsorptionAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_AbsorptionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_AbsorptionAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_IndexOfRefraction_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The index of refraction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_IndexOfRefraction = { "IndexOfRefraction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, IndexOfRefraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_IndexOfRefraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_IndexOfRefraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_FluidSurfaceBlur_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The radius of the blur of the liquid density on the simulation grid. Controls the smoothness of the normals." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_FluidSurfaceBlur = { "FluidSurfaceBlur", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, FluidSurfaceBlur), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_FluidSurfaceBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_FluidSurfaceBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_SpecularIntensity_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Toooltip", "The brightness of the reflection" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_SpecularIntensity = { "SpecularIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, SpecularIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_SpecularIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_SpecularIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_FresnelStrength_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The brightness of the borders of the reflection" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_FresnelStrength = { "FresnelStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidMaterialParams, FresnelStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_FresnelStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_FresnelStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_ReflectionColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_EmissiveColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_EmmisiveMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Roughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Metalness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_ScatteringAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_Opacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_AbsorptionAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_IndexOfRefraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_FluidSurfaceBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_SpecularIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::NewProp_FresnelStrength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"ZibraLiquidMaterialParams",
		sizeof(FZibraLiquidMaterialParams),
		alignof(FZibraLiquidMaterialParams),
		Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZibraLiquidMaterialParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ZibraLiquidMaterialParams"), sizeof(FZibraLiquidMaterialParams), Get_Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FZibraLiquidMaterialParams_Hash() { return 1391377455U; }
class UScriptStruct* FZibraLiquidSolverParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ZIBRAAILIQUIDRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FZibraLiquidSolverParams, Z_Construct_UPackage__Script_ZibraAILiquidRuntime(), TEXT("ZibraLiquidSolverParams"), sizeof(FZibraLiquidSolverParams), Get_Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Hash());
	}
	return Singleton;
}
template<> ZIBRAAILIQUIDRUNTIME_API UScriptStruct* StaticStruct<FZibraLiquidSolverParams>()
{
	return FZibraLiquidSolverParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FZibraLiquidSolverParams(FZibraLiquidSolverParams::StaticStruct, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("ZibraLiquidSolverParams"), false, nullptr, nullptr);
static struct FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraLiquidSolverParams
{
	FScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraLiquidSolverParams()
	{
		UScriptStruct::DeferCppStructOps<FZibraLiquidSolverParams>(FName(TEXT("ZibraLiquidSolverParams")));
	}
} ScriptStruct_ZibraAILiquidRuntime_StaticRegisterNativesFZibraLiquidSolverParams;
	struct Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidStiffnessPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidStiffnessPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParticleDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Viscosity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Viscosity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceTension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceTension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceInteractionStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceInteractionStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZibraLiquidSolverParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The strength and direction of the gravity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidSolverParams, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_FluidStiffness_MetaData[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The stiffness of the liquid, recommended 0.1f" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_FluidStiffness = { "FluidStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidSolverParams, FluidStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_FluidStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_FluidStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_FluidStiffnessPower_MetaData[] = {
		{ "ClampMax", "8.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The sharpness of the stiffness, recommended 4.0f" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_FluidStiffnessPower = { "FluidStiffnessPower", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidSolverParams, FluidStiffnessPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_FluidStiffnessPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_FluidStiffnessPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_ParticleDensity_MetaData[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Resting density of particles. measured in particles/cell. This option directly affects volume of each particle. Higher values correspond to less volume, but higher quality simulation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_ParticleDensity = { "ParticleDensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidSolverParams, ParticleDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_ParticleDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_ParticleDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_MaximumVelocity_MetaData[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The velocity limit of the particles" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_MaximumVelocity = { "MaximumVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidSolverParams, MaximumVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_MaximumVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_MaximumVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_MinimumVelocity_MetaData[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Minimum velocity the particles can have, non-zero values make an infinite flow. Normally this should be 0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_MinimumVelocity = { "MinimumVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidSolverParams, MinimumVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_MinimumVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_MinimumVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_Viscosity_MetaData[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Viscosity of the liquid" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_Viscosity = { "Viscosity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidSolverParams, Viscosity), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_Viscosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_Viscosity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_SurfaceTension_MetaData[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "Surface tension, you can also set it to negative to get a spagettification effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_SurfaceTension = { "SurfaceTension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidSolverParams, SurfaceTension), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_SurfaceTension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_SurfaceTension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_ForceInteractionStrength_MetaData[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquidTypes.h" },
		{ "Tooltip", "The strenght of the force acting on rigid bodies, exponential scale, from exp(-4) to exp(4)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_ForceInteractionStrength = { "ForceInteractionStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZibraLiquidSolverParams, ForceInteractionStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_ForceInteractionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_ForceInteractionStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_FluidStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_FluidStiffnessPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_ParticleDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_MaximumVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_MinimumVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_Viscosity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_SurfaceTension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::NewProp_ForceInteractionStrength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
		nullptr,
		&NewStructOps,
		"ZibraLiquidSolverParams",
		sizeof(FZibraLiquidSolverParams),
		alignof(FZibraLiquidSolverParams),
		Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZibraLiquidSolverParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ZibraLiquidSolverParams"), sizeof(FZibraLiquidSolverParams), Get_Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FZibraLiquidSolverParams_Hash() { return 2632853815U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
