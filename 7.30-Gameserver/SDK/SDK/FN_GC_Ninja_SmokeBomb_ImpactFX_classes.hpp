#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x90 - 0x80)
// BlueprintGeneratedClass GC_Ninja_SmokeBomb_ImpactFX.GC_Ninja_SmokeBomb_ImpactFX_C
class UGC_Ninja_SmokeBomb_ImpactFX_C : public UFortGameplayCueNotify_Simple
{
public:
	class UForceFeedbackEffect*                  SmokeBombForceFeedbackNear;                        // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  SmokeBombForceFeedbackFar;                         // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGC_Ninja_SmokeBomb_ImpactFX_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


