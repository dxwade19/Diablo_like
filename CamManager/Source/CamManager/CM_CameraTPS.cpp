#include "CM_CameraTPS.h"
#include <Kismet/KismetMathLibrary.h>


#pragma region Move / LookAt

void ACM_CameraTPS::Move()
{
	SetActorLocation(FMath::Lerp(GetActorLocation(), settings.GetFinalCamLocation(), settings.GetPositionMoveSpeed()));
}

void ACM_CameraTPS::LookAt()
{
	FRotator _finalRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), settings.GetLookAtTarget()->GetActorLocation());
	SetActorRotation(FMath::Lerp(GetActorRotation(), _finalRotation, settings.GetLookAtSpeed()), ETeleportType::TeleportPhysics);
}

#pragma endregion

#pragma region Setter

void ACM_CameraTPS::SetCamTPSTarget(AActor* _newTarget)
{
	SetCamFollowTarget(_newTarget);
	SetCamLookTarget(_newTarget);
}

#pragma endregion
