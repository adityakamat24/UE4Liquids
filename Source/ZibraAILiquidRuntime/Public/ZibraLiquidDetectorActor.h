// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GameFramework/Actor.h"
#include "ZibraLiquidDetectorActor.generated.h"

class UZibraLiquidDetector;

UCLASS(ComponentWrapperClass)
class ZIBRAAILIQUIDRUNTIME_API AZibraLiquidDetectorActor : public AActor
{
	GENERATED_UCLASS_BODY()

private:
	UPROPERTY(Category=ZibraAI, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	UZibraLiquidDetector* LiquidDetector;

public:
	FORCEINLINE UZibraLiquidDetector* GetLiquidDetectorComponent() const { return LiquidDetector; }
};
