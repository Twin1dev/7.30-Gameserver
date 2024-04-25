#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x888 - 0x880)
// BlueprintGeneratedClass GCL_SurpriseParty_TrapManager.GCL_SurpriseParty_TrapManager_C
class AGCL_SurpriseParty_TrapManager_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGCL_SurpriseParty_TrapManager_C* GetDefaultObj();

	void UserConstructionScript();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCL_SurpriseParty_TrapManager(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UParticleSystemComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* CallFunc_Array_Get_Item1, class UParticleSystemComponent* CallFunc_Array_Get_Item2, class UParticleSystemComponent* CallFunc_Array_Get_Item3, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult3);
};

}


