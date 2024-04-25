#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x430 - 0x428)
// BlueprintGeneratedClass GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C
class AGCNL_Generic_PlaysetBotTurret_C : public AFortGameplayCueNotify_Looping
{
public:
	class ATrap_Floor_Turret_Parent_C*           BotTurret;                                         // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCNL_Generic_PlaysetBotTurret_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();
};

}


