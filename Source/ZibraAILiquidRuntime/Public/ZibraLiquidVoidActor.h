// Copyright Zibra AI, Inc 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GameFramework/Actor.h"
#include "ZibraLiquidVoidActor.generated.h"

class UZibraLiquidVoid;

UCLASS(ComponentWrapperClass)
class ZIBRAAILIQUIDRUNTIME_API AZibraLiquidVoidActor : public AActor
{
	GENERATED_UCLASS_BODY()

private:
	UPROPERTY(Category=ZibraAI, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	UZibraLiquidVoid* LiquidVoid;

public:
	FORCEINLINE UZibraLiquidVoid* GetLiquidVoidComponent() const { return LiquidVoid; }
};
