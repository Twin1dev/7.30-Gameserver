#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x6AC - 0x6A0)
// BlueprintGeneratedClass MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C
class AMinigameMode_BuildTheStructure_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        AmmountOfWood;                                     // 0x6A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMinigameMode_BuildTheStructure_C* GetDefaultObj();

	void GiveWood(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AController*>& CallFunc_GetAllPlayersInVolume_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue);
	void UserConstructionScript();
	void HandleMinigameWarmup();
	void HandleMinigameEnded();
	void ExecuteUbergraph_MinigameMode_BuildTheStructure(int32 EntryPoint, TArray<class AFortPlayerState*>& CallFunc_GetParticipatingPlayers_OutPlayers, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerState* CallFunc_Array_Get_Item, float CallFunc_GetRuntime_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, float CallFunc_GetTotalMilliseconds_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


