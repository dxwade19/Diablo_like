#include "CamSettings.h"


FVector FCamSettings::GetFinalCamLocation()
{
    if (!isWorldOffset)
        return target->GetActorLocation() + FVector(target->GetActorRightVector() * xPosOffset) + (target->GetActorUpVector() * yPosOffset) + (target->GetActorForwardVector() * zPosOffset);
    else return target->GetActorLocation() + FVector(xPosOffset, yPosOffset, zPosOffset);
}
