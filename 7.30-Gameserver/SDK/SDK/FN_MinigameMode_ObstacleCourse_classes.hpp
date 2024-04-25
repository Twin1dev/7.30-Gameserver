#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x6B0 - 0x6A0)
// BlueprintGeneratedClass MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C
class AMinigameMode_ObstacleCourse_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        AmmountOfWood;                                     // 0x6A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FinishedPlayers;                                   // 0x6AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMinigameMode_ObstacleCourse_C* GetDefaultObj();

	struct FGameplayTagQuery GetStartQueryForPlayer(class APlayerState* Player);
	void Has_Player_Completed_Objective(class AFortPlayerState* Player, bool* Complete, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, int32 CallFunc_GetStatForPlayer_ReturnValue, TArray<class UFortMinigameLogicComponent*>& CallFunc_GetMinigameComponentsByTagQuery_OutComponents, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void GiveWood(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AController*>& CallFunc_GetAllPlayersInVolume_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue);
	void SetPlayerPositionToStart(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, TArray<class AController*>& CallFunc_GetAllPlayersInVolume_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_ChoosePlayerStart_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue);
	void UserConstructionScript();
	void HandleMinigameWarmup();
	void On_Stat_Changed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MinigameMode_ObstacleCourse(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class AFortPlayerState*>& CallFunc_GetParticipatingPlayers_OutPlayers, class AFortPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Has_Player_Completed_Objective_Complete, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Min_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


