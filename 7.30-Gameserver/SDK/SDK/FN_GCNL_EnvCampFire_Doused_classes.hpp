#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x8B8 - 0x880)
// BlueprintGeneratedClass GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C
class AGCNL_EnvCampFire_Doused_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Fade_Doused_Smoke_Fade_50A77D974140FDA04967E2BABB987458; // 0x888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fade_Doused_Smoke__Direction_50A77D974140FDA04967E2BABB987458; // 0x88C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_505F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fade_Doused_Smoke;                                 // 0x890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_Duration;                                      // 0x898(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGCNL_EnvCampFire_Doused_C* GetDefaultObj();

	void UserConstructionScript();
	void Fade_Doused_Smoke__FinishedFunc();
	void Fade_Doused_Smoke__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_EnvCampFire_Doused(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AActor* K2Node_Event_MyTarget1, const struct FGameplayCueParameters& K2Node_Event_Parameters1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents1, class UParticleSystemComponent* CallFunc_Array_Get_Item, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}


