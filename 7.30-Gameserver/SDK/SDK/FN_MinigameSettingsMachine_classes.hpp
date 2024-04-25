#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xCD0 - 0xC90)
// BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C
class AMinigameSettingsMachine_C : public AFortMinigameSettingsBuilding
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xC98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Outpost_Console;                                   // 0xCA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        GameModeIndex;                                     // 0xCA8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedGameModeIndex;                               // 0xCAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeLimit;                                         // 0xCB0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMinigamePlayerSpawnLocationSetting SpawnLocationSetting;                              // 0xCB4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumTeams;                                          // 0xCB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMinigamePostGameSpawnLocationSetting PostGameSpawnLocationSetting;                      // 0xCBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayerLives;                                       // 0xCC0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AutoEndTeamThreshold;                              // 0xCC4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TeamToMoveToWhenOutOfSpawns;                       // 0xCC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumKillsForEndCondition;                           // 0xCCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMinigameSettingsMachine_C* GetDefaultObj();

	void UpdateEndConditions(const TArray<struct FFortMinigameStatQuery>& EndConditions, class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdateTeamToMoveToWhenOutOfSpawns(class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_Subtract_ByteByte_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void UpdateAutoEndTeamThreshold(class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdatePlayerLives(class AFortMinigame* NewLocalVar_0, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdatePostGameSpawnLocationSetting(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	class FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn);
	void UpdateTeamSetting(bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, class AMinigame_PlayerCreated_C* K2Node_DynamicCast_AsMinigame_Player_Created, bool K2Node_DynamicCast_bSuccess);
	void UpdateSpawnLocationSetting(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void GetCurrentMinigame(class AFortMinigame** Minigame, class UFortMinigameVolumeComponent* LinkedVolumeComp, class AFortVolume* LinkedVolume, class AFortMinigame* CurrentMinigame, bool CallFunc_IsValid_ReturnValue, class UFortMinigameVolumeComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AFortVolume* CallFunc_GetLinkedVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue2);
	void UpdateTimeLimit(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdateGameMode(class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void HasMinigameStarted(bool* bHasStarted, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasStarted_ReturnValue);
	void IsValidGame(bool* bCanStartGame, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void GetPickupSpawnLocation(struct FVector* SpawnLocation, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1);
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn, bool CallFunc_OnLocalInteract_bResult, class UFortMatchmakingKnobsModal* CallFunc_OnLocalInteract_ModalWidget, class UCreativeMinigameGameKnobsModal_C* K2Node_DynamicCast_AsCreative_Minigame_Game_Knobs_Modal, bool K2Node_DynamicCast_bSuccess);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, bool CanInteract, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue1, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue);
	void UserConstructionScript();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void ReceiveBeginPlay();
	void OnGameSettingsUpdated();
	void StartMinigameHelper();
	void AbandonMinigameHelper();
	void SetGameModeToDeathmatch();
	void ExecuteUbergraph_MinigameSettingsMachine(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue1, class AFortPlayerController* CallFunc_Array_Get_Item, class AFortPlayerController* CallFunc_Array_Get_Item1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena1, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


