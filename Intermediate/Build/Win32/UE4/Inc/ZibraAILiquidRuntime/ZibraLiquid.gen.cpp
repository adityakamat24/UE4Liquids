// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZibraAILiquidRuntime/Public/ZibraLiquid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZibraLiquid() {}
// Cross Module References
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_AZibraLiquid_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_AZibraLiquid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ZibraAILiquidRuntime();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulator_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraSDFCollider_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ERayMarchingBounces();
	ZIBRAAILIQUIDRUNTIME_API UEnum* Z_Construct_UEnum_ZibraAILiquidRuntime_ELiquidRefractionQuality();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraLiquidSolverParams();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraLiquidMaterialParams();
	ZIBRAAILIQUIDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters();
	ZIBRAAILIQUIDRUNTIME_API UClass* Z_Construct_UClass_UZibraManipulatorManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AZibraLiquid::execSetRayMarchStepFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayMarchStepFactor(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetRayMarchStepFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRayMarchStepFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetRayMarchStepSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayMarchStepSize(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetRayMarchStepSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRayMarchStepSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetRayMarchMaxSteps)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayMarchMaxSteps(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetRayMarchMaxSteps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRayMarchMaxSteps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetRayMarchIsoSurface)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayMarchIsoSurface(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetRayMarchIsoSurface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRayMarchIsoSurface();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetIsoSurfaceLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsoSurfaceLevel(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetIsoSurfaceLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIsoSurfaceLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetDualContourIsoSurfaceLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDualContourIsoSurfaceLevel(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetDualContourIsoSurfaceLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDualContourIsoSurfaceLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetMeshOptimizationStep)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshOptimizationStep(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetMeshOptimizationStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMeshOptimizationStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetVertexOptimizationStep)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertexOptimizationStep(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetVertexOptimizationStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVertexOptimizationStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetMeshOptimizationIterations)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshOptimizationIterations(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetMeshOptimizationIterations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMeshOptimizationIterations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetVertexOptimizationIterations)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertexOptimizationIterations(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetVertexOptimizationIterations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVertexOptimizationIterations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetAdditionalJFAIterations)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdditionalJFAIterations(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetAdditionalJFAIterations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAdditionalJFAIterations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetMaxLiquidMeshSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxLiquidMeshSize(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetMaxLiquidMeshSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxLiquidMeshSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetUnderwaterRender)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnderwaterRender(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execUnderwaterRenderEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnderwaterRenderEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetRefractionBounces)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRefractionBounces(ERayMarchingBounces(Z_Param_NewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetRefractionBounces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ERayMarchingBounces>*)Z_Param__Result=P_THIS->GetRefractionBounces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetRefractionQuality)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRefractionQuality(ELiquidRefractionQuality(Z_Param_NewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetRefractionQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ELiquidRefractionQuality>*)Z_Param__Result=P_THIS->GetRefractionQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetRayMarchingResolutionDownscale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRayMarchingResolutionDownscale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetRayMarchingResolutionDownscale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayMarchingResolutionDownscale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetBlurRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlurRadius(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetBlurRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBlurRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetParticleScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParticleScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetParticleScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetParticleScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetFluidSurfaceBlur)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFluidSurfaceBlur(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetFluidSurfaceBlur)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFluidSurfaceBlur();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetIndexOfRefraction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndexOfRefraction(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetIndexOfRefraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIndexOfRefraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetAbsorptionAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbsorptionAmount(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetAbsorptionAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAbsorptionAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOpacity(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetOpacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOpacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetScatteringAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScatteringAmount(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetScatteringAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScatteringAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetMetalness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMetalness(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetMetalness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMetalness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetRoughness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoughness(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetRoughness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoughness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetEmissiveColor)
	{
		P_GET_STRUCT(FColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmissiveColor(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetEmissiveColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetEmissiveColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetColor)
	{
		P_GET_STRUCT(FColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetForceInteractionStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceInteractionStrength(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetForceInteractionStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetForceInteractionStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetSurfaceTension)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSurfaceTension(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetSurfaceTension)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSurfaceTension();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetViscosity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViscosity(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetViscosity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetViscosity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetMinimumVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumVelocity(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetMinimumVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinimumVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetMaximumVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaximumVelocity(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetMaximumVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaximumVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetParticleDensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParticleDensity(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetParticleDensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetParticleDensity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetFluidStiffness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFluidStiffness(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetFluidStiffness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFluidStiffness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetGravity)
	{
		P_GET_STRUCT(FVector,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravity(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetGravity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGravity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execStopSDFVisualization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSDFVisualization();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execRunSDFVisualization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunSDFVisualization();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSDFVisualizationRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SDFVisualizationRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execStopSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSimulation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execRunSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunSimulation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSimulationRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SimulationRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetGridResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGridResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetGridResolution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGridResolution(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetMaxNumParticles)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxNumParticles(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetMaxNumParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxNumParticles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetIterationsPerFrame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIterationsPerFrame(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetIterationsPerFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIterationsPerFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetActiveParticleCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveParticleCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetSimulationSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSimulationSpeed(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetSimulationSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSimulationSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetTimeStepMax)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeStepMax(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetTimeStepMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeStepMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execRemoveManipulator)
	{
		P_GET_OBJECT(UZibraManipulator,Z_Param_Manipulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveManipulator(Z_Param_Manipulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execAddManipulator)
	{
		P_GET_OBJECT(UZibraManipulator,Z_Param_NewManipulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddManipulator(Z_Param_NewManipulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execRemoveZibraSDFCollider)
	{
		P_GET_OBJECT(UZibraSDFCollider,Z_Param_NewCollider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveZibraSDFCollider(Z_Param_NewCollider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execAddZibraSDFCollider)
	{
		P_GET_OBJECT(UZibraSDFCollider,Z_Param_NewCollider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddZibraSDFCollider(Z_Param_NewCollider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execSetContainerSize)
	{
		P_GET_STRUCT(FVector,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContainerSize(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execGetContainerSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetContainerSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execAddAllManipulators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAllManipulators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZibraLiquid::execAddAllColliders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAllColliders();
		P_NATIVE_END;
	}
	void AZibraLiquid::StaticRegisterNativesAZibraLiquid()
	{
		UClass* Class = AZibraLiquid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAllColliders", &AZibraLiquid::execAddAllColliders },
			{ "AddAllManipulators", &AZibraLiquid::execAddAllManipulators },
			{ "AddManipulator", &AZibraLiquid::execAddManipulator },
			{ "AddZibraSDFCollider", &AZibraLiquid::execAddZibraSDFCollider },
			{ "GetAbsorptionAmount", &AZibraLiquid::execGetAbsorptionAmount },
			{ "GetActiveParticleCount", &AZibraLiquid::execGetActiveParticleCount },
			{ "GetAdditionalJFAIterations", &AZibraLiquid::execGetAdditionalJFAIterations },
			{ "GetBlurRadius", &AZibraLiquid::execGetBlurRadius },
			{ "GetColor", &AZibraLiquid::execGetColor },
			{ "GetContainerSize", &AZibraLiquid::execGetContainerSize },
			{ "GetDualContourIsoSurfaceLevel", &AZibraLiquid::execGetDualContourIsoSurfaceLevel },
			{ "GetEmissiveColor", &AZibraLiquid::execGetEmissiveColor },
			{ "GetFluidStiffness", &AZibraLiquid::execGetFluidStiffness },
			{ "GetFluidSurfaceBlur", &AZibraLiquid::execGetFluidSurfaceBlur },
			{ "GetForceInteractionStrength", &AZibraLiquid::execGetForceInteractionStrength },
			{ "GetGravity", &AZibraLiquid::execGetGravity },
			{ "GetGridResolution", &AZibraLiquid::execGetGridResolution },
			{ "GetIndexOfRefraction", &AZibraLiquid::execGetIndexOfRefraction },
			{ "GetIsoSurfaceLevel", &AZibraLiquid::execGetIsoSurfaceLevel },
			{ "GetIterationsPerFrame", &AZibraLiquid::execGetIterationsPerFrame },
			{ "GetMaximumVelocity", &AZibraLiquid::execGetMaximumVelocity },
			{ "GetMaxLiquidMeshSize", &AZibraLiquid::execGetMaxLiquidMeshSize },
			{ "GetMaxNumParticles", &AZibraLiquid::execGetMaxNumParticles },
			{ "GetMeshOptimizationIterations", &AZibraLiquid::execGetMeshOptimizationIterations },
			{ "GetMeshOptimizationStep", &AZibraLiquid::execGetMeshOptimizationStep },
			{ "GetMetalness", &AZibraLiquid::execGetMetalness },
			{ "GetMinimumVelocity", &AZibraLiquid::execGetMinimumVelocity },
			{ "GetOpacity", &AZibraLiquid::execGetOpacity },
			{ "GetParticleDensity", &AZibraLiquid::execGetParticleDensity },
			{ "GetParticleScale", &AZibraLiquid::execGetParticleScale },
			{ "GetRayMarchingResolutionDownscale", &AZibraLiquid::execGetRayMarchingResolutionDownscale },
			{ "GetRayMarchIsoSurface", &AZibraLiquid::execGetRayMarchIsoSurface },
			{ "GetRayMarchMaxSteps", &AZibraLiquid::execGetRayMarchMaxSteps },
			{ "GetRayMarchStepFactor", &AZibraLiquid::execGetRayMarchStepFactor },
			{ "GetRayMarchStepSize", &AZibraLiquid::execGetRayMarchStepSize },
			{ "GetRefractionBounces", &AZibraLiquid::execGetRefractionBounces },
			{ "GetRefractionQuality", &AZibraLiquid::execGetRefractionQuality },
			{ "GetRoughness", &AZibraLiquid::execGetRoughness },
			{ "GetScatteringAmount", &AZibraLiquid::execGetScatteringAmount },
			{ "GetSimulationSpeed", &AZibraLiquid::execGetSimulationSpeed },
			{ "GetSurfaceTension", &AZibraLiquid::execGetSurfaceTension },
			{ "GetTimeStepMax", &AZibraLiquid::execGetTimeStepMax },
			{ "GetVertexOptimizationIterations", &AZibraLiquid::execGetVertexOptimizationIterations },
			{ "GetVertexOptimizationStep", &AZibraLiquid::execGetVertexOptimizationStep },
			{ "GetViscosity", &AZibraLiquid::execGetViscosity },
			{ "RemoveManipulator", &AZibraLiquid::execRemoveManipulator },
			{ "RemoveZibraSDFCollider", &AZibraLiquid::execRemoveZibraSDFCollider },
			{ "RunSDFVisualization", &AZibraLiquid::execRunSDFVisualization },
			{ "RunSimulation", &AZibraLiquid::execRunSimulation },
			{ "SDFVisualizationRunning", &AZibraLiquid::execSDFVisualizationRunning },
			{ "SetAbsorptionAmount", &AZibraLiquid::execSetAbsorptionAmount },
			{ "SetAdditionalJFAIterations", &AZibraLiquid::execSetAdditionalJFAIterations },
			{ "SetBlurRadius", &AZibraLiquid::execSetBlurRadius },
			{ "SetColor", &AZibraLiquid::execSetColor },
			{ "SetContainerSize", &AZibraLiquid::execSetContainerSize },
			{ "SetDualContourIsoSurfaceLevel", &AZibraLiquid::execSetDualContourIsoSurfaceLevel },
			{ "SetEmissiveColor", &AZibraLiquid::execSetEmissiveColor },
			{ "SetFluidStiffness", &AZibraLiquid::execSetFluidStiffness },
			{ "SetFluidSurfaceBlur", &AZibraLiquid::execSetFluidSurfaceBlur },
			{ "SetForceInteractionStrength", &AZibraLiquid::execSetForceInteractionStrength },
			{ "SetGravity", &AZibraLiquid::execSetGravity },
			{ "SetGridResolution", &AZibraLiquid::execSetGridResolution },
			{ "SetIndexOfRefraction", &AZibraLiquid::execSetIndexOfRefraction },
			{ "SetIsoSurfaceLevel", &AZibraLiquid::execSetIsoSurfaceLevel },
			{ "SetIterationsPerFrame", &AZibraLiquid::execSetIterationsPerFrame },
			{ "SetMaximumVelocity", &AZibraLiquid::execSetMaximumVelocity },
			{ "SetMaxLiquidMeshSize", &AZibraLiquid::execSetMaxLiquidMeshSize },
			{ "SetMaxNumParticles", &AZibraLiquid::execSetMaxNumParticles },
			{ "SetMeshOptimizationIterations", &AZibraLiquid::execSetMeshOptimizationIterations },
			{ "SetMeshOptimizationStep", &AZibraLiquid::execSetMeshOptimizationStep },
			{ "SetMetalness", &AZibraLiquid::execSetMetalness },
			{ "SetMinimumVelocity", &AZibraLiquid::execSetMinimumVelocity },
			{ "SetOpacity", &AZibraLiquid::execSetOpacity },
			{ "SetParticleDensity", &AZibraLiquid::execSetParticleDensity },
			{ "SetParticleScale", &AZibraLiquid::execSetParticleScale },
			{ "SetRayMarchingResolutionDownscale", &AZibraLiquid::execSetRayMarchingResolutionDownscale },
			{ "SetRayMarchIsoSurface", &AZibraLiquid::execSetRayMarchIsoSurface },
			{ "SetRayMarchMaxSteps", &AZibraLiquid::execSetRayMarchMaxSteps },
			{ "SetRayMarchStepFactor", &AZibraLiquid::execSetRayMarchStepFactor },
			{ "SetRayMarchStepSize", &AZibraLiquid::execSetRayMarchStepSize },
			{ "SetRefractionBounces", &AZibraLiquid::execSetRefractionBounces },
			{ "SetRefractionQuality", &AZibraLiquid::execSetRefractionQuality },
			{ "SetRoughness", &AZibraLiquid::execSetRoughness },
			{ "SetScatteringAmount", &AZibraLiquid::execSetScatteringAmount },
			{ "SetSimulationSpeed", &AZibraLiquid::execSetSimulationSpeed },
			{ "SetSurfaceTension", &AZibraLiquid::execSetSurfaceTension },
			{ "SetTimeStepMax", &AZibraLiquid::execSetTimeStepMax },
			{ "SetUnderwaterRender", &AZibraLiquid::execSetUnderwaterRender },
			{ "SetVertexOptimizationIterations", &AZibraLiquid::execSetVertexOptimizationIterations },
			{ "SetVertexOptimizationStep", &AZibraLiquid::execSetVertexOptimizationStep },
			{ "SetViscosity", &AZibraLiquid::execSetViscosity },
			{ "SimulationRunning", &AZibraLiquid::execSimulationRunning },
			{ "StopSDFVisualization", &AZibraLiquid::execStopSDFVisualization },
			{ "StopSimulation", &AZibraLiquid::execStopSimulation },
			{ "UnderwaterRenderEnabled", &AZibraLiquid::execUnderwaterRenderEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZibraLiquid_AddAllColliders_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_AddAllColliders_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Zibra Liquid" },
		{ "DisplayName", "Add All Colliders" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_AddAllColliders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "AddAllColliders", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_AddAllColliders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_AddAllColliders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_AddAllColliders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_AddAllColliders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_AddAllManipulators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_AddAllManipulators_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Zibra Liquid" },
		{ "DisplayName", "Add All Manipulators" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_AddAllManipulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "AddAllManipulators", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_AddAllManipulators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_AddAllManipulators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_AddAllManipulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_AddAllManipulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics
	{
		struct ZibraLiquid_eventAddManipulator_Parms
		{
			UZibraManipulator* NewManipulator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewManipulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewManipulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::NewProp_NewManipulator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::NewProp_NewManipulator = { "NewManipulator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventAddManipulator_Parms, NewManipulator), Z_Construct_UClass_UZibraManipulator_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::NewProp_NewManipulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::NewProp_NewManipulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::NewProp_NewManipulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "AddManipulator", nullptr, nullptr, sizeof(ZibraLiquid_eventAddManipulator_Parms), Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_AddManipulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_AddManipulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics
	{
		struct ZibraLiquid_eventAddZibraSDFCollider_Parms
		{
			UZibraSDFCollider* NewCollider;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::NewProp_NewCollider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::NewProp_NewCollider = { "NewCollider", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventAddZibraSDFCollider_Parms, NewCollider), Z_Construct_UClass_UZibraSDFCollider_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::NewProp_NewCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::NewProp_NewCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::NewProp_NewCollider,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "AddZibraSDFCollider", nullptr, nullptr, sizeof(ZibraLiquid_eventAddZibraSDFCollider_Parms), Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics
	{
		struct ZibraLiquid_eventGetAbsorptionAmount_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetAbsorptionAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The amount of light absorbed in the liquid volume. Visually darkens all colors except to the selected liquid color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetAbsorptionAmount", nullptr, nullptr, sizeof(ZibraLiquid_eventGetAbsorptionAmount_Parms), Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics
	{
		struct ZibraLiquid_eventGetActiveParticleCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetActiveParticleCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The count of active particles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetActiveParticleCount", nullptr, nullptr, sizeof(ZibraLiquid_eventGetActiveParticleCount_Parms), Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics
	{
		struct ZibraLiquid_eventGetAdditionalJFAIterations_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetAdditionalJFAIterations_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Number of additional sphere render iterations, controls how large spheres can get, has a large impact on performance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetAdditionalJFAIterations", nullptr, nullptr, sizeof(ZibraLiquid_eventGetAdditionalJFAIterations_Parms), Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics
	{
		struct ZibraLiquid_eventGetBlurRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetBlurRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Blur radius of particle normals and depth." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetBlurRadius", nullptr, nullptr, sizeof(ZibraLiquid_eventGetBlurRadius_Parms), Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetBlurRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetBlurRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetColor_Statics
	{
		struct ZibraLiquid_eventGetColor_Parms
		{
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZibraLiquid_GetColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The color of the liquid body" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetColor", nullptr, nullptr, sizeof(ZibraLiquid_eventGetColor_Parms), Z_Construct_UFunction_AZibraLiquid_GetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics
	{
		struct ZibraLiquid_eventGetContainerSize_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetContainerSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "Comment", "//API\n//Zibra Liquid\n" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "ToolTip", "API\nZibra Liquid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetContainerSize", nullptr, nullptr, sizeof(ZibraLiquid_eventGetContainerSize_Parms), Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetContainerSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetContainerSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics
	{
		struct ZibraLiquid_eventGetDualContourIsoSurfaceLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetDualContourIsoSurfaceLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The isovalue at which the mesh vertices are generated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetDualContourIsoSurfaceLevel", nullptr, nullptr, sizeof(ZibraLiquid_eventGetDualContourIsoSurfaceLevel_Parms), Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics
	{
		struct ZibraLiquid_eventGetEmissiveColor_Parms
		{
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetEmissiveColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The emissive color of the liquid. Normally black for most liquids." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetEmissiveColor", nullptr, nullptr, sizeof(ZibraLiquid_eventGetEmissiveColor_Parms), Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics
	{
		struct ZibraLiquid_eventGetFluidStiffness_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetFluidStiffness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The stiffness of the liquid, recommended 0.1f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetFluidStiffness", nullptr, nullptr, sizeof(ZibraLiquid_eventGetFluidStiffness_Parms), Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics
	{
		struct ZibraLiquid_eventGetFluidSurfaceBlur_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetFluidSurfaceBlur_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The radius of the blur of the liquid density on the simulation grid. Controls the smoothness of the normals." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetFluidSurfaceBlur", nullptr, nullptr, sizeof(ZibraLiquid_eventGetFluidSurfaceBlur_Parms), Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics
	{
		struct ZibraLiquid_eventGetForceInteractionStrength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetForceInteractionStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The strenght of the force acting on rigid bodies, exponential scale, from exp(-4) to exp(4)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetForceInteractionStrength", nullptr, nullptr, sizeof(ZibraLiquid_eventGetForceInteractionStrength_Parms), Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics
	{
		struct ZibraLiquid_eventGetGravity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetGravity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The strength and direction of the gravity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetGravity", nullptr, nullptr, sizeof(ZibraLiquid_eventGetGravity_Parms), Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics
	{
		struct ZibraLiquid_eventGetGridResolution_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetGridResolution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ClampMin", "16" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Sets the resolution of the largest sid of the grids container equal to this value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetGridResolution", nullptr, nullptr, sizeof(ZibraLiquid_eventGetGridResolution_Parms), Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetGridResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetGridResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics
	{
		struct ZibraLiquid_eventGetIndexOfRefraction_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetIndexOfRefraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The index of refraction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetIndexOfRefraction", nullptr, nullptr, sizeof(ZibraLiquid_eventGetIndexOfRefraction_Parms), Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics
	{
		struct ZibraLiquid_eventGetIsoSurfaceLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetIsoSurfaceLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Controls the position of the fluid surface. Lower values result in thicker surface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetIsoSurfaceLevel", nullptr, nullptr, sizeof(ZibraLiquid_eventGetIsoSurfaceLevel_Parms), Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics
	{
		struct ZibraLiquid_eventGetIterationsPerFrame_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetIterationsPerFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The number of solver iterations per frame, in most cases one iteration is sufficient" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetIterationsPerFrame", nullptr, nullptr, sizeof(ZibraLiquid_eventGetIterationsPerFrame_Parms), Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics
	{
		struct ZibraLiquid_eventGetMaximumVelocity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetMaximumVelocity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The velocity limit of the particles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetMaximumVelocity", nullptr, nullptr, sizeof(ZibraLiquid_eventGetMaximumVelocity_Parms), Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics
	{
		struct ZibraLiquid_eventGetMaxLiquidMeshSize_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetMaxLiquidMeshSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The maximum fraction of triangles the mesh can have (below 1.0f there is a chance of rendering only part of the mesh). Has a large effect on VRAM and performance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetMaxLiquidMeshSize", nullptr, nullptr, sizeof(ZibraLiquid_eventGetMaxLiquidMeshSize_Parms), Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics
	{
		struct ZibraLiquid_eventGetMaxNumParticles_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetMaxNumParticles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Clamps maximum particles count" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetMaxNumParticles", nullptr, nullptr, sizeof(ZibraLiquid_eventGetMaxNumParticles_Parms), Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics
	{
		struct ZibraLiquid_eventGetMeshOptimizationIterations_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetMeshOptimizationIterations_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Number of smoothing iterations for the mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetMeshOptimizationIterations", nullptr, nullptr, sizeof(ZibraLiquid_eventGetMeshOptimizationIterations_Parms), Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics
	{
		struct ZibraLiquid_eventGetMeshOptimizationStep_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetMeshOptimizationStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "This parameter moves liquid mesh vertices to be closer to the actual liquid surface. It should be manually fine tuned until you get a smooth mesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetMeshOptimizationStep", nullptr, nullptr, sizeof(ZibraLiquid_eventGetMeshOptimizationStep_Parms), Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics
	{
		struct ZibraLiquid_eventGetMetalness_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetMetalness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The metalness of the surface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetMetalness", nullptr, nullptr, sizeof(ZibraLiquid_eventGetMetalness_Parms), Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetMetalness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetMetalness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics
	{
		struct ZibraLiquid_eventGetMinimumVelocity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetMinimumVelocity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Minimum velocity the particles can have, non-zero values make an infinite flow. Normally this should be 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetMinimumVelocity", nullptr, nullptr, sizeof(ZibraLiquid_eventGetMinimumVelocity_Parms), Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics
	{
		struct ZibraLiquid_eventGetOpacity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetOpacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The amount of light absorbed in the liquid volume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetOpacity", nullptr, nullptr, sizeof(ZibraLiquid_eventGetOpacity_Parms), Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics
	{
		struct ZibraLiquid_eventGetParticleDensity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetParticleDensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Resting density of particles. measured in particles/cell. This option directly affects volume of each particle. Higher values correspond to less volume, but higher quality simulation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetParticleDensity", nullptr, nullptr, sizeof(ZibraLiquid_eventGetParticleDensity_Parms), Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetParticleDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetParticleDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics
	{
		struct ZibraLiquid_eventGetParticleScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetParticleScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Particle rendering scale compared to the cell size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetParticleScale", nullptr, nullptr, sizeof(ZibraLiquid_eventGetParticleScale_Parms), Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetParticleScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetParticleScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics
	{
		struct ZibraLiquid_eventGetRayMarchingResolutionDownscale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetRayMarchingResolutionDownscale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "How much to downscale the ray march resolution. Can improve performance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetRayMarchingResolutionDownscale", nullptr, nullptr, sizeof(ZibraLiquid_eventGetRayMarchingResolutionDownscale_Parms), Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics
	{
		struct ZibraLiquid_eventGetRayMarchIsoSurface_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetRayMarchIsoSurface_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The isosufrace level for the ray marching. Should be about 1-1/2 of the liquid density." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetRayMarchIsoSurface", nullptr, nullptr, sizeof(ZibraLiquid_eventGetRayMarchIsoSurface_Parms), Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics
	{
		struct ZibraLiquid_eventGetRayMarchMaxSteps_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetRayMarchMaxSteps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Maximum number of steps the ray can go, has a large effect on the performance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetRayMarchMaxSteps", nullptr, nullptr, sizeof(ZibraLiquid_eventGetRayMarchMaxSteps_Parms), Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics
	{
		struct ZibraLiquid_eventGetRayMarchStepFactor_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetRayMarchStepFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Varies the ray marching step size, in some cases might improve performace by slightly reducing ray marching quality" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetRayMarchStepFactor", nullptr, nullptr, sizeof(ZibraLiquid_eventGetRayMarchStepFactor_Parms), Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics
	{
		struct ZibraLiquid_eventGetRayMarchStepSize_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetRayMarchStepSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Step size of the ray marching, controls accuracy, also has a large effect on performance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetRayMarchStepSize", nullptr, nullptr, sizeof(ZibraLiquid_eventGetRayMarchStepSize_Parms), Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics
	{
		struct ZibraLiquid_eventGetRefractionBounces_Parms
		{
			TEnumAsByte<ERayMarchingBounces> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetRefractionBounces_Parms, ReturnValue), Z_Construct_UEnum_ZibraAILiquidRuntime_ERayMarchingBounces, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Number of bounces of the refraction ray, to see the liquid behing itself you need 2 bounces" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetRefractionBounces", nullptr, nullptr, sizeof(ZibraLiquid_eventGetRefractionBounces_Parms), Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics
	{
		struct ZibraLiquid_eventGetRefractionQuality_Parms
		{
			TEnumAsByte<ELiquidRefractionQuality> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetRefractionQuality_Parms, ReturnValue), Z_Construct_UEnum_ZibraAILiquidRuntime_ELiquidRefractionQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Controls the quality of the liquid depth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetRefractionQuality", nullptr, nullptr, sizeof(ZibraLiquid_eventGetRefractionQuality_Parms), Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics
	{
		struct ZibraLiquid_eventGetRoughness_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetRoughness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The Roughness of the liquid body" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetRoughness", nullptr, nullptr, sizeof(ZibraLiquid_eventGetRoughness_Parms), Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetRoughness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetRoughness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics
	{
		struct ZibraLiquid_eventGetScatteringAmount_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetScatteringAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The amount of light being scattered by the liquid volume. Visually adds a fog to the fluid volume. Maximum value makes the liquid opaque." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetScatteringAmount", nullptr, nullptr, sizeof(ZibraLiquid_eventGetScatteringAmount_Parms), Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics
	{
		struct ZibraLiquid_eventGetSimulationSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetSimulationSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The speed of the simulation, how many simulation time units per second" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetSimulationSpeed", nullptr, nullptr, sizeof(ZibraLiquid_eventGetSimulationSpeed_Parms), Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics
	{
		struct ZibraLiquid_eventGetSurfaceTension_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetSurfaceTension_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Surface tension, you can also set it to negative to get a spagettification effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetSurfaceTension", nullptr, nullptr, sizeof(ZibraLiquid_eventGetSurfaceTension_Parms), Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics
	{
		struct ZibraLiquid_eventGetTimeStepMax_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetTimeStepMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The maximum allowed simulation timestep" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetTimeStepMax", nullptr, nullptr, sizeof(ZibraLiquid_eventGetTimeStepMax_Parms), Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics
	{
		struct ZibraLiquid_eventGetVertexOptimizationIterations_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetVertexOptimizationIterations_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Number of iterations that move the mesh vertex to the liquid isosurface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetVertexOptimizationIterations", nullptr, nullptr, sizeof(ZibraLiquid_eventGetVertexOptimizationIterations_Parms), Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics
	{
		struct ZibraLiquid_eventGetVertexOptimizationStep_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetVertexOptimizationStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "This parameter moves liquid mesh vertices to be closer to the actual liquid surface. It should be manually fine tuned until you get a smooth mesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetVertexOptimizationStep", nullptr, nullptr, sizeof(ZibraLiquid_eventGetVertexOptimizationStep_Parms), Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics
	{
		struct ZibraLiquid_eventGetViscosity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventGetViscosity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Viscosity of the liquid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "GetViscosity", nullptr, nullptr, sizeof(ZibraLiquid_eventGetViscosity_Parms), Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_GetViscosity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_GetViscosity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics
	{
		struct ZibraLiquid_eventRemoveManipulator_Parms
		{
			UZibraManipulator* Manipulator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manipulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manipulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::NewProp_Manipulator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::NewProp_Manipulator = { "Manipulator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventRemoveManipulator_Parms, Manipulator), Z_Construct_UClass_UZibraManipulator_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::NewProp_Manipulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::NewProp_Manipulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::NewProp_Manipulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "RemoveManipulator", nullptr, nullptr, sizeof(ZibraLiquid_eventRemoveManipulator_Parms), Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_RemoveManipulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_RemoveManipulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics
	{
		struct ZibraLiquid_eventRemoveZibraSDFCollider_Parms
		{
			UZibraSDFCollider* NewCollider;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::NewProp_NewCollider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::NewProp_NewCollider = { "NewCollider", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventRemoveZibraSDFCollider_Parms, NewCollider), Z_Construct_UClass_UZibraSDFCollider_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::NewProp_NewCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::NewProp_NewCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::NewProp_NewCollider,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "RemoveZibraSDFCollider", nullptr, nullptr, sizeof(ZibraLiquid_eventRemoveZibraSDFCollider_Parms), Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_RunSDFVisualization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_RunSDFVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_RunSDFVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "RunSDFVisualization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_RunSDFVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_RunSDFVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_RunSDFVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_RunSDFVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_RunSimulation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_RunSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_RunSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "RunSimulation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_RunSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_RunSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_RunSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_RunSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics
	{
		struct ZibraLiquid_eventSDFVisualizationRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZibraLiquid_eventSDFVisualizationRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ZibraLiquid_eventSDFVisualizationRunning_Parms), &Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SDFVisualizationRunning", nullptr, nullptr, sizeof(ZibraLiquid_eventSDFVisualizationRunning_Parms), Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics
	{
		struct ZibraLiquid_eventSetAbsorptionAmount_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetAbsorptionAmount_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The amount of light absorbed in the liquid volume. Visually darkens all colors except to the selected liquid color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetAbsorptionAmount", nullptr, nullptr, sizeof(ZibraLiquid_eventSetAbsorptionAmount_Parms), Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics
	{
		struct ZibraLiquid_eventSetAdditionalJFAIterations_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetAdditionalJFAIterations_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Number of additional sphere render iterations, controls how large spheres can get, has a large impact on performance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetAdditionalJFAIterations", nullptr, nullptr, sizeof(ZibraLiquid_eventSetAdditionalJFAIterations_Parms), Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics
	{
		struct ZibraLiquid_eventSetBlurRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetBlurRadius_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0001" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Blur radius of particle normals and depth." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetBlurRadius", nullptr, nullptr, sizeof(ZibraLiquid_eventSetBlurRadius_Parms), Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetBlurRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetBlurRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetColor_Statics
	{
		struct ZibraLiquid_eventSetColor_Parms
		{
			FColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZibraLiquid_SetColor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetColor_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetColor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The color of the liquid body" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetColor", nullptr, nullptr, sizeof(ZibraLiquid_eventSetColor_Parms), Z_Construct_UFunction_AZibraLiquid_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics
	{
		struct ZibraLiquid_eventSetContainerSize_Parms
		{
			FVector NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetContainerSize_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetContainerSize", nullptr, nullptr, sizeof(ZibraLiquid_eventSetContainerSize_Parms), Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetContainerSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetContainerSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics
	{
		struct ZibraLiquid_eventSetDualContourIsoSurfaceLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetDualContourIsoSurfaceLevel_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The isovalue at which the mesh vertices are generated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetDualContourIsoSurfaceLevel", nullptr, nullptr, sizeof(ZibraLiquid_eventSetDualContourIsoSurfaceLevel_Parms), Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics
	{
		struct ZibraLiquid_eventSetEmissiveColor_Parms
		{
			FColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetEmissiveColor_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The emissive color of the liquid. Normally black for most liquids." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetEmissiveColor", nullptr, nullptr, sizeof(ZibraLiquid_eventSetEmissiveColor_Parms), Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics
	{
		struct ZibraLiquid_eventSetFluidStiffness_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetFluidStiffness_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The stiffness of the liquid, recommended 0.1f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetFluidStiffness", nullptr, nullptr, sizeof(ZibraLiquid_eventSetFluidStiffness_Parms), Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics
	{
		struct ZibraLiquid_eventSetFluidSurfaceBlur_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetFluidSurfaceBlur_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The radius of the blur of the liquid density on the simulation grid. Controls the smoothness of the normals." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetFluidSurfaceBlur", nullptr, nullptr, sizeof(ZibraLiquid_eventSetFluidSurfaceBlur_Parms), Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics
	{
		struct ZibraLiquid_eventSetForceInteractionStrength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetForceInteractionStrength_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The strenght of the force acting on rigid bodies, exponential scale, from exp(-4) to exp(4)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetForceInteractionStrength", nullptr, nullptr, sizeof(ZibraLiquid_eventSetForceInteractionStrength_Parms), Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics
	{
		struct ZibraLiquid_eventSetGravity_Parms
		{
			FVector NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetGravity_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The strength and direction of the gravity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetGravity", nullptr, nullptr, sizeof(ZibraLiquid_eventSetGravity_Parms), Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics
	{
		struct ZibraLiquid_eventSetGridResolution_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetGridResolution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Sets the resolution of the largest sid of the grids container equal to this value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetGridResolution", nullptr, nullptr, sizeof(ZibraLiquid_eventSetGridResolution_Parms), Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetGridResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetGridResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics
	{
		struct ZibraLiquid_eventSetIndexOfRefraction_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetIndexOfRefraction_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The index of refraction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetIndexOfRefraction", nullptr, nullptr, sizeof(ZibraLiquid_eventSetIndexOfRefraction_Parms), Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics
	{
		struct ZibraLiquid_eventSetIsoSurfaceLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetIsoSurfaceLevel_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Controls the position of the fluid surface. Lower values result in thicker surface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetIsoSurfaceLevel", nullptr, nullptr, sizeof(ZibraLiquid_eventSetIsoSurfaceLevel_Parms), Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics
	{
		struct ZibraLiquid_eventSetIterationsPerFrame_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetIterationsPerFrame_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The number of solver iterations per frame, in most cases one iteration is sufficient" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetIterationsPerFrame", nullptr, nullptr, sizeof(ZibraLiquid_eventSetIterationsPerFrame_Parms), Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics
	{
		struct ZibraLiquid_eventSetMaximumVelocity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetMaximumVelocity_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The velocity limit of the particles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetMaximumVelocity", nullptr, nullptr, sizeof(ZibraLiquid_eventSetMaximumVelocity_Parms), Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics
	{
		struct ZibraLiquid_eventSetMaxLiquidMeshSize_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetMaxLiquidMeshSize_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The maximum fraction of triangles the mesh can have (below 1.0f there is a chance of rendering only part of the mesh). Has a large effect on VRAM and performance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetMaxLiquidMeshSize", nullptr, nullptr, sizeof(ZibraLiquid_eventSetMaxLiquidMeshSize_Parms), Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics
	{
		struct ZibraLiquid_eventSetMaxNumParticles_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetMaxNumParticles_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "1024" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Clamps maximum particles count" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetMaxNumParticles", nullptr, nullptr, sizeof(ZibraLiquid_eventSetMaxNumParticles_Parms), Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics
	{
		struct ZibraLiquid_eventSetMeshOptimizationIterations_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetMeshOptimizationIterations_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Number of smoothing iterations for the mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetMeshOptimizationIterations", nullptr, nullptr, sizeof(ZibraLiquid_eventSetMeshOptimizationIterations_Parms), Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics
	{
		struct ZibraLiquid_eventSetMeshOptimizationStep_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetMeshOptimizationStep_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "This parameter moves liquid mesh vertices to be closer to the actual liquid surface. It should be manually fine tuned until you get a smooth mesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetMeshOptimizationStep", nullptr, nullptr, sizeof(ZibraLiquid_eventSetMeshOptimizationStep_Parms), Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics
	{
		struct ZibraLiquid_eventSetMetalness_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetMetalness_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The metalness of the surface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetMetalness", nullptr, nullptr, sizeof(ZibraLiquid_eventSetMetalness_Parms), Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetMetalness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetMetalness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics
	{
		struct ZibraLiquid_eventSetMinimumVelocity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetMinimumVelocity_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Minimum velocity the particles can have, non-zero values make an infinite flow. Normally this should be 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetMinimumVelocity", nullptr, nullptr, sizeof(ZibraLiquid_eventSetMinimumVelocity_Parms), Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics
	{
		struct ZibraLiquid_eventSetOpacity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetOpacity_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The amount of light absorbed in the liquid volume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetOpacity", nullptr, nullptr, sizeof(ZibraLiquid_eventSetOpacity_Parms), Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics
	{
		struct ZibraLiquid_eventSetParticleDensity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetParticleDensity_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Resting density of particles. measured in particles/cell. This option directly affects volume of each particle. Higher values correspond to less volume, but higher quality simulation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetParticleDensity", nullptr, nullptr, sizeof(ZibraLiquid_eventSetParticleDensity_Parms), Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetParticleDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetParticleDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics
	{
		struct ZibraLiquid_eventSetParticleScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetParticleScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Particle rendering scale compared to the cell size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetParticleScale", nullptr, nullptr, sizeof(ZibraLiquid_eventSetParticleScale_Parms), Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetParticleScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetParticleScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics
	{
		struct ZibraLiquid_eventSetRayMarchingResolutionDownscale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetRayMarchingResolutionDownscale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "How much to downscale the ray march resolution. Can improve performance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetRayMarchingResolutionDownscale", nullptr, nullptr, sizeof(ZibraLiquid_eventSetRayMarchingResolutionDownscale_Parms), Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics
	{
		struct ZibraLiquid_eventSetRayMarchIsoSurface_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetRayMarchIsoSurface_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The isosufrace level for the ray marching. Should be about 1-1/2 of the liquid density." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetRayMarchIsoSurface", nullptr, nullptr, sizeof(ZibraLiquid_eventSetRayMarchIsoSurface_Parms), Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics
	{
		struct ZibraLiquid_eventSetRayMarchMaxSteps_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetRayMarchMaxSteps_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "128" },
		{ "ClampMin", "4" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Maximum number of steps the ray can go, has a large effect on the performance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetRayMarchMaxSteps", nullptr, nullptr, sizeof(ZibraLiquid_eventSetRayMarchMaxSteps_Parms), Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics
	{
		struct ZibraLiquid_eventSetRayMarchStepFactor_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetRayMarchStepFactor_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Varies the ray marching step size, in some cases might improve performace by slightly reducing ray marching quality" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetRayMarchStepFactor", nullptr, nullptr, sizeof(ZibraLiquid_eventSetRayMarchStepFactor_Parms), Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics
	{
		struct ZibraLiquid_eventSetRayMarchStepSize_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetRayMarchStepSize_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Step size of the ray marching, controls accuracy, also has a large effect on performance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetRayMarchStepSize", nullptr, nullptr, sizeof(ZibraLiquid_eventSetRayMarchStepSize_Parms), Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics
	{
		struct ZibraLiquid_eventSetRefractionBounces_Parms
		{
			TEnumAsByte<ERayMarchingBounces> NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetRefractionBounces_Parms, NewValue), Z_Construct_UEnum_ZibraAILiquidRuntime_ERayMarchingBounces, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Number of bounces of the refraction ray, to see the liquid behing itself you need 2 bounces" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetRefractionBounces", nullptr, nullptr, sizeof(ZibraLiquid_eventSetRefractionBounces_Parms), Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics
	{
		struct ZibraLiquid_eventSetRefractionQuality_Parms
		{
			TEnumAsByte<ELiquidRefractionQuality> NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetRefractionQuality_Parms, NewValue), Z_Construct_UEnum_ZibraAILiquidRuntime_ELiquidRefractionQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Controls the quality of the liquid depth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetRefractionQuality", nullptr, nullptr, sizeof(ZibraLiquid_eventSetRefractionQuality_Parms), Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics
	{
		struct ZibraLiquid_eventSetRoughness_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetRoughness_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The Roughness of the liquid body" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetRoughness", nullptr, nullptr, sizeof(ZibraLiquid_eventSetRoughness_Parms), Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetRoughness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetRoughness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics
	{
		struct ZibraLiquid_eventSetScatteringAmount_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetScatteringAmount_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The amount of light being scattered by the liquid volume. Visually adds a fog to the fluid volume. Maximum value makes the liquid opaque." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetScatteringAmount", nullptr, nullptr, sizeof(ZibraLiquid_eventSetScatteringAmount_Parms), Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics
	{
		struct ZibraLiquid_eventSetSimulationSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetSimulationSpeed_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The speed of the simulation, how many simulation time units per second" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetSimulationSpeed", nullptr, nullptr, sizeof(ZibraLiquid_eventSetSimulationSpeed_Parms), Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics
	{
		struct ZibraLiquid_eventSetSurfaceTension_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetSurfaceTension_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Surface tension, you can also set it to negative to get a spagettification effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetSurfaceTension", nullptr, nullptr, sizeof(ZibraLiquid_eventSetSurfaceTension_Parms), Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics
	{
		struct ZibraLiquid_eventSetTimeStepMax_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetTimeStepMax_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0001" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The maximum allowed simulation timestep" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetTimeStepMax", nullptr, nullptr, sizeof(ZibraLiquid_eventSetTimeStepMax_Parms), Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics
	{
		struct ZibraLiquid_eventSetUnderwaterRender_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((ZibraLiquid_eventSetUnderwaterRender_Parms*)Obj)->NewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ZibraLiquid_eventSetUnderwaterRender_Parms), &Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Enable underwater rendering. Disable it if you don't need it, since it's a bit slower." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetUnderwaterRender", nullptr, nullptr, sizeof(ZibraLiquid_eventSetUnderwaterRender_Parms), Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics
	{
		struct ZibraLiquid_eventSetVertexOptimizationIterations_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetVertexOptimizationIterations_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Number of iterations that move the mesh vertex to the liquid isosurface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetVertexOptimizationIterations", nullptr, nullptr, sizeof(ZibraLiquid_eventSetVertexOptimizationIterations_Parms), Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics
	{
		struct ZibraLiquid_eventSetVertexOptimizationStep_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetVertexOptimizationStep_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "This parameter moves liquid mesh vertices to be closer to the actual liquid surface. It should be manually fine tuned until you get a smooth mesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetVertexOptimizationStep", nullptr, nullptr, sizeof(ZibraLiquid_eventSetVertexOptimizationStep_Parms), Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics
	{
		struct ZibraLiquid_eventSetViscosity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZibraLiquid_eventSetViscosity_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Viscosity of the liquid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SetViscosity", nullptr, nullptr, sizeof(ZibraLiquid_eventSetViscosity_Parms), Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SetViscosity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SetViscosity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics
	{
		struct ZibraLiquid_eventSimulationRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZibraLiquid_eventSimulationRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ZibraLiquid_eventSimulationRunning_Parms), &Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "SimulationRunning", nullptr, nullptr, sizeof(ZibraLiquid_eventSimulationRunning_Parms), Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_SimulationRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_SimulationRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_StopSDFVisualization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_StopSDFVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_StopSDFVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "StopSDFVisualization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_StopSDFVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_StopSDFVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_StopSDFVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_StopSDFVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_StopSimulation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_StopSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_StopSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "StopSimulation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_StopSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_StopSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_StopSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_StopSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics
	{
		struct ZibraLiquid_eventUnderwaterRenderEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZibraLiquid_eventUnderwaterRenderEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ZibraLiquid_eventUnderwaterRenderEnabled_Parms), &Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Enable underwater rendering. Disable it if you don't need it, since it's a bit slower." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZibraLiquid, nullptr, "UnderwaterRenderEnabled", nullptr, nullptr, sizeof(ZibraLiquid_eventUnderwaterRenderEnabled_Parms), Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZibraLiquid_NoRegister()
	{
		return AZibraLiquid::StaticClass();
	}
	struct Z_Construct_UClass_AZibraLiquid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContainerSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZibraSDFColliderActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZibraSDFColliderActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ZibraSDFColliderActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManipulatorActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManipulatorActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManipulatorActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStepMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStepMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimTimePerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimTimePerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveParticleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveParticleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IterationsPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IterationsPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxNumParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GridResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunSimulation_MetaData[];
#endif
		static void NewProp_bRunSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualizeSceneSDF_MetaData[];
#endif
		static void NewProp_bVisualizeSceneSDF_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualizeSceneSDF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SDFRenderRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SDFRenderRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleCountFootprintDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParticleCountFootprintDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSizeDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GridSizeDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncForceUpdate_MetaData[];
#endif
		static void NewProp_bUseAsyncForceUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncForceUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownscaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownscaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SolverParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderingParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderingParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManipulatorManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManipulatorManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnedEmitterActor_MetaData[];
#endif
		static void NewProp_bSpawnedEmitterActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnedEmitterActor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZibraLiquid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ZibraAILiquidRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZibraLiquid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZibraLiquid_AddAllColliders, "AddAllColliders" }, // 1430537716
		{ &Z_Construct_UFunction_AZibraLiquid_AddAllManipulators, "AddAllManipulators" }, // 2068806114
		{ &Z_Construct_UFunction_AZibraLiquid_AddManipulator, "AddManipulator" }, // 1235051784
		{ &Z_Construct_UFunction_AZibraLiquid_AddZibraSDFCollider, "AddZibraSDFCollider" }, // 1634131070
		{ &Z_Construct_UFunction_AZibraLiquid_GetAbsorptionAmount, "GetAbsorptionAmount" }, // 2095207648
		{ &Z_Construct_UFunction_AZibraLiquid_GetActiveParticleCount, "GetActiveParticleCount" }, // 4024457714
		{ &Z_Construct_UFunction_AZibraLiquid_GetAdditionalJFAIterations, "GetAdditionalJFAIterations" }, // 704097441
		{ &Z_Construct_UFunction_AZibraLiquid_GetBlurRadius, "GetBlurRadius" }, // 2903975422
		{ &Z_Construct_UFunction_AZibraLiquid_GetColor, "GetColor" }, // 1073008293
		{ &Z_Construct_UFunction_AZibraLiquid_GetContainerSize, "GetContainerSize" }, // 417239750
		{ &Z_Construct_UFunction_AZibraLiquid_GetDualContourIsoSurfaceLevel, "GetDualContourIsoSurfaceLevel" }, // 3734278250
		{ &Z_Construct_UFunction_AZibraLiquid_GetEmissiveColor, "GetEmissiveColor" }, // 570060473
		{ &Z_Construct_UFunction_AZibraLiquid_GetFluidStiffness, "GetFluidStiffness" }, // 578971410
		{ &Z_Construct_UFunction_AZibraLiquid_GetFluidSurfaceBlur, "GetFluidSurfaceBlur" }, // 2830457428
		{ &Z_Construct_UFunction_AZibraLiquid_GetForceInteractionStrength, "GetForceInteractionStrength" }, // 3101935356
		{ &Z_Construct_UFunction_AZibraLiquid_GetGravity, "GetGravity" }, // 4131245158
		{ &Z_Construct_UFunction_AZibraLiquid_GetGridResolution, "GetGridResolution" }, // 3114336955
		{ &Z_Construct_UFunction_AZibraLiquid_GetIndexOfRefraction, "GetIndexOfRefraction" }, // 3743134394
		{ &Z_Construct_UFunction_AZibraLiquid_GetIsoSurfaceLevel, "GetIsoSurfaceLevel" }, // 1906532838
		{ &Z_Construct_UFunction_AZibraLiquid_GetIterationsPerFrame, "GetIterationsPerFrame" }, // 2447720580
		{ &Z_Construct_UFunction_AZibraLiquid_GetMaximumVelocity, "GetMaximumVelocity" }, // 2545884386
		{ &Z_Construct_UFunction_AZibraLiquid_GetMaxLiquidMeshSize, "GetMaxLiquidMeshSize" }, // 4076822888
		{ &Z_Construct_UFunction_AZibraLiquid_GetMaxNumParticles, "GetMaxNumParticles" }, // 251704654
		{ &Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationIterations, "GetMeshOptimizationIterations" }, // 3735289280
		{ &Z_Construct_UFunction_AZibraLiquid_GetMeshOptimizationStep, "GetMeshOptimizationStep" }, // 4061246857
		{ &Z_Construct_UFunction_AZibraLiquid_GetMetalness, "GetMetalness" }, // 245525645
		{ &Z_Construct_UFunction_AZibraLiquid_GetMinimumVelocity, "GetMinimumVelocity" }, // 3132963164
		{ &Z_Construct_UFunction_AZibraLiquid_GetOpacity, "GetOpacity" }, // 2852724537
		{ &Z_Construct_UFunction_AZibraLiquid_GetParticleDensity, "GetParticleDensity" }, // 1392254160
		{ &Z_Construct_UFunction_AZibraLiquid_GetParticleScale, "GetParticleScale" }, // 3057886697
		{ &Z_Construct_UFunction_AZibraLiquid_GetRayMarchingResolutionDownscale, "GetRayMarchingResolutionDownscale" }, // 2957537920
		{ &Z_Construct_UFunction_AZibraLiquid_GetRayMarchIsoSurface, "GetRayMarchIsoSurface" }, // 2221623880
		{ &Z_Construct_UFunction_AZibraLiquid_GetRayMarchMaxSteps, "GetRayMarchMaxSteps" }, // 4209461501
		{ &Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepFactor, "GetRayMarchStepFactor" }, // 313624234
		{ &Z_Construct_UFunction_AZibraLiquid_GetRayMarchStepSize, "GetRayMarchStepSize" }, // 588544139
		{ &Z_Construct_UFunction_AZibraLiquid_GetRefractionBounces, "GetRefractionBounces" }, // 628418714
		{ &Z_Construct_UFunction_AZibraLiquid_GetRefractionQuality, "GetRefractionQuality" }, // 2585468593
		{ &Z_Construct_UFunction_AZibraLiquid_GetRoughness, "GetRoughness" }, // 937134864
		{ &Z_Construct_UFunction_AZibraLiquid_GetScatteringAmount, "GetScatteringAmount" }, // 3501690487
		{ &Z_Construct_UFunction_AZibraLiquid_GetSimulationSpeed, "GetSimulationSpeed" }, // 2011794409
		{ &Z_Construct_UFunction_AZibraLiquid_GetSurfaceTension, "GetSurfaceTension" }, // 2429539483
		{ &Z_Construct_UFunction_AZibraLiquid_GetTimeStepMax, "GetTimeStepMax" }, // 923588424
		{ &Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationIterations, "GetVertexOptimizationIterations" }, // 3544882138
		{ &Z_Construct_UFunction_AZibraLiquid_GetVertexOptimizationStep, "GetVertexOptimizationStep" }, // 256885031
		{ &Z_Construct_UFunction_AZibraLiquid_GetViscosity, "GetViscosity" }, // 3984119872
		{ &Z_Construct_UFunction_AZibraLiquid_RemoveManipulator, "RemoveManipulator" }, // 1714388071
		{ &Z_Construct_UFunction_AZibraLiquid_RemoveZibraSDFCollider, "RemoveZibraSDFCollider" }, // 3120333585
		{ &Z_Construct_UFunction_AZibraLiquid_RunSDFVisualization, "RunSDFVisualization" }, // 525932180
		{ &Z_Construct_UFunction_AZibraLiquid_RunSimulation, "RunSimulation" }, // 1417617345
		{ &Z_Construct_UFunction_AZibraLiquid_SDFVisualizationRunning, "SDFVisualizationRunning" }, // 525172921
		{ &Z_Construct_UFunction_AZibraLiquid_SetAbsorptionAmount, "SetAbsorptionAmount" }, // 1802633072
		{ &Z_Construct_UFunction_AZibraLiquid_SetAdditionalJFAIterations, "SetAdditionalJFAIterations" }, // 3352416805
		{ &Z_Construct_UFunction_AZibraLiquid_SetBlurRadius, "SetBlurRadius" }, // 2851713132
		{ &Z_Construct_UFunction_AZibraLiquid_SetColor, "SetColor" }, // 841935491
		{ &Z_Construct_UFunction_AZibraLiquid_SetContainerSize, "SetContainerSize" }, // 3656602948
		{ &Z_Construct_UFunction_AZibraLiquid_SetDualContourIsoSurfaceLevel, "SetDualContourIsoSurfaceLevel" }, // 1049553354
		{ &Z_Construct_UFunction_AZibraLiquid_SetEmissiveColor, "SetEmissiveColor" }, // 800788083
		{ &Z_Construct_UFunction_AZibraLiquid_SetFluidStiffness, "SetFluidStiffness" }, // 909131078
		{ &Z_Construct_UFunction_AZibraLiquid_SetFluidSurfaceBlur, "SetFluidSurfaceBlur" }, // 3848311112
		{ &Z_Construct_UFunction_AZibraLiquid_SetForceInteractionStrength, "SetForceInteractionStrength" }, // 1288937923
		{ &Z_Construct_UFunction_AZibraLiquid_SetGravity, "SetGravity" }, // 1736975565
		{ &Z_Construct_UFunction_AZibraLiquid_SetGridResolution, "SetGridResolution" }, // 2415252067
		{ &Z_Construct_UFunction_AZibraLiquid_SetIndexOfRefraction, "SetIndexOfRefraction" }, // 1115245783
		{ &Z_Construct_UFunction_AZibraLiquid_SetIsoSurfaceLevel, "SetIsoSurfaceLevel" }, // 3545985529
		{ &Z_Construct_UFunction_AZibraLiquid_SetIterationsPerFrame, "SetIterationsPerFrame" }, // 4182376027
		{ &Z_Construct_UFunction_AZibraLiquid_SetMaximumVelocity, "SetMaximumVelocity" }, // 1246453926
		{ &Z_Construct_UFunction_AZibraLiquid_SetMaxLiquidMeshSize, "SetMaxLiquidMeshSize" }, // 3754571502
		{ &Z_Construct_UFunction_AZibraLiquid_SetMaxNumParticles, "SetMaxNumParticles" }, // 3011412537
		{ &Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationIterations, "SetMeshOptimizationIterations" }, // 4285022195
		{ &Z_Construct_UFunction_AZibraLiquid_SetMeshOptimizationStep, "SetMeshOptimizationStep" }, // 1567931909
		{ &Z_Construct_UFunction_AZibraLiquid_SetMetalness, "SetMetalness" }, // 1369572115
		{ &Z_Construct_UFunction_AZibraLiquid_SetMinimumVelocity, "SetMinimumVelocity" }, // 1169399053
		{ &Z_Construct_UFunction_AZibraLiquid_SetOpacity, "SetOpacity" }, // 1393336730
		{ &Z_Construct_UFunction_AZibraLiquid_SetParticleDensity, "SetParticleDensity" }, // 2051381771
		{ &Z_Construct_UFunction_AZibraLiquid_SetParticleScale, "SetParticleScale" }, // 351290105
		{ &Z_Construct_UFunction_AZibraLiquid_SetRayMarchingResolutionDownscale, "SetRayMarchingResolutionDownscale" }, // 1548168973
		{ &Z_Construct_UFunction_AZibraLiquid_SetRayMarchIsoSurface, "SetRayMarchIsoSurface" }, // 207265946
		{ &Z_Construct_UFunction_AZibraLiquid_SetRayMarchMaxSteps, "SetRayMarchMaxSteps" }, // 3843042624
		{ &Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepFactor, "SetRayMarchStepFactor" }, // 2572168239
		{ &Z_Construct_UFunction_AZibraLiquid_SetRayMarchStepSize, "SetRayMarchStepSize" }, // 896831584
		{ &Z_Construct_UFunction_AZibraLiquid_SetRefractionBounces, "SetRefractionBounces" }, // 1127728252
		{ &Z_Construct_UFunction_AZibraLiquid_SetRefractionQuality, "SetRefractionQuality" }, // 1429504717
		{ &Z_Construct_UFunction_AZibraLiquid_SetRoughness, "SetRoughness" }, // 279883848
		{ &Z_Construct_UFunction_AZibraLiquid_SetScatteringAmount, "SetScatteringAmount" }, // 1046266013
		{ &Z_Construct_UFunction_AZibraLiquid_SetSimulationSpeed, "SetSimulationSpeed" }, // 417134792
		{ &Z_Construct_UFunction_AZibraLiquid_SetSurfaceTension, "SetSurfaceTension" }, // 583705257
		{ &Z_Construct_UFunction_AZibraLiquid_SetTimeStepMax, "SetTimeStepMax" }, // 1292940057
		{ &Z_Construct_UFunction_AZibraLiquid_SetUnderwaterRender, "SetUnderwaterRender" }, // 4268392953
		{ &Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationIterations, "SetVertexOptimizationIterations" }, // 1353486258
		{ &Z_Construct_UFunction_AZibraLiquid_SetVertexOptimizationStep, "SetVertexOptimizationStep" }, // 135674318
		{ &Z_Construct_UFunction_AZibraLiquid_SetViscosity, "SetViscosity" }, // 3771943294
		{ &Z_Construct_UFunction_AZibraLiquid_SimulationRunning, "SimulationRunning" }, // 1430967597
		{ &Z_Construct_UFunction_AZibraLiquid_StopSDFVisualization, "StopSDFVisualization" }, // 3969456775
		{ &Z_Construct_UFunction_AZibraLiquid_StopSimulation, "StopSimulation" }, // 3749995944
		{ &Z_Construct_UFunction_AZibraLiquid_UnderwaterRenderEnabled, "UnderwaterRenderEnabled" }, // 2095436097
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ZibraLiquid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ContainerSize_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "Comment", "///UI Zibra Liquid\n" },
		{ "DisplayName", "Container Size" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "ToolTip", "UI Zibra Liquid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ContainerSize = { "ContainerSize", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, ContainerSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ContainerSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ContainerSize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ZibraSDFColliderActors_Inner = { "ZibraSDFColliderActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ZibraSDFColliderActors_MetaData[] = {
		{ "AllowedClasses", "UZibraManipulator" },
		{ "Category", "Zibra Liquid" },
		{ "DisplayName", "SDF Colliders" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ZibraSDFColliderActors = { "ZibraSDFColliderActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, ZibraSDFColliderActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ZibraSDFColliderActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ZibraSDFColliderActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorActors_Inner = { "ManipulatorActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorActors_MetaData[] = {
		{ "AllowedClasses", "UZibraManipulator" },
		{ "Category", "Zibra Liquid" },
		{ "DisplayName", "Manipulators" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorActors = { "ManipulatorActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, ManipulatorActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_TimeStepMax_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0001" },
		{ "DisplayName", "Maximum Allowed Timestep" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The maximum allowed simulation timestep" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_TimeStepMax = { "TimeStepMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, TimeStepMax), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_TimeStepMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_TimeStepMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SimTimePerSec_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Simulation Speed" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The speed of the simulation, how many simulation time units per second" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SimTimePerSec = { "SimTimePerSec", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, SimTimePerSec), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SimTimePerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SimTimePerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ActiveParticleCount_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "DisplayName", "Current particle count" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ActiveParticleCount = { "ActiveParticleCount", nullptr, (EPropertyFlags)0x0090000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, ActiveParticleCount), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ActiveParticleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ActiveParticleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_IterationsPerFrame_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Iterations Per Frame" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "The number of solver iterations per frame, in most cases one iteration is sufficient" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_IterationsPerFrame = { "IterationsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, IterationsPerFrame), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_IterationsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_IterationsPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_MaxNumParticles_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "1024" },
		{ "DisplayName", "Max Particle Count" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Clamps maximum particles count" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_MaxNumParticles = { "MaxNumParticles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, MaxNumParticles), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_MaxNumParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_MaxNumParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_GridResolution_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "ClampMin", "16" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Sets the resolution of the largest sid of the grids container equal to this value" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_GridResolution = { "GridResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, GridResolution), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_GridResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_GridResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bRunSimulation_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "DisplayName", "Run Simulaton" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Controls if simulation is active" },
	};
#endif
	void Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bRunSimulation_SetBit(void* Obj)
	{
		((AZibraLiquid*)Obj)->bRunSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bRunSimulation = { "bRunSimulation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AZibraLiquid), &Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bRunSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bRunSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bRunSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bVisualizeSceneSDF_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "DisplayName", "Visualize Scene SDF" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	void Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bVisualizeSceneSDF_SetBit(void* Obj)
	{
		((AZibraLiquid*)Obj)->bVisualizeSceneSDF = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bVisualizeSceneSDF = { "bVisualizeSceneSDF", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AZibraLiquid), &Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bVisualizeSceneSDF_SetBit, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bVisualizeSceneSDF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bVisualizeSceneSDF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SDFRenderRT_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "DisplayName", "Scene SDF Visualization" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Click on this texture to open the visualization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SDFRenderRT = { "SDFRenderRT", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, SDFRenderRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SDFRenderRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SDFRenderRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ParticleCountFootprintDisplay_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "DisplayName", "Particle Count Footprint" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ParticleCountFootprintDisplay = { "ParticleCountFootprintDisplay", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, ParticleCountFootprintDisplay), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ParticleCountFootprintDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ParticleCountFootprintDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_GridSizeDisplay_MetaData[] = {
		{ "Category", "Zibra Liquid" },
		{ "DisplayName", "Grid Size Footprint" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_GridSizeDisplay = { "GridSizeDisplay", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, GridSizeDisplay), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_GridSizeDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_GridSizeDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_CubeComponent_MetaData[] = {
		{ "Comment", "//END API\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "ToolTip", "END API" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_CubeComponent = { "CubeComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, CubeComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_CubeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_CubeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bUseAsyncForceUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	void Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bUseAsyncForceUpdate_SetBit(void* Obj)
	{
		((AZibraLiquid*)Obj)->bUseAsyncForceUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bUseAsyncForceUpdate = { "bUseAsyncForceUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AZibraLiquid), &Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bUseAsyncForceUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bUseAsyncForceUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bUseAsyncForceUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_CellSize_MetaData[] = {
		{ "ClampMin", "0.00001" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "Tooltip", "Main parameter that regulates the resolution of the simulation. Defines the size of the simulation grid cell in world length units" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, CellSize), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_DownscaleFactor_MetaData[] = {
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0.2" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_DownscaleFactor = { "DownscaleFactor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, DownscaleFactor), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_DownscaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_DownscaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_EmitterDensity_MetaData[] = {
		{ "ClampMax", "16.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_EmitterDensity = { "EmitterDensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, EmitterDensity), METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_EmitterDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_EmitterDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SolverParameters_MetaData[] = {
		{ "Category", "Zibra Liquid Solver Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SolverParameters = { "SolverParameters", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, SolverParameters), Z_Construct_UScriptStruct_FZibraLiquidSolverParams, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SolverParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SolverParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_MaterialParameters_MetaData[] = {
		{ "Category", "Zibra Liquid Material Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_MaterialParameters = { "MaterialParameters", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, MaterialParameters), Z_Construct_UScriptStruct_FZibraLiquidMaterialParams, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_MaterialParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_MaterialParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_RenderingParameters_MetaData[] = {
		{ "Category", "Zibra Liquid Advanced Render Parameters" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_RenderingParameters = { "RenderingParameters", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, RenderingParameters), Z_Construct_UScriptStruct_FZibraLiquidAdvancedRenderParameters, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_RenderingParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_RenderingParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorManager = { "ManipulatorManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, ManipulatorManager), Z_Construct_UClass_UZibraManipulatorManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bSpawnedEmitterActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
	};
#endif
	void Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bSpawnedEmitterActor_SetBit(void* Obj)
	{
		((AZibraLiquid*)Obj)->bSpawnedEmitterActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bSpawnedEmitterActor = { "bSpawnedEmitterActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AZibraLiquid), &Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bSpawnedEmitterActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bSpawnedEmitterActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bSpawnedEmitterActor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/** Billboard used to see the scene in the editor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZibraLiquid.h" },
		{ "ToolTip", "Billboard used to see the scene in the editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0020080800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZibraLiquid, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZibraLiquid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ContainerSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ZibraSDFColliderActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ZibraSDFColliderActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_TimeStepMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SimTimePerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ActiveParticleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_IterationsPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_MaxNumParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_GridResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bRunSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bVisualizeSceneSDF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SDFRenderRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ParticleCountFootprintDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_GridSizeDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_CubeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bUseAsyncForceUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_CellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_DownscaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_EmitterDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SolverParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_MaterialParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_RenderingParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_ManipulatorManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_bSpawnedEmitterActor,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZibraLiquid_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZibraLiquid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZibraLiquid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZibraLiquid_Statics::ClassParams = {
		&AZibraLiquid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZibraLiquid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZibraLiquid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZibraLiquid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZibraLiquid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZibraLiquid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZibraLiquid, 3080437105);
	template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<AZibraLiquid>()
	{
		return AZibraLiquid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZibraLiquid(Z_Construct_UClass_AZibraLiquid, &AZibraLiquid::StaticClass, TEXT("/Script/ZibraAILiquidRuntime"), TEXT("AZibraLiquid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZibraLiquid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
