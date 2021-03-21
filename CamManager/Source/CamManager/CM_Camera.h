#pragma once
#include "CamSettings.h"
#include "Camera/CameraComponent.h"


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CM_Camera.generated.h"


UCLASS()
class CAMMANAGER_API ACM_Camera : public AActor
{
	GENERATED_BODY()

private:
	void InitCam();

protected:
	UPROPERTY(EditAnywhere, Category = "Camera Settings") int id;
	UPROPERTY(EditAnywhere, Category = "Camera Settings") FCamSettings settings;
	UPROPERTY(EditAnywhere, Category = "Camera Component") UCameraComponent* cameraComponent;
	UPROPERTY(EditAnywhere, Category = "Camera Component") TSubclassOf<UActorComponent> actorComponent;

	UPROPERTY(EditAnywhere, Category = "Debug") bool useDebug;
	UPROPERTY(EditAnywhere, Category = "Debug") FColor lineToTargetColor = FColor::Yellow;

	virtual void BeginPlay() override;
	

public:	
	ACM_Camera();
	
	//----GETTER----//
	inline int GetCamID() { return id; }
	inline UCameraComponent* GetCameraComponent() { return cameraComponent; }
	inline bool GetUseDebug() { return useDebug; }

	//----SETTER----//
	void SetCamSettings(FCamSettings _newSettings) { settings = _newSettings; }
	void SetCamFollowTarget(AActor* _newTarget) { settings.SetTarget(_newTarget); }
	void SetCamLookTarget(AActor* _newTarget) { settings.SetLookAtTarget(_newTarget); }

	void RegisterCamera();
	void UnregisterCamera();

	void EnableCamera();
	void DisableCamera();

	UFUNCTION() virtual void Move();
	UFUNCTION() virtual void LookAt();
	UFUNCTION() virtual void DrawDebug();
};
