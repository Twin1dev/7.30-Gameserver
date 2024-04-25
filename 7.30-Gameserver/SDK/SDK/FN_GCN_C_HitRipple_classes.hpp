#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1A0 - 0x1A0)
// BlueprintGeneratedClass GCN_C_HitRipple.GCN_C_HitRipple_C
class UGCN_C_HitRipple_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass();
	static class UGCN_C_HitRipple_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, float RawMagnitude, class UAudioComponent* CallFunc_Array_Get_Item, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue1, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue1, bool CallFunc_InRange_FloatFloat_ReturnValue2, class UParticleSystemComponent* CallFunc_Array_Get_Item1, int32 CallFunc_Conv_BoolToInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue);
};

}


