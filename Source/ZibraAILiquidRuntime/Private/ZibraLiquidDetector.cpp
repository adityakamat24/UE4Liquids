// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#include "ZibraLiquidDetector.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BillboardComponent.h"
#include "Engine/StaticMesh.h"
#include "DrawDebugHelpers.h"

#if WITH_EDITOR
#include "Editor/EditorEngine.h"
#include "Editor.h"
#endif

UZibraLiquidDetector::UZibraLiquidDetector()
{
	ManipType = FManipulatorType::Detector;

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.TickGroup = ETickingGroup::TG_PrePhysics;
	bTickInEditor = true;

	SetRelativeScale3D(FVector(100, 100, 100));

#if WITH_EDITOR
	SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
	if (SpriteComponent)
	{
		static ConstructorHelpers::FObjectFinder<UTexture2D> IconTexture(TEXT("Texture2D'/ZibraAILiquid/ZibraLiquidContent/Icons/Detector.Detector'"));
		SpriteComponent->SetSprite(IconTexture.Object);
		SpriteComponent->SetupAttachment(this);
		SetRelativeLocation(FVector(0, 0, 0));
		SpriteComponent->SetRelativeLocation(FVector(0, 0, 0));
		SpriteComponent->SetRelativeScale3D_Direct(FVector(0.5f, 0.5f, 0.5f));
	}
#endif
}

void UZibraLiquidDetector::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
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
		DrawDebugBox(GEditor->GetEditorWorldContext().World(), GetPosition(), GetScale() * .5, Quat, FColor::Magenta, false, 0, 0U, 2);
	}
#endif
}

void UZibraLiquidDetector::OnComponentCreated()
{
	Super::OnComponentCreated();

	SetRelativeLocation(FVector(0, 0, 0));
}


void UZibraLiquidDetector::Enable()
{
	bIsEnabled = true;
}

void UZibraLiquidDetector::Disable()
{
	bIsEnabled = false;
}

int32 UZibraLiquidDetector::GetParticlesInside()
{
	return particlesInside;
}
