#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x6C0 - 0x6A0)
// BlueprintGeneratedClass Minigame_PlayerCreated.Minigame_PlayerCreated_C
class AMinigame_PlayerCreated_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Music_Loop;                                        // 0x6A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        NumTeams;                                          // 0x6B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTeams;                                          // 0x6B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatablePanel*               ScoreboardPanel;                                   // 0x6B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMinigame_PlayerCreated_C* GetDefaultObj();

	void IsVolumeEventRelevant(class APlayerState* PlayerState, class AFortVolume* EventVolume, bool* bResult, bool bIsRelevant, class AFortMinigame* CallFunc_GetMinigameForVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void UnbindVolumeDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess);
	void BindVolumeDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess);
	void ShouldShowScoreboard(class APlayerController* PlayerController, bool* bResult, bool bShouldShow, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsPlayerInMinigame_ReturnValue);
	void AssignTeams(const TArray<int32>& TeamSizes, int32 CurrentTeam, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Array_Index_Variable2, TArray<class AFortPlayerState*>& CallFunc_GetParticipatingPlayers_OutPlayers, class AFortPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_Subtract_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Array_Get_Item1, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, int32 Temp_int_Variable2, bool CallFunc_BooleanAND_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue5, TArray<class AFortPlayerState*>& CallFunc_GetParticipatingPlayers_OutPlayers1, int32 CallFunc_Array_Length_ReturnValue2, class AFortPlayerState* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue2);
	void SetMusicActive(bool bShouldPlayMusic, class APlayerState* PlayerState, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, enum class EFortMinigameExec CallFunc_K2_HasStarted_OutExec, bool K2Node_SwitchEnum_CmpSuccess);
	void UserConstructionScript();
	void OnComplete_D9496DB6400ADA561B9C749CD6D8B5BC(class UUserWidget* UserWidget);
	void PlayerTeleportedFX(class AFortPlayerPawnAthena* PlayerPawn, bool bToSky);
	void OnPlayerAdded(class APlayerState* PlayerState);
	void OnPlayerRemoved(class APlayerState* PlayerState);
	void HandleMinigameWarmup();
	void HandleMinigameStarted();
	void HandleMinigameEnded();
	void OnPlayerTeleportedForMinigameStart(class APlayerState* PlayerState, bool bTeleportedToSky);
	void ShowScoreboardPanel();
	void HideScoreboardPanel();
	void HandleStateChanged(enum class EFortMinigameState MinigameState);
	void ReceiveBeginPlay();
	void OnClientEnterVolume(class APlayerState* PlayerState, class AFortVolume* Volume);
	void OnClientExitVolume(class APlayerState* PlayerState, class AFortVolume* Volume);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_Minigame_PlayerCreated(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsDedicatedServer_ReturnValue3, class AFortPlayerPawnAthena* K2Node_CustomEvent_PlayerPawn, bool K2Node_CustomEvent_bToSky, class APlayerState* K2Node_CustomEvent_PlayerState3, class APlayerState* K2Node_CustomEvent_PlayerState2, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue4, class APlayerState* K2Node_Event_PlayerState, bool K2Node_Event_bTeleportedToSky, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue1, int32 Temp_int_Array_Index_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortPlayerController* CallFunc_Array_Get_Item1, bool CallFunc_IsDedicatedServer_ReturnValue5, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsActivated_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, enum class EFortMinigameState K2Node_CustomEvent_MinigameState, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UUserWidget* Temp_object_Variable, class UCommonActivatablePanel* K2Node_DynamicCast_AsCommon_Activatable_Panel, bool K2Node_DynamicCast_bSuccess1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_ShouldShowScoreboard_bResult, bool CallFunc_HasAuthority_ReturnValue1, class APlayerState* K2Node_CustomEvent_PlayerState1, class AFortVolume* K2Node_CustomEvent_Volume1, class APlayerState* K2Node_CustomEvent_PlayerState, class AFortVolume* K2Node_CustomEvent_Volume, bool CallFunc_IsVolumeEventRelevant_bResult, bool CallFunc_IsVolumeEventRelevant_bResult1, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


