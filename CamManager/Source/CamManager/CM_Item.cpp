#include "CM_Item.h"
#include "CM_Player.h"


ACM_Item::ACM_Item()
{
	PrimaryActorTick.bCanEverTick = true;

	box = CreateDefaultSubobject<UBoxComponent>(TEXT("Item Box"));
	box->OnComponentBeginOverlap.AddDynamic(this, &ACM_Item::OnBoxBeginOverlap);
}


void ACM_Item::BeginPlay()
{
	Super::BeginPlay();
	
}


void ACM_Item::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




UFUNCTION() void ACM_Item::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACM_Player* _player = Cast<ACM_Player>(OtherActor);
	if (!_player) return;
	_player->GetPlayerInventory()->TakeOBJ(this);
}
