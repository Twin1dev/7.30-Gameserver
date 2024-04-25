#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x450 - 0x428)
// BlueprintGeneratedClass GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C
class AGCNL_Generic_BotTurret_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AB_BGA_BotTurret_Parent_C*             BotTurret;                                         // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftGunOffset;                                     // 0x438(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RightGunOffset;                                    // 0x444(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCNL_Generic_BotTurret_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AB_BGA_BotTurret_Parent_C* K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent, bool K2Node_DynamicCast_bSuccess);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();
	void BotFired(int32 Left);
	void Activated();
	void BindBotFired();
	void BindBotExplosionWarning();
	void BotExplosionWarning();
	void ExecuteUbergraph_GCNL_Generic_BotTurret(int32 EntryPoint, int32 K2Node_CustomEvent_Left, bool K2Node_SwitchInteger_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}


