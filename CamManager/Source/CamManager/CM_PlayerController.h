#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CM_PlayerController.generated.h"


UCLASS()
class CAMMANAGER_API ACM_PlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	UPROPERTY() FVector targetPos;

	
public:
	void Init();

};
