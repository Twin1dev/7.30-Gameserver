#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A8 - 0x1A0)
// BlueprintGeneratedClass GCN_RiftSpawnFiend.GCN_RiftSpawnFiend_C
class UGCN_RiftSpawnFiend_C : public UFortGameplayCueNotify_Burst
{
public:
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGCN_RiftSpawnFiend_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UParticleSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class ABP_DeimosRift_C* K2Node_DynamicCast_AsBP_Deimos_Rift, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3);
};

}


