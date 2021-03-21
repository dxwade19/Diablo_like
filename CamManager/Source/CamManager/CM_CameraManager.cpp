#include "CM_CameraManager.h"


#pragma region Constructor

ACM_CameraManager::ACM_CameraManager()
{
	PrimaryActorTick.bCanEverTick = true;
	USceneComponent* _root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = _root;
}

#pragma endregion


#pragma region UE_Methods

void ACM_CameraManager::BeginPlay()
{
	Super::BeginPlay();
}

void ACM_CameraManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, FString::Printf(TEXT("Camera Manager Update")));
	camManagerEvent.Broadcast();
}

#pragma endregion

#pragma region Custom_Methods

#pragma region Add/Remove

void ACM_CameraManager::AddItem(ACM_Camera* _itemToAdd)
{
	if (IsExist(_itemToAdd->GetCamID())) return;
	handler.Add(_itemToAdd->GetCamID(), _itemToAdd);

	camManagerEvent.AddLambda([_itemToAdd]()
	{
		_itemToAdd->Move();
		_itemToAdd->LookAt();

		if (_itemToAdd->GetUseDebug()) _itemToAdd->DrawDebug();
	});
}


void ACM_CameraManager::RemoveItem(ACM_Camera* _itemToRemove)
{
	if (!IsExist(_itemToRemove->GetCamID())) return;
	handler.Remove(_itemToRemove->GetCamID());
}

void ACM_CameraManager::RemoveItem(int _itemID)
{
	if (!IsExist(_itemID)) return;
	handler.Remove(_itemID);
}

#pragma endregion


#pragma region Get

ACM_Camera* ACM_CameraManager::Get(int _itemID)
{
	if (handler[_itemID] == nullptr) return NULL;
	return handler[_itemID];
}

#pragma endregion


#pragma endregion
