#include "CM_PlayerMouvement.h"
#include "GameFramework/FloatingPawnMovement.h"
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

#pragma region Getter/Setter

bool UCM_PlayerMouvement::IsTargetReached()
{
	if (FVector::Distance(m_TargetPos, GetOwner()->GetActorLocation()) < m_MinDistanceWithTarget)
		return true;

	return false;
}

#pragma endregion

#pragma region UE_Methods

void UCM_PlayerMouvement::BeginPlay()
{
	Super::BeginPlay();
	Init();
}

void UCM_PlayerMouvement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Update(DeltaTime);
}

#pragma endregion

#pragma region Custom_Methods

#pragma region Init/Update

void UCM_PlayerMouvement::Init()
{
	m_Owner = GetOwner();
	m_World = GetWorld();

	if (!m_Owner) return;

	targetPos = m_Owner->GetActorLocation();
	m_FloatingPawnComponent = m_Owner->FindComponentByClass<UFloatingPawnMovement>();
}

void UCM_PlayerMouvement::Update(const float _deltaTime)
{
	if (!IsTargetReached())
	{
		Move(_deltaTime);
		Rotate(_deltaTime);
	}

	DrawDebug();
}

#pragma endregion

#pragma region Move/Rotate

void UCM_PlayerMouvement::Move(float _deltaTime)
{
	if (!m_Owner || !m_FloatingPawnComponent) return;

	UAIBlueprintHelperLibrary::SimpleMoveToLocation(UGameplayStatics::GetPlayerController(m_World, 0), m_TargetPos);
}

void UCM_PlayerMouvement::Rotate(float _deltaTime)
{
	if (!m_Owner || !m_FloatingPawnComponent) return;

	FRotator _finalRotation = UKismetMathLibrary::FindLookAtRotation(m_Owner->GetActorLocation(), m_Owner->GetActorLocation() + m_FloatingPawnComponent->Velocity);
	m_Owner->SetActorRotation(FMath::Lerp(m_Owner->GetActorRotation(), _finalRotation, m_RotateSpeed * _deltaTime));
}

#pragma endregion

#pragma region DrawGizmos

void UCM_PlayerMouvement::DrawDebug()
{
	if (!m_IsUseDebug || !m_World || !m_Owner) return;

	DrawDebugSphere(m_World, m_TargetPos, 50, 20, m_DebugTargetPosColor);
	DrawDebugLine(m_World, m_Owner->GetActorLocation(), m_TargetPos, m_DebugLineColor);
}

#pragma endregion

#pragma endregion
