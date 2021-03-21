#pragma once
#include "CM_TargetStatsComponent.h"

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ITarget.generated.h"


UINTERFACE(MinimalAPI)
class UITarget : public UInterface
{
	GENERATED_BODY()
};


class CAMMANAGER_API IITarget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void InitTargetStatsComponent();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent) UCM_TargetStatsComponent* GetTargetStats();
};
