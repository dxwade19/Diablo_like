#include "CM_InventoryComponent.h"


#pragma region Constructor

UCM_InventoryComponent::UCM_InventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

#pragma endregion

#pragma region UE_Methods

void UCM_InventoryComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UCM_InventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

#pragma endregion



#pragma region CustomMethods


#pragma region Take/Drop

void UCM_InventoryComponent::TakeOBJ(ACM_Item* _toAdd)
{
	if (!allSlots.Contains(_toAdd->GetItemID()))
		AddSlots(_toAdd->GetItemID());

	allSlots[_toAdd->GetItemID()]->AddObj(_toAdd);
	_toAdd->Destroy();
}

void UCM_InventoryComponent::MakeItemAction(int _id)
{
	if (!allSlots.Contains(_id)) return;

	UCM_InventorySlot* _slots = allSlots[_id];
	_slots->MakeItemAction(GetOwner());

	if (_slots->GetNumberOfItemInSlots() == 0)
		allSlots.Remove(_id);
}

void UCM_InventoryComponent::DropOBJ(ACM_Item* _toDrop)
{

}

#pragma endregion


#pragma region Add/Remove Slots

void UCM_InventoryComponent::AddSlots(int _id)
{
	if (allSlots.Contains(_id)) return;
	allSlots.Add(_id, NewObject<UCM_InventorySlot>(this));
}

void UCM_InventoryComponent::RemoveSlots(int _id)
{
	if (!allSlots.Contains(_id)) return;
	allSlots.Remove(_id);
}

#pragma endregion


#pragma endregion
