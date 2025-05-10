// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#include "ZibraLiquidDetectorActor.h"
#include "ZibraLiquidDetector.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

AZibraLiquidDetectorActor::AZibraLiquidDetectorActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	LiquidDetector = CreateDefaultSubobject<UZibraLiquidDetector>(TEXT("LiquidDetector"));

	USceneComponent* DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;

	UStaticMeshComponent* CubeComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMeshComponent"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	CubeComponent->SetStaticMesh(CubeMesh.Object);
	CubeComponent->SetupAttachment(RootComponent);
	SetActorScale3D(FVector(1, 1, 1));
	LiquidDetector->SetupAttachment(CubeComponent);
	LiquidDetector->SetRelativeScale3D(FVector(100, 100, 100));
	LiquidDetector->SetRelativeLocation(FVector(0, 0, 0));
	CubeComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CubeComponent->SetVisibility(false);
}