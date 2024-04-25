#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0xE08 - 0xDF5)
// BlueprintGeneratedClass B_DualPistol_Athena.B_DualPistol_Athena_C
class AB_DualPistol_Athena_C : public AB_Ranged_Dual_Generic_Athena_C
{
public:
	uint8                                        Pad_4E0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundCue*                             FireSoundOverride;                                 // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_DualPistol_Athena_C* GetDefaultObj();

	void UserConstructionScript();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ExecuteUbergraph_B_DualPistol_Athena(int32 EntryPoint, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire);
};

}


