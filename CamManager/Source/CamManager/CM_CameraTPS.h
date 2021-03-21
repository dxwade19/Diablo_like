#pragma once

#include "CoreMinimal.h"
#include "CM_Camera.h"
#include "CM_CameraTPS.generated.h"


UCLASS()
class CAMMANAGER_API ACM_CameraTPS : public ACM_Camera
{
	GENERATED_BODY()
	

public:
	//----SETTER----//
	void SetCamTPSTarget(AActor* _newTarget);

	void Move() override;
	void LookAt() override;
};
