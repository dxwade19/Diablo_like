#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CamSettings.generated.h"


USTRUCT()
struct CAMMANAGER_API FCamSettings
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Target") AActor* target;
	UPROPERTY(EditAnywhere, Category = "Target") AActor* targetToLook;

	UPROPERTY(EditAnywhere, Category = "Position Offset") bool isWorldOffset;
	UPROPERTY(EditAnywhere, Category = "Position Offset") float xPosOffset;
	UPROPERTY(EditAnywhere, Category = "Position Offset") float yPosOffset;
	UPROPERTY(EditAnywhere, Category = "Position Offset") float zPosOffset;
	

	UPROPERTY(EditAnywhere, Category = "Speed") float positionMoveSpeed;
	UPROPERTY(EditAnywhere, Category = "Speed") float lookAtSpeed;

public:

	//----GETTER----//
	inline AActor* GetCameraTarget() { return target; }
	inline AActor* GetLookAtTarget() { return targetToLook; }
	inline float GetPositionMoveSpeed() { return positionMoveSpeed; }
	inline float GetLookAtSpeed() { return lookAtSpeed; }
	inline FVector GetTargetPos() { return target->GetActorLocation(); }

	FVector GetFinalCamLocation();

	//----SETTER----//
	inline void SetTarget(AActor* _newTarget) { target = _newTarget; }
	inline void SetLookAtTarget(AActor* _newTarget) { targetToLook = _newTarget; }
};
