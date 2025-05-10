// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#include "ZibraNeuralCollider.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BillboardComponent.h"
#include "Engine/StaticMesh.h"
#include "ZibraHTTPService.h"
#include "DrawDebugHelpers.h"
#include "ZibraHTTPService.h"
#include "ZibraNotifications.h"

#if WITH_EDITOR
#include "Editor/EditorEngine.h"
#include "Editor.h"
#endif


UZibraNeuralCollider::UZibraNeuralCollider()
{
	ManipType = FManipulatorType::ZibraNeuralCollider;

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.TickGroup = ETickingGroup::TG_PrePhysics;
	bTickInEditor = true;

	const AActor* Owner = GetOwner();
	if (Owner)
		SetRelativeScale3D_Direct(Owner->GetActorScale());

	if (!CurrentRepresentationV3.embeds.IsEmpty())
	{
		EmbeddingsStatus = EEmbeddingsStatus ::EEmbeddingsStatus_Ready;
	}
	else
	{
		EmbeddingsStatus = EEmbeddingsStatus::EEmbeddingsStatus_NoEmbeddings;
	}
	EmbeddingsStatusDisplay = UEnum::GetDisplayValueAsText(EmbeddingsStatus).ToString();

#if WITH_EDITOR
		SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
		if (SpriteComponent)
		{
			static ConstructorHelpers::FObjectFinder<UTexture2D> IconTexture(TEXT("Texture2D'/ZibraAILiquid/ZibraLiquidContent/Icons/ZibraNeuralCollider.ZibraNeuralCollider'"));
			SpriteComponent->SetSprite(IconTexture.Object);
			SpriteComponent->SetupAttachment(this);
			SpriteComponent->SetRelativeLocation(FVector(0, 0, 0));
			SpriteComponent->SetRelativeScale3D_Direct(FVector(0.5f, 0.5f, 0.5f));
		}
#endif
}

void UZibraNeuralCollider::BeginPlay()
{
	Super::BeginPlay();
	ManipType = FManipulatorType::ZibraNeuralCollider;
	Initialize();
}

FVoxelEmbedding UZibraNeuralCollider::GetVoxelInfo()
{
	return VoxelInfo;
}

void UZibraNeuralCollider::OnComponentCreated()
{
	Super::OnComponentCreated();

	SetRelativeLocation(FVector(0, 0, 0));
}

void UZibraNeuralCollider::CreateRepresentation()
{
	bHasRepresentationV3 = true;

	FBase64::Decode(CurrentRepresentationV3.sd_grid, VoxelInfo.grid);

	TArray<uint8> embeds;
	FBase64::Decode(CurrentRepresentationV3.embeds, embeds);

	VoxelInfo.embeds.Init(0, 4 * EMBEDDING_GRID_SIZE * EMBEDDING_SIZE);

	for (int i = 0; i < EMBEDDING_GRID_DIMENSION; i++)
	{
		for (int j = 0; j < EMBEDDING_GRID_DIMENSION; j++)
		{
			for (int k = 0; k < EMBEDDING_GRID_DIMENSION; k++)
			{
				for (int t = 0; t < EMBEDDING_SIZE; t++)
				{
					int id0 = (i + t * EMBEDDING_GRID_DIMENSION +
						EMBEDDING_SIZE * EMBEDDING_GRID_DIMENSION * (j + k * EMBEDDING_GRID_DIMENSION)) * PACKING;
					int id1 = (t + (i + EMBEDDING_GRID_DIMENSION * (j + k * EMBEDDING_GRID_DIMENSION)) *
						EMBEDDING_SIZE) * PACKING;

					VoxelInfo.embeds[id0 + 0] = embeds[id1 + 0];
					VoxelInfo.embeds[id0 + 1] = embeds[id1 + 1];
					VoxelInfo.embeds[id0 + 2] = embeds[id1 + 2];
					VoxelInfo.embeds[id0 + 3] = embeds[id1 + 3];
				}
			}
		}
	}

	TArray<float> Q = UZibraHTTPService::DecodeFloat(CurrentRepresentationV3.transform.Q);
	TArray<float> T = UZibraHTTPService::DecodeFloat(CurrentRepresentationV3.transform.T);
	TArray<float> S = UZibraHTTPService::DecodeFloat(CurrentRepresentationV3.transform.S);

	FQuat Rotation = FQuat(-Q[1], -Q[2], -Q[3], Q[0]);
	ZibraVector3 Scale = ZibraVector3(S[0], S[1], S[2]);
	ZibraVector3 Translation = ZibraVector3(-T[0], -T[1], -T[2]);

	ObjectTransform = FScaleMatrix((FVector)Scale) * FTranslationMatrix((FVector)Translation) * FRotationMatrix(Rotation.Rotator());

	CurrentRepresentationV3.embeds = nullptr;
	CurrentRepresentationV3.sd_grid = nullptr;

	EmbeddingsStatus = EEmbeddingsStatus::EEmbeddingsStatus_Ready;
	EmbeddingsStatusDisplay = UEnum::GetDisplayValueAsText(EmbeddingsStatus).ToString();
}

void UZibraNeuralCollider::InitializeConstData()
{
	
}

void UZibraNeuralCollider::Initialize()
{
	ManipType = FManipulatorType::ZibraNeuralCollider;

	if (!bIsInitialized) // if has not been initialized at all
	{
		ColliderIndex = AllColliders.IndexOfByKey(this);

		ColliderParams.CurrentID = ColliderIndex;
		ColliderParams.VoxelCount = VoxelCount;
		ColliderParams.BBoxMin = BoundingBoxMin;
		ColliderParams.BBoxMax = BoundingBoxMax;
		ColliderParams.colliderIndex = ColliderIndex;

		AdditionalData.X = (float)chosenSDFType;
		AdditionalData.Y = (float)VoxelCount;
	}

	TArray<UStaticMeshComponent*> Components;
	GetOwner()->GetComponents<UStaticMeshComponent>(Components);

	if (Components.Num() > 0)
	{
		UStaticMeshComponent* StaticMeshComponent = Components[0];
		SetPrimitiveComponent(StaticMeshComponent);
	}
}


void UZibraNeuralCollider::CreateMeshBBCube()
{
	TArray<UStaticMeshComponent*> Components;
	GetOwner()->GetComponents<UStaticMeshComponent>(Components);
	if (Components.Num() > 0)
	{
		FTransform transform = GetOwner()->GetActorTransform();
		GetOwner()->SetActorTransform(FTransform());
		FBoxSphereBounds bounds = Components[0]->Bounds;
#if ENGINE_MAJOR_VERSION == 4
		FBox box = bounds.GetBox();
#elif ENGINE_MAJOR_VERSION == 5
		FBox3d box = bounds.GetBox();
#endif
		BoundingBoxMin = box.Min;
		BoundingBoxMax = box.Max;
		GetOwner()->SetActorTransform(transform);

	}
}

UStaticMesh* UZibraNeuralCollider::GetMesh()
{
	TArray<UStaticMeshComponent*> Components;
	GetOwner()->GetComponents<UStaticMeshComponent>(Components);

	UStaticMeshComponent* StaticMeshComponent = Components[0];
	return StaticMeshComponent->GetStaticMesh();
}


ULONG UZibraNeuralCollider::GetMemoryFootrpint()
{
	ULONG result = 0;
	if (VoxelInfo.grid.Num() == 0 || VoxelInfo.embeds.Num() == 0)
		return result;

	result += (VoxelInfo.grid.Num() + VoxelInfo.embeds.Num()) * sizeof(float);				// VoxelEmbeddings

	return result;
}

void UZibraNeuralCollider::GenerateRepresenation()
{
/*Neb:+*/ return CreateMeshBBCube();
	if (HTTPServiceID < 0)
	{
		HTTPServiceID = UZibraHTTPService::GetID();
	}
	UZibraHTTPService::Get(HTTPServiceID)->Initialize();

	if (UZibraHTTPService::Get(HTTPServiceID)->OnDataProcessed.IsBound())
	{
		UZibraHTTPService::Get(HTTPServiceID)->OnDataProcessed.Unbind();
	}
	if (UZibraHTTPService::Get(HTTPServiceID)->GetStatus() == EZibraLicenseKeyStatus::EZibraLicenseKeyStatus_OK)
	{
		if (EmbeddingsStatus != EEmbeddingsStatus_Requested)
		{
			CreateMeshBBCube();
			UZibraHTTPService::Get(HTTPServiceID)->OnDataProcessed.BindUObject(this, &UZibraNeuralCollider::GetResponseData);
			UZibraHTTPService::Get(HTTPServiceID)->SendRequest(GetOwner());
			EmbeddingsStatus = EEmbeddingsStatus::EEmbeddingsStatus_Requested;
			EmbeddingsStatusDisplay = UEnum::GetDisplayValueAsText(EmbeddingsStatus).ToString();
		}
	}
	else
	{
		FString ErrorMessage = UZibraHTTPService::Get(HTTPServiceID)->GetErrorMessage();
		UE_LOG(LogZibraAILiquidRuntime, Error, TEXT("%s"), *ErrorMessage);
		ZibraNotifications::AddNotification(ErrorMessage);
	}
}

void UZibraNeuralCollider::CancelRequest()
{
/*Neb+*/ return;
	if (HTTPServiceID < 0)
	{
		HTTPServiceID = UZibraHTTPService::GetID();
	}
	UZibraHTTPService::Get(HTTPServiceID)->Initialize();
	if (UZibraHTTPService::Get(HTTPServiceID)->OnDataProcessed.IsBound())
	{
		UZibraHTTPService::Get(HTTPServiceID)->OnDataProcessed.Unbind();
	}
	EmbeddingsStatus = EEmbeddingsStatus::EEmbeddingsStatus_NoEmbeddings;
	EmbeddingsStatusDisplay = UEnum::GetDisplayValueAsText(EmbeddingsStatus).ToString();
}

int32 UZibraNeuralCollider::GetEmbeddingGridDimension()
{
	return EMBEDDING_GRID_DIMENSION;
}

int32 UZibraNeuralCollider::GetSDFAPXDimension()
{
	return SDF_APPROX_DIMENSION;
}

int32 UZibraNeuralCollider::GetEmbeddingSize()
{
	return EMBEDDING_SIZE;
}

void UZibraNeuralCollider::GetResponseData(FZibraVoxel_Representation InputData)
{
	if (InputData.embeds.IsEmpty())
	{
		EmbeddingsStatus = EEmbeddingsStatus::EEmbeddingsStatus_NoEmbeddings;
		EmbeddingsStatusDisplay = UEnum::GetDisplayValueAsText(EmbeddingsStatus).ToString();
		return;
	}

	CurrentRepresentationV3 = InputData;
	EmbeddingsStatus = EEmbeddingsStatus::EEmbeddingsStatus_Ready;
	EmbeddingsStatusDisplay = UEnum::GetDisplayValueAsText(EmbeddingsStatus).ToString();
	CreateMeshBBCube();
	CreateRepresentation();
}

void UZibraNeuralCollider::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

#if WITH_EDITOR

	if (!CurrentRepresentationV3.embeds.IsEmpty() && EmbeddingsStatus != EEmbeddingsStatus::EEmbeddingsStatus_Requested)
	{
		EmbeddingsStatus = EEmbeddingsStatus::EEmbeddingsStatus_Ready;
	}
	EmbeddingsStatusDisplay = UEnum::GetDisplayValueAsText(EmbeddingsStatus).ToString();
	if (EmbeddingsStatus == EEmbeddingsStatus::EEmbeddingsStatus_Ready)
	{
		float TotalMemoryFootprint = (float)GetMemoryFootrpint() / (1 << 20);
		VRAMFootprintDisplay = FString::Printf(TEXT("%f MB"), TotalMemoryFootprint);
	}
	else
	{
		VRAMFootprintDisplay = FString::Printf(TEXT(""));
	}

	if (GetWorld() != nullptr && GetWorld()->WorldType == EWorldType::Editor)
	{
		FQuat Quaternion = GetOwner()->GetActorQuat();
		FVector ActorLocation = GetOwner()->GetActorLocation();
		ActorLocation.Z += FMath::Abs(GetScale().Z) * BoundingBoxMax.Z + 30;
		SpriteComponent->SetWorldLocation(ActorLocation);
		DrawDebugBox(GEditor->GetEditorWorldContext().World(), GetPosition() + Quaternion.RotateVector(0.5f * (BoundingBoxMin + BoundingBoxMax) * GetScale()), (BoundingBoxMax - BoundingBoxMin) * GetScale() * 0.5f, Quaternion, FColor::Silver, false, 0, 0U, 2);
	}
#endif
}
