#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x6E8 - 0x6BC)
// BlueprintGeneratedClass MinigameMode_IronClad.MinigameMode_IronClad_C
class AMinigameMode_IronClad_C : public AMinigameMode_Skirmish_C
{
public:
	uint8                                        Pad_4AEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UFortWorldItemDefinition*>      Pirate_Ship_Weapons;                               // 0x6C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortWorldItemDefinition*>      Pirate_Ship_Ammo;                                  // 0x6D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AMinigameMode_IronClad_C* GetDefaultObj();

	void UserConstructionScript();
	void GiveStartingWeapon();
	void ExecuteUbergraph_MinigameMode_IronClad(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, class UFortWorldItemDefinition* CallFunc_Array_Get_Item, class UFortWorldItemDefinition* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AController*>& CallFunc_GetAllPlayersInVolume_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, class AController* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EquipBestWeapon_ReturnValue);
};

}


