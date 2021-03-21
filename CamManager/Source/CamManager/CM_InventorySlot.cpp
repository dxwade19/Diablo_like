#include "CM_InventorySlot.h"
#include "CM_Player.h"



#pragma region InitOBJ

void UCM_InventorySlot::InitObj(ACM_Item* _toInit)
{
	ACM_Potion* _consumable = Cast<ACM_Potion>(_toInit);
	if (!_consumable) return;
	isConsumable = true;
	consomableInfo = _consumable->GetConsomableInfo();
}

#pragma endregion


#pragma region Add/Remove

void UCM_InventorySlot::AddObj(ACM_Item* _toAdd)
{
	if (!_toAdd) return;
	allObjectsInside.Add(_toAdd);
	InitObj(_toAdd);

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, FString::Printf(TEXT("Item with ID %d register : number of this item in inventory : %d"), _toAdd->GetItemID(), allObjectsInside.Num()));
}

void UCM_InventorySlot::RemoveObj()
{
	if (!allObjectsInside.IsValidIndex(allObjectsInside.Num() - 1)) return;

	ACM_Item* _item = allObjectsInside[allObjectsInside.Num() - 1];

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, FString::Printf(TEXT("Item with ID %d register : number of this item in inventory : %d"), _item->GetItemID(), allObjectsInside.Num() - 1));
	allObjectsInside.RemoveAt(allObjectsInside.Num() - 1);
}

#pragma endregion

#pragma region UseItem

void UCM_InventorySlot::MakeItemAction(AActor* _owner)
{
	if (!isConsumable) return;
	ACM_Player* _player = Cast<ACM_Player>(_owner);
	if (!_player || consomableInfo.GetNumberOfUse() <= 0) return;

	_player->GetPlayerStats()->UseConsomable(consomableInfo);
	RemoveObj();
}

#pragma endregion

