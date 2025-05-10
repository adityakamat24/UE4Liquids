// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#include "ZibraSDFCollider.h"
#include "ZibraLiquid.h"
#include "ZibraNotifications.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

TArray<UZibraSDFCollider*> UZibraSDFCollider::AllColliders;
UZibraSDFCollider::UZibraSDFCollider()
{
	SetRelativeScale3D(FVector(1, 1, 1));
}

void UZibraSDFCollider::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	AdditionalData.Z = bInvertSDF ? -1.0f : 1.0f;
	AdditionalData.W = FluidFriction;
	if (NumberOfNotifications > 0)
	{
		NumberOfNotifications--;
	}
	TArray<ForceTorqueData> DataToApply = ForceTorqueToApply;
	for (ForceTorqueData data : DataToApply)
	{
		if (!data.bApplied)
		{
#if ZIBRA_LIQUID_PAID_VERSION
			if (bForceInteraction)
			{
				FVector Force =  data.Force * ForceInteractionScale;
				FVector Torque = data.Torque * ForceInteractionScale;
				if (PrimitiveComponent)
				{
					if (PrimitiveComponent->IsSimulatingPhysics())
					{
						if (PrimitiveComponent->GetBodyInstance()->bOverrideMass)
						{
							PrimitiveComponent->AddForce(Force);
							PrimitiveComponent->AddTorqueInRadians(Torque);
						}
						else 
						{
							#if WITH_EDITOR 
							UE_LOG(LogZibraAILiquidRuntime, Warning, TEXT("\"Mass in KG\" is disabled for actor %s , so Force Intercation can not be applied to it!"), *GetOwner()->GetActorLabel());
							#endif
						}
					}
					else 
					{
						#if WITH_EDITOR 
						UE_LOG(LogZibraAILiquidRuntime, Warning, TEXT("\"Simulate Physics\" is disabled for actor %s , so Force Intercation can not be applied to it!"), *GetOwner()->GetActorLabel());
						#endif
					}
				}
				else
				{
					if (NumberOfNotifications < 5)
					{
						ZibraNotifications::AddNotification("No PrimitiveComponent attached to collider, please add one for force interaction to work");
					}
					UE_LOG(LogZibraAILiquidRuntime, Error, TEXT("No PrimitiveComponent attached to collider, please add one for force interaction to work"));
				}
			}
#endif
			data.bApplied = true;
		}
	}

	for (ForceTorqueData data : DataToApply)
	{
		ForceTorqueToApply.Remove(data);
	}
}

ULONG UZibraSDFCollider::GetMemoryFootrpint()
{
	return 0;
}

void UZibraSDFCollider::ApplyForceTorque(FVector Force, FVector Torque)
{
	ForceTorqueData data;
	data.Force = Force;
	data.Torque = Torque;
	data.bApplied = false;
	ForceTorqueToApply.Add(data);
}

void UZibraSDFCollider::SetPrimitiveComponent(UPrimitiveComponent* NewPrimitiveComponent)
{
	PrimitiveComponent = NewPrimitiveComponent;
}

void UZibraSDFCollider::BeginPlay()
{
	Super::BeginPlay();

	if (!AllColliders.Contains(this))
	{
		AllColliders.Add(this);
	}

	NumberOfNotifications = 0;
}

void UZibraSDFCollider::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (AllColliders.Contains(this))
	{
		AllColliders.Remove(this);
	}
}

void UZibraSDFCollider::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);

	AllManipulators.Remove(this);

	for (TObjectIterator<AZibraLiquid> Itr; Itr; ++Itr)
	{
		Itr->RemoveDestroyedCollider(this);
	}
}
