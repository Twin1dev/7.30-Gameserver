#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A8 - 0x1A0)
// BlueprintGeneratedClass GCN_RiftSpawnerChargeUp.GCN_RiftSpawnerChargeUp_C
class UGCN_RiftSpawnerChargeUp_C : public UFortGameplayCueNotify_Burst
{
public:
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGCN_RiftSpawnerChargeUp_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UAudioComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
};

}


