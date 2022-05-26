#pragma once
#include "CM_CameraTPS.h"
#include "CM_InventoryComponent.h"
#include "CM_PlayerMouvement.h"
#include "ITarget.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CM_Player.generated.h"


UCLASS(BlueprintType)
class CAMMANAGER_API ACM_Player : public APawn, public IITarget
{
	GENERATED_BODY()

private:

#pragma region Event

	DECLARE_DELEGATE_OneParam(InventoryDelegate, int32);

#pragma endregion

#pragma region Fields

	UPROPERTY(EditAnywhere, Category = "Player Component")	UCM_PlayerMouvement*			playerMouvement;
	UPROPERTY(EditAnywhere, Category = "Player Component")	TSubclassOf<UActorComponent>	playerMouvementClass;
	UPROPERTY(EditAnywhere, Category = "Player Component")	UCM_TargetStatsComponent*		playerStats;
	UPROPERTY(EditAnywhere, Category = "Player Component")	TSubclassOf<UActorComponent>	playerTargetStatsClass;
	UPROPERTY(EditAnywhere, Category = "Player Component")	UCM_InventoryComponent*			playerInventory;
	UPROPERTY(EditAnywhere, Category = "Player Component")	TSubclassOf<UActorComponent>	playerInventoryClass;

	UPROPERTY(EditAnywhere, Category = "Player Camera") ACM_CameraTPS* playerCamera;
	UPROPERTY(EditAnywhere, Category = "Player Camera") TSubclassOf<ACM_CameraTPS> cameraType;
	UPROPERTY(EditAnywhere, Category = "Player Camera") bool isUseCustomSettings;
	UPROPERTY(EditAnywhere, Category = "Player Camera") FCamSettings settings;

#pragma endregion

#pragma region Private_Methods

	void Init();
	void InitCamera();
	virtual void InitComponent();
	virtual void RegisterPlayerInput(UInputComponent* _playerInputComponent);

	void ChangeMoveDirection();

#pragma endregion

protected:

#pragma region UE_Methods

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma endregion

public:	

#pragma region Constructor

	ACM_Player();

#pragma endregion

#pragma region Getter/Setter

	//----GETTER----//
	FORCEINLINE UCM_PlayerMouvement* GetPlayerMouvement() { return playerMouvement; }
	FORCEINLINE UCM_TargetStatsComponent* GetPlayerStats() { return playerStats; }
	FORCEINLINE UCM_InventoryComponent* GetPlayerInventory() { return playerInventory; }
	FORCEINLINE bool IsValid() { return playerMouvement && playerStats && playerInventory; }

#pragma endregion

#pragma region Interfaces

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void InitTargetStatsComponent();
	virtual void InitTargetStatsComponent_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent) UCM_TargetStatsComponent* GetTargetStats();
	virtual UCM_TargetStatsComponent* GetTargetStats_Implementation() override;

#pragma endregion

#pragma region Public_Methods

	void UseItem(int _itemID);

#pragma endregion

};
