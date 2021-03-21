#pragma once
#include "CM_CameraManager.h"

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CamManagerGameModeBase.generated.h"


UCLASS()
class CAMMANAGER_API ACamManagerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere) ACM_CameraManager* cameraManager = NULL;

public:
	//----GETTER----//
	inline ACM_CameraManager* GetCameraManager() { return cameraManager; }
	
	void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
};
