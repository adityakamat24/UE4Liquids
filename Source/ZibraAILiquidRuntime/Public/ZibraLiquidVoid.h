// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#pragma once

#include "ZibraManipulator.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZibraLiquidVoid.generated.h"

UCLASS(Blueprintable, ClassGroup = "ZibraAI", meta = (BlueprintSpawnableComponent, DisplayName = "Zibra Void"), hideCategories = (Rendering, Replication, Input, Actor, Base, Collision, Shape, OverlapCapsule, Physics, Cooking))
class ZIBRAAILIQUIDRUNTIME_API UZibraLiquidVoid  : public UZibraManipulator
{
	GENERATED_BODY()
public:
	UZibraLiquidVoid();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void OnComponentCreated() override;

	UPROPERTY(VisibleAnywhere, NonTransactional, SkipSerialization, meta = (DisplayName = "Deleted particles total", Category = "Zibra Liquid Manipulator"))
	int64 deletedParticleCountTotal = 0;
	
	UPROPERTY(VisibleAnywhere, NonTransactional, SkipSerialization, meta = (DisplayName = "Deleted particles last frame", Category = "Zibra Liquid Manipulator"))
	int32 deletedParticleCountPerFrame = 0;

	//API
	UFUNCTION(BlueprintCallable, Category = "Zibra Liquid Void")
	void Enable();

	UFUNCTION(BlueprintCallable, Category = "Zibra Liquid Void")
	void Disable();

	UFUNCTION(BlueprintCallable, Category = "Zibra Liquid Void")
	int64 GetDeletedParticleCountTotal();

	UFUNCTION(BlueprintCallable, Category = "Zibra Liquid Void")
	int32 GetDeletedParticleCountPerFrame();
	//end API
};


