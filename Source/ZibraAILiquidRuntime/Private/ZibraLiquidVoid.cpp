// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#include "ZibraLiquidVoid.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BillboardComponent.h"
#include "Engine/StaticMesh.h"
#include "DrawDebugHelpers.h"

#if WITH_EDITOR
#include "Editor/EditorEngine.h"
#include "Editor.h"
#endif

UZibraLiquidVoid::UZibraLiquidVoid()
{
	ManipType = FManipulatorType::Void;

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.TickGroup = ETickingGroup::TG_PrePhysics;
	bTickInEditor = true;
	SetRelativeScale3D(FVector(100, 100, 100));

#if WITH_EDITOR
	SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
	if (SpriteComponent)
	{
		static ConstructorHelpers::FObjectFinder<UTexture2D> IconTexture(TEXT("Texture2D'/ZibraAILiquid/ZibraLiquidContent/Icons/Void.Void'"));
		SpriteComponent->SetSprite(IconTexture.Object);
		SpriteComponent->SetupAttachment(this);
		SpriteComponent->SetRelativeLocation(FVector(0, 0, 0));
		SpriteComponent->SetRelativeScale3D_Direct(FVector(0.5f, 0.5f, 0.5f));
	}
#endif
}

void UZibraLiquidVoid::OnComponentCreated()
{
	Super::OnComponentCreated();

	SetRelativeLocation(FVector(0, 0, 0));
}


void UZibraLiquidVoid::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

#if WITH_EDITOR
	
	if (GetWorld() != nullptr && GetWorld()->WorldType == EWorldType::Editor)
	{
		FVector ActorLocation = GetOwner()->GetActorLocation();
		ActorLocation.Z += FMath::Abs(GetScale().Z) + 30;
		SpriteComponent->SetWorldLocation(ActorLocation);

		FQuat Quat = FQuat::Identity;
		if (GetOwner())
		{
			Quat = GetOwner()->GetActorRotation().Quaternion();
		}
		DrawDebugBox(GEditor->GetEditorWorldContext().World(), GetPosition(), GetScale() * .5, Quat, FColor::Red, false, 0, 0U, 2);
	}
#endif
}

void UZibraLiquidVoid::Enable()
{
	bIsEnabled = true;
}

void UZibraLiquidVoid::Disable()
{
	bIsEnabled = false;
}

int64 UZibraLiquidVoid::GetDeletedParticleCountTotal()
{
	return deletedParticleCountTotal;
}

int32 UZibraLiquidVoid::GetDeletedParticleCountPerFrame()
{
	return deletedParticleCountPerFrame;
}
