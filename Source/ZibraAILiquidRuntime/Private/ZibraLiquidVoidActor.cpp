// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#include "ZibraLiquidVoidActor.h"
#include "ZibraLiquidVoid.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

AZibraLiquidVoidActor::AZibraLiquidVoidActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	LiquidVoid = CreateDefaultSubobject<UZibraLiquidVoid>(TEXT("LiquidVoid"));

	USceneComponent* DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;

	UStaticMeshComponent* CubeComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMeshComponent"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	CubeComponent->SetStaticMesh(CubeMesh.Object);
	CubeComponent->SetupAttachment(RootComponent);
	SetActorScale3D(FVector(1, 1, 1));
	LiquidVoid->SetupAttachment(CubeComponent);
	LiquidVoid->SetRelativeScale3D(FVector(100, 100, 100));
	LiquidVoid->SetRelativeLocation(GetActorLocation());
	CubeComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CubeComponent->SetVisibility(false);
}