#include "CamManagerGameModeBase.h"


void ACamManagerGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	if (cameraManager) return;
	cameraManager = GetWorld()->SpawnActor<ACM_CameraManager>();
}
