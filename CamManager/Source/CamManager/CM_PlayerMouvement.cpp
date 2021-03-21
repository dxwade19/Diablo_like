#include "CM_PlayerMouvement.h"
#include <Kismet/KismetMathLibrary.h>
#include <DrawDebugHelpers.h>

#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Kismet/GameplayStatics.h"


#pragma region Constructor

UCM_PlayerMouvement::UCM_PlayerMouvement()
{
	PrimaryComponentTick.bCanEverTick = true;
}

#pragma endregion


#pragma region UE_Methods

void UCM_PlayerMouvement::BeginPlay()
{
	Super::BeginPlay();
	targetPos = GetOwner()->GetActorLocation();
	
}

void UCM_PlayerMouvement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!IsTargetReached())
	{
		Move(DeltaTime);
		Rotate(DeltaTime);
	}

	DrawGizmos();
}

#pragma endregion

#pragma region Custom_Methods

#pragma region Move / Rotate

void UCM_PlayerMouvement::Move(float _deltaTime)
{
	UAIBlueprintHelperLibrary::SimpleMoveToLocation(UGameplayStatics::GetPlayerController(GetWorld(), 0), targetPos);
}

void UCM_PlayerMouvement::Rotate(float _deltaTime)
{
	FRotator _finalRotation = UKismetMathLibrary::FindLookAtRotation(GetOwner()->GetActorLocation(), targetPos);
	GetOwner()->SetActorRotation(FMath::Lerp(GetOwner()->GetActorRotation(), _finalRotation, rotateSpeed * _deltaTime), ETeleportType::TeleportPhysics);

	if (useRotateClampX) ClampXRotation();
}


void UCM_PlayerMouvement::ClampXRotation()
{
	FRotator _actorRotation = GetOwner()->GetActorRotation();
	_actorRotation.Roll = FMath::Clamp(_actorRotation.Roll, minClampXRotation, maxClampXRotation);
	_actorRotation.Pitch = FMath::Clamp(_actorRotation.Roll, minClampXRotation, maxClampXRotation);
	GetOwner()->SetActorRotation(_actorRotation, ETeleportType::TeleportPhysics);
}

#pragma endregion

bool UCM_PlayerMouvement::IsTargetReached()
{
	if (FVector::Distance(targetPos, GetOwner()->GetActorLocation()) < minDistanceWithTarget)
		return true;

	return false;
}

#pragma region DrawGizmos

void UCM_PlayerMouvement::DrawGizmos()
{
	if (!isUseGizmos) return;
	DrawDebugSphere(GetWorld(), targetPos, 50, 20, debugTargetPosColor);
	DrawDebugLine(GetWorld(), GetOwner()->GetActorLocation(), targetPos, debugLineColor);
}

#pragma endregion

#pragma endregion
