#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1A0 - 0x1A0)
// BlueprintGeneratedClass GCN_DanceOff_Point.GCN_DanceOff_Point_C
class UGCN_DanceOff_Point_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass();
	static class UGCN_DanceOff_Point_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, const struct FLinearColor& Temp_struct_Variable, class UParticleSystemComponent* CallFunc_Array_Get_Item, const struct FLinearColor& Temp_struct_Variable1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue);
};

}


