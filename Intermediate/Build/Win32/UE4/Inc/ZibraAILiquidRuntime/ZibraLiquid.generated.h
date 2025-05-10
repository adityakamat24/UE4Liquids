// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FVector;
class UZibraManipulator;
class UZibraSDFCollider;
#ifdef ZIBRAAILIQUIDRUNTIME_ZibraLiquid_generated_h
#error "ZibraLiquid.generated.h already included, missing '#pragma once' in ZibraLiquid.h"
#endif
#define ZIBRAAILIQUIDRUNTIME_ZibraLiquid_generated_h

#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_SPARSE_DATA
#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRayMarchStepFactor); \
	DECLARE_FUNCTION(execGetRayMarchStepFactor); \
	DECLARE_FUNCTION(execSetRayMarchStepSize); \
	DECLARE_FUNCTION(execGetRayMarchStepSize); \
	DECLARE_FUNCTION(execSetRayMarchMaxSteps); \
	DECLARE_FUNCTION(execGetRayMarchMaxSteps); \
	DECLARE_FUNCTION(execSetRayMarchIsoSurface); \
	DECLARE_FUNCTION(execGetRayMarchIsoSurface); \
	DECLARE_FUNCTION(execSetIsoSurfaceLevel); \
	DECLARE_FUNCTION(execGetIsoSurfaceLevel); \
	DECLARE_FUNCTION(execSetDualContourIsoSurfaceLevel); \
	DECLARE_FUNCTION(execGetDualContourIsoSurfaceLevel); \
	DECLARE_FUNCTION(execSetMeshOptimizationStep); \
	DECLARE_FUNCTION(execGetMeshOptimizationStep); \
	DECLARE_FUNCTION(execSetVertexOptimizationStep); \
	DECLARE_FUNCTION(execGetVertexOptimizationStep); \
	DECLARE_FUNCTION(execSetMeshOptimizationIterations); \
	DECLARE_FUNCTION(execGetMeshOptimizationIterations); \
	DECLARE_FUNCTION(execSetVertexOptimizationIterations); \
	DECLARE_FUNCTION(execGetVertexOptimizationIterations); \
	DECLARE_FUNCTION(execSetAdditionalJFAIterations); \
	DECLARE_FUNCTION(execGetAdditionalJFAIterations); \
	DECLARE_FUNCTION(execSetMaxLiquidMeshSize); \
	DECLARE_FUNCTION(execGetMaxLiquidMeshSize); \
	DECLARE_FUNCTION(execSetUnderwaterRender); \
	DECLARE_FUNCTION(execUnderwaterRenderEnabled); \
	DECLARE_FUNCTION(execSetRefractionBounces); \
	DECLARE_FUNCTION(execGetRefractionBounces); \
	DECLARE_FUNCTION(execSetRefractionQuality); \
	DECLARE_FUNCTION(execGetRefractionQuality); \
	DECLARE_FUNCTION(execGetRayMarchingResolutionDownscale); \
	DECLARE_FUNCTION(execSetRayMarchingResolutionDownscale); \
	DECLARE_FUNCTION(execSetBlurRadius); \
	DECLARE_FUNCTION(execGetBlurRadius); \
	DECLARE_FUNCTION(execSetParticleScale); \
	DECLARE_FUNCTION(execGetParticleScale); \
	DECLARE_FUNCTION(execSetFluidSurfaceBlur); \
	DECLARE_FUNCTION(execGetFluidSurfaceBlur); \
	DECLARE_FUNCTION(execSetIndexOfRefraction); \
	DECLARE_FUNCTION(execGetIndexOfRefraction); \
	DECLARE_FUNCTION(execSetAbsorptionAmount); \
	DECLARE_FUNCTION(execGetAbsorptionAmount); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execGetOpacity); \
	DECLARE_FUNCTION(execSetScatteringAmount); \
	DECLARE_FUNCTION(execGetScatteringAmount); \
	DECLARE_FUNCTION(execSetMetalness); \
	DECLARE_FUNCTION(execGetMetalness); \
	DECLARE_FUNCTION(execSetRoughness); \
	DECLARE_FUNCTION(execGetRoughness); \
	DECLARE_FUNCTION(execSetEmissiveColor); \
	DECLARE_FUNCTION(execGetEmissiveColor); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetForceInteractionStrength); \
	DECLARE_FUNCTION(execGetForceInteractionStrength); \
	DECLARE_FUNCTION(execSetSurfaceTension); \
	DECLARE_FUNCTION(execGetSurfaceTension); \
	DECLARE_FUNCTION(execSetViscosity); \
	DECLARE_FUNCTION(execGetViscosity); \
	DECLARE_FUNCTION(execSetMinimumVelocity); \
	DECLARE_FUNCTION(execGetMinimumVelocity); \
	DECLARE_FUNCTION(execSetMaximumVelocity); \
	DECLARE_FUNCTION(execGetMaximumVelocity); \
	DECLARE_FUNCTION(execSetParticleDensity); \
	DECLARE_FUNCTION(execGetParticleDensity); \
	DECLARE_FUNCTION(execSetFluidStiffness); \
	DECLARE_FUNCTION(execGetFluidStiffness); \
	DECLARE_FUNCTION(execSetGravity); \
	DECLARE_FUNCTION(execGetGravity); \
	DECLARE_FUNCTION(execStopSDFVisualization); \
	DECLARE_FUNCTION(execRunSDFVisualization); \
	DECLARE_FUNCTION(execSDFVisualizationRunning); \
	DECLARE_FUNCTION(execStopSimulation); \
	DECLARE_FUNCTION(execRunSimulation); \
	DECLARE_FUNCTION(execSimulationRunning); \
	DECLARE_FUNCTION(execGetGridResolution); \
	DECLARE_FUNCTION(execSetGridResolution); \
	DECLARE_FUNCTION(execSetMaxNumParticles); \
	DECLARE_FUNCTION(execGetMaxNumParticles); \
	DECLARE_FUNCTION(execSetIterationsPerFrame); \
	DECLARE_FUNCTION(execGetIterationsPerFrame); \
	DECLARE_FUNCTION(execGetActiveParticleCount); \
	DECLARE_FUNCTION(execSetSimulationSpeed); \
	DECLARE_FUNCTION(execGetSimulationSpeed); \
	DECLARE_FUNCTION(execSetTimeStepMax); \
	DECLARE_FUNCTION(execGetTimeStepMax); \
	DECLARE_FUNCTION(execRemoveManipulator); \
	DECLARE_FUNCTION(execAddManipulator); \
	DECLARE_FUNCTION(execRemoveZibraSDFCollider); \
	DECLARE_FUNCTION(execAddZibraSDFCollider); \
	DECLARE_FUNCTION(execSetContainerSize); \
	DECLARE_FUNCTION(execGetContainerSize); \
	DECLARE_FUNCTION(execAddAllManipulators); \
	DECLARE_FUNCTION(execAddAllColliders);


#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRayMarchStepFactor); \
	DECLARE_FUNCTION(execGetRayMarchStepFactor); \
	DECLARE_FUNCTION(execSetRayMarchStepSize); \
	DECLARE_FUNCTION(execGetRayMarchStepSize); \
	DECLARE_FUNCTION(execSetRayMarchMaxSteps); \
	DECLARE_FUNCTION(execGetRayMarchMaxSteps); \
	DECLARE_FUNCTION(execSetRayMarchIsoSurface); \
	DECLARE_FUNCTION(execGetRayMarchIsoSurface); \
	DECLARE_FUNCTION(execSetIsoSurfaceLevel); \
	DECLARE_FUNCTION(execGetIsoSurfaceLevel); \
	DECLARE_FUNCTION(execSetDualContourIsoSurfaceLevel); \
	DECLARE_FUNCTION(execGetDualContourIsoSurfaceLevel); \
	DECLARE_FUNCTION(execSetMeshOptimizationStep); \
	DECLARE_FUNCTION(execGetMeshOptimizationStep); \
	DECLARE_FUNCTION(execSetVertexOptimizationStep); \
	DECLARE_FUNCTION(execGetVertexOptimizationStep); \
	DECLARE_FUNCTION(execSetMeshOptimizationIterations); \
	DECLARE_FUNCTION(execGetMeshOptimizationIterations); \
	DECLARE_FUNCTION(execSetVertexOptimizationIterations); \
	DECLARE_FUNCTION(execGetVertexOptimizationIterations); \
	DECLARE_FUNCTION(execSetAdditionalJFAIterations); \
	DECLARE_FUNCTION(execGetAdditionalJFAIterations); \
	DECLARE_FUNCTION(execSetMaxLiquidMeshSize); \
	DECLARE_FUNCTION(execGetMaxLiquidMeshSize); \
	DECLARE_FUNCTION(execSetUnderwaterRender); \
	DECLARE_FUNCTION(execUnderwaterRenderEnabled); \
	DECLARE_FUNCTION(execSetRefractionBounces); \
	DECLARE_FUNCTION(execGetRefractionBounces); \
	DECLARE_FUNCTION(execSetRefractionQuality); \
	DECLARE_FUNCTION(execGetRefractionQuality); \
	DECLARE_FUNCTION(execGetRayMarchingResolutionDownscale); \
	DECLARE_FUNCTION(execSetRayMarchingResolutionDownscale); \
	DECLARE_FUNCTION(execSetBlurRadius); \
	DECLARE_FUNCTION(execGetBlurRadius); \
	DECLARE_FUNCTION(execSetParticleScale); \
	DECLARE_FUNCTION(execGetParticleScale); \
	DECLARE_FUNCTION(execSetFluidSurfaceBlur); \
	DECLARE_FUNCTION(execGetFluidSurfaceBlur); \
	DECLARE_FUNCTION(execSetIndexOfRefraction); \
	DECLARE_FUNCTION(execGetIndexOfRefraction); \
	DECLARE_FUNCTION(execSetAbsorptionAmount); \
	DECLARE_FUNCTION(execGetAbsorptionAmount); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execGetOpacity); \
	DECLARE_FUNCTION(execSetScatteringAmount); \
	DECLARE_FUNCTION(execGetScatteringAmount); \
	DECLARE_FUNCTION(execSetMetalness); \
	DECLARE_FUNCTION(execGetMetalness); \
	DECLARE_FUNCTION(execSetRoughness); \
	DECLARE_FUNCTION(execGetRoughness); \
	DECLARE_FUNCTION(execSetEmissiveColor); \
	DECLARE_FUNCTION(execGetEmissiveColor); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetForceInteractionStrength); \
	DECLARE_FUNCTION(execGetForceInteractionStrength); \
	DECLARE_FUNCTION(execSetSurfaceTension); \
	DECLARE_FUNCTION(execGetSurfaceTension); \
	DECLARE_FUNCTION(execSetViscosity); \
	DECLARE_FUNCTION(execGetViscosity); \
	DECLARE_FUNCTION(execSetMinimumVelocity); \
	DECLARE_FUNCTION(execGetMinimumVelocity); \
	DECLARE_FUNCTION(execSetMaximumVelocity); \
	DECLARE_FUNCTION(execGetMaximumVelocity); \
	DECLARE_FUNCTION(execSetParticleDensity); \
	DECLARE_FUNCTION(execGetParticleDensity); \
	DECLARE_FUNCTION(execSetFluidStiffness); \
	DECLARE_FUNCTION(execGetFluidStiffness); \
	DECLARE_FUNCTION(execSetGravity); \
	DECLARE_FUNCTION(execGetGravity); \
	DECLARE_FUNCTION(execStopSDFVisualization); \
	DECLARE_FUNCTION(execRunSDFVisualization); \
	DECLARE_FUNCTION(execSDFVisualizationRunning); \
	DECLARE_FUNCTION(execStopSimulation); \
	DECLARE_FUNCTION(execRunSimulation); \
	DECLARE_FUNCTION(execSimulationRunning); \
	DECLARE_FUNCTION(execGetGridResolution); \
	DECLARE_FUNCTION(execSetGridResolution); \
	DECLARE_FUNCTION(execSetMaxNumParticles); \
	DECLARE_FUNCTION(execGetMaxNumParticles); \
	DECLARE_FUNCTION(execSetIterationsPerFrame); \
	DECLARE_FUNCTION(execGetIterationsPerFrame); \
	DECLARE_FUNCTION(execGetActiveParticleCount); \
	DECLARE_FUNCTION(execSetSimulationSpeed); \
	DECLARE_FUNCTION(execGetSimulationSpeed); \
	DECLARE_FUNCTION(execSetTimeStepMax); \
	DECLARE_FUNCTION(execGetTimeStepMax); \
	DECLARE_FUNCTION(execRemoveManipulator); \
	DECLARE_FUNCTION(execAddManipulator); \
	DECLARE_FUNCTION(execRemoveZibraSDFCollider); \
	DECLARE_FUNCTION(execAddZibraSDFCollider); \
	DECLARE_FUNCTION(execSetContainerSize); \
	DECLARE_FUNCTION(execGetContainerSize); \
	DECLARE_FUNCTION(execAddAllManipulators); \
	DECLARE_FUNCTION(execAddAllColliders);


#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZibraLiquid(); \
	friend struct Z_Construct_UClass_AZibraLiquid_Statics; \
public: \
	DECLARE_CLASS(AZibraLiquid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZibraAILiquidRuntime"), NO_API) \
	DECLARE_SERIALIZER(AZibraLiquid)


#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAZibraLiquid(); \
	friend struct Z_Construct_UClass_AZibraLiquid_Statics; \
public: \
	DECLARE_CLASS(AZibraLiquid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZibraAILiquidRuntime"), NO_API) \
	DECLARE_SERIALIZER(AZibraLiquid)


#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZibraLiquid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZibraLiquid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZibraLiquid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZibraLiquid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZibraLiquid(AZibraLiquid&&); \
	NO_API AZibraLiquid(const AZibraLiquid&); \
public:


#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZibraLiquid(AZibraLiquid&&); \
	NO_API AZibraLiquid(const AZibraLiquid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZibraLiquid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZibraLiquid); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZibraLiquid)


#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SolverParameters() { return STRUCT_OFFSET(AZibraLiquid, SolverParameters); } \
	FORCEINLINE static uint32 __PPO__MaterialParameters() { return STRUCT_OFFSET(AZibraLiquid, MaterialParameters); } \
	FORCEINLINE static uint32 __PPO__RenderingParameters() { return STRUCT_OFFSET(AZibraLiquid, RenderingParameters); } \
	FORCEINLINE static uint32 __PPO__ManipulatorManager() { return STRUCT_OFFSET(AZibraLiquid, ManipulatorManager); } \
	FORCEINLINE static uint32 __PPO__bSpawnedEmitterActor() { return STRUCT_OFFSET(AZibraLiquid, bSpawnedEmitterActor); }


#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_40_PROLOG
#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_SPARSE_DATA \
	HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_RPC_WRAPPERS \
	HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_INCLASS \
	HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_SPARSE_DATA \
	HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZIBRAAILIQUIDRUNTIME_API UClass* StaticClass<class AZibraLiquid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ZibraAILiquid_Source_ZibraAILiquidRuntime_Public_ZibraLiquid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
