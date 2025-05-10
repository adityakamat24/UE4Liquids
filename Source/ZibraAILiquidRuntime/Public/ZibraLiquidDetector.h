// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#pragma once

#include "ZibraManipulator.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZibraLiquidDetector.generated.h"

UCLASS(Blueprintable, ClassGroup = "ZibraAI", meta = (BlueprintSpawnableComponent, DisplayName = "Zibra Detector"), hideCategories = (Rendering, Replication, Input, Actor, Base, Collision, Shape, OverlapCapsule, Physics, Cooking))
class ZIBRAAILIQUIDRUNTIME_API UZibraLiquidDetector  : public UZibraManipulator
{
	GENERATED_BODY()
public:
	UZibraLiquidDetector();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void OnComponentCreated() override;

	UPROPERTY(VisibleAnywhere, NonTransactional, SkipSerialization, meta = (Category = "Zibra Liquid Manipulator"))
	int32 particlesInside = 0;

	//API
	UFUNCTION(BlueprintCallable, Category = "Zibra Liquid Detector")
	void Enable();

	UFUNCTION(BlueprintCallable, Category = "Zibra Liquid Detector")
	void Disable();

	UFUNCTION(BlueprintCallable, Category = "Zibra Liquid Detector")
	int32 GetParticlesInside();
	//end API
};


