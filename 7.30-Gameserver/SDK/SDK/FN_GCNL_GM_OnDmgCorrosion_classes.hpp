#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x428 - 0x428)
// BlueprintGeneratedClass GCNL_GM_OnDmgCorrosion.GCNL_GM_OnDmgCorrosion_C
class AGCNL_GM_OnDmgCorrosion_C : public AFortGameplayCueNotify_Looping
{
public:

	static class UClass* StaticClass();
	static class AGCNL_GM_OnDmgCorrosion_C* GetDefaultObj();

	void OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float CallFunc_FClamp_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array);
	void UserConstructionScript();
};

}


