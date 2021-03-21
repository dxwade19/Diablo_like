#include "CM_Player.h"
#include "Kismet/GameplayStatics.h"
#include "CamManagerGameModeBase.h"



#pragma region Constructor

ACM_Player::ACM_Player()
{
	PrimaryActorTick.bCanEverTick = true;
}

#pragma endregion

#pragma region UE_Methods

void ACM_Player::BeginPlay()
{
	Super::BeginPlay();
	InitCamera();
	InitComponent();
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = true;
}

void ACM_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTarget(playerCamera);	//TODO Change Place
}

void ACM_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	RegisterPlayerInput(PlayerInputComponent);
}

#pragma endregion

#pragma region Custom_Methods


#pragma region Init/Register Input

void ACM_Player::InitCamera()
{
	playerCamera = (ACM_CameraTPS*)GetWorld()->SpawnActor(cameraType);
	if (isUseCustomSettings)
	{
		playerCamera->SetCamSettings(settings);
		playerCamera->SetCamTPSTarget(this);
	}
}

void ACM_Player::InitComponent()
{
	playerMouvement = (UCM_PlayerMouvement*)GetComponentByClass(playerMouvementClass);
	InitTargetStatsComponent_Implementation();
	playerInventory = (UCM_InventoryComponent*)GetComponentByClass(playerInventoryClass);
}

void ACM_Player::RegisterPlayerInput(UInputComponent* _playerInputComponent)
{
	_playerInputComponent->BindAction("ChangeMovePos", IE_Pressed, this, &ACM_Player::ChangeMoveDirection);
	_playerInputComponent->BindAction<InventoryDelegate, ACM_Player>("UsePotionFirstSlot", IE_Pressed, this, &ACM_Player::UseItem, 0);
	_playerInputComponent->BindAction<InventoryDelegate, ACM_Player>("UsePotionSecondSlot", IE_Pressed, this, &ACM_Player::UseItem, 1);
}

#pragma endregion


#pragma region ChangeDirection

void ACM_Player::ChangeMoveDirection()
{
	if (!IsValid()) return;

	FHitResult _hitResult;
	if (UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHitResultUnderCursor(ECollisionChannel::ECC_WorldStatic, false, _hitResult))
		playerMouvement->SetTargetPos(_hitResult.Location);
}

#pragma endregion

#pragma endregion

void ACM_Player::UseItem(int _itemID)
{
	playerInventory->MakeItemAction(_itemID);
}

#pragma region ITarget

UCM_TargetStatsComponent* ACM_Player::GetTargetStats_Implementation()
{
	return playerStats;
}

void ACM_Player::InitTargetStatsComponent_Implementation()
{
	if (!playerStats)
		playerStats = (UCM_TargetStatsComponent*)GetComponentByClass(playerTargetStatsClass);
}

#pragma endregion
