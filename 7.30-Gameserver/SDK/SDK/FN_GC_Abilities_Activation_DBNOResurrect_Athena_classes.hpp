#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1A0 - 0x1A0)
// BlueprintGeneratedClass GC_Abilities_Activation_DBNOResurrect_Athena.GC_Abilities_Activation_DBNOResurrect_Athena_C
class UGC_Abilities_Activation_DBNOResurrect_Athena_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass();
	static class UGC_Abilities_Activation_DBNOResurrect_Athena_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UParticleSystemComponent* CallFunc_Array_Get_Item, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult);
};

}


