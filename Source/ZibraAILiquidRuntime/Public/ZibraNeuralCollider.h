// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#pragma once

#include "ZibraSDFCollider.h"
#include "ZibraLiquidTypes.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMesh.h"
#include "ZibraNeuralCollider.generated.h"

UENUM()
enum EEmbeddingsStatus
{
	EEmbeddingsStatus_NoEmbeddings UMETA(DisplayName = "No SDF"),
	EEmbeddingsStatus_Requested UMETA(DisplayName = "SDF Requested"),
	EEmbeddingsStatus_Ready UMETA(DisplayName = "SDF Ready to Use")
};

UCLASS(Blueprintable, ClassGroup = "ZibraAI", meta = (BlueprintSpawnableComponent, DisplayName = "Zibra Neural Collider"), hideCategories = (Replication, Input, Actor, Base, Shape, OverlapCapsule, Cooking))
class ZIBRAAILIQUIDRUNTIME_API UZibraNeuralCollider : public UZibraSDFCollider
{
	GENERATED_BODY()
public:
	UZibraNeuralCollider();

	void BeginPlay() override;

	virtual FVoxelEmbedding GetVoxelInfo() override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void OnComponentCreated() override;

	UPROPERTY()
	FVector BoundingBoxMin;

	UPROPERTY()
	FVector BoundingBoxMax;

	UPROPERTY()
	FZibraVoxel_Representation CurrentRepresentationV3;

	UPROPERTY()
	bool bHasRepresentationV3;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, DisplayName = "SDF Status", Category = "Zibra Liquid Manipulator")
	FString EmbeddingsStatusDisplay;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, DisplayName = "Approximate VRAM footprint", Category = "Zibra Liquid Manipulator")
	FString VRAMFootprintDisplay;

	UPROPERTY()
	TEnumAsByte<EEmbeddingsStatus> EmbeddingsStatus;
	
	UPROPERTY()
	FVoxelEmbedding VoxelInfo;

	void CreateRepresentation();
	void InitializeConstData() override;
	void Initialize() override;
	void CreateMeshBBCube();
	UStaticMesh* GetMesh();
	ULONG GetMemoryFootrpint();

	UFUNCTION(CallInEditor, Category = "Zibra Liquid Manipulator", meta = (DisplayName = "Generate Collider"))
	void GenerateRepresenation();

	UFUNCTION(CallInEditor, Category = "Zibra Liquid Manipulator", meta = (DisplayName = "Cancel Request"))
	void CancelRequest();

	static int32 GetEmbeddingGridDimension();
	static int32 GetSDFAPXDimension();
	static int32 GetEmbeddingSize();

private:
	static const int32 SDF_APPROX_DIMENSION = 32;
	static const int32 EMBEDDING_GRID_DIMENSION = 21;
	static const int32 EMBEDDING_GRID_SIZE =
		EMBEDDING_GRID_DIMENSION * EMBEDDING_GRID_DIMENSION * EMBEDDING_GRID_DIMENSION;
	static const int32 SDF_APPX_SIZE = SDF_APPROX_DIMENSION * SDF_APPROX_DIMENSION * SDF_APPROX_DIMENSION;
	static const int32 PACKING = 4;
	static const int32 EMBEDDING_BASE_SIZE = 16;
	static const int32 EMBEDDING_SIZE = EMBEDDING_BASE_SIZE / PACKING;

	int32 VoxelCount;
	int32 HTTPServiceID = -1;
	UFUNCTION()
	void GetResponseData(FZibraVoxel_Representation Response);
};


