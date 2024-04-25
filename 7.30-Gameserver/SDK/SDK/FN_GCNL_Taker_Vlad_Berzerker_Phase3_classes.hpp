#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x480 - 0x428)
// BlueprintGeneratedClass GCNL_Taker_Vlad_Berzerker_Phase3.GCNL_Taker_Vlad_Berzerker_Phase3_C
class AGCNL_Taker_Vlad_Berzerker_Phase3_C : public AFortGameplayCueNotify_Looping
{
public:
	class UParticleSystemComponent*              BodyMistFX;                                        // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>       Berserker_Map;                                     // 0x430(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGCNL_Taker_Vlad_Berzerker_Phase3_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void UserConstructionScript();
};

}


