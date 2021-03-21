#include "CM_Camera.h"
#include "CamManagerGameModeBase.h"
#include <DrawDebugHelpers.h>

#pragma region Contructor

ACM_Camera::ACM_Camera()
{
	PrimaryActorTick.bCanEverTick = true;
	USceneComponent* _root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = _root;
}

#pragma endregion

#pragma region UE_Methods

void ACM_Camera::BeginPlay()
{
	Super::BeginPlay();
	RegisterCamera();
	InitCam();
}

#pragma endregion

#pragma region Custom_Methods

#pragma region Init

void ACM_Camera::InitCam()
{
	cameraComponent = (UCameraComponent*)GetComponentByClass(actorComponent);
}

#pragma endregion

#pragma region Register/Unregister

void ACM_Camera::RegisterCamera()
{
	ACamManagerGameModeBase* _gameMode = static_cast <ACamManagerGameModeBase*>(GetWorld()->GetAuthGameMode());
	if (!_gameMode) return;
	ACM_CameraManager* _camManager = _gameMode->GetCameraManager();
	if (!_camManager) return;

	_camManager->AddItem(this);
}

void ACM_Camera::UnregisterCamera()
{
	ACamManagerGameModeBase* _gameMode = static_cast <ACamManagerGameModeBase*>(GetWorld()->GetAuthGameMode());
	if (!_gameMode) return;
	ACM_CameraManager* _camManager = _gameMode->GetCameraManager();
	if (!_camManager) return;

	_camManager->RemoveItem(this);
}

#pragma endregion

#pragma region Enable/Disable

void ACM_Camera::EnableCamera()
{
	if (!cameraComponent) return;
	cameraComponent->SetActive(true);
}

void ACM_Camera::DisableCamera()
{
	if (!cameraComponent) return;
	cameraComponent->SetActive(false);
}

#pragma endregion

#pragma region Move/LookAt

void ACM_Camera::Move()
{

}

void ACM_Camera::LookAt()
{

}

#pragma endregion

#pragma region Debug

void ACM_Camera::DrawDebug()
{
	if (!useDebug || !settings.GetCameraTarget()) return;
	DrawDebugLine(GetWorld(), GetOwner()->GetActorLocation(), settings.GetCameraTarget()->GetActorLocation(), lineToTargetColor);
}

#pragma endregion

#pragma endregion
