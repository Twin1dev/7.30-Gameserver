#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x9C - 0x80)
// BlueprintGeneratedClass GCN_Outlander_GroundWave_Explosion.GCN_Outlander_GroundWave_Explosion_C
class UGCN_Outlander_GroundWave_Explosion_C : public UFortGameplayCueNotify_Simple
{
public:
	class UParticleSystem*                       FXExplosion;                                       // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundExplosion;                                    // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXScale;                                           // 0x90(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGCN_Outlander_GroundWave_Explosion_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, float Temp_float_Variable, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_OnExecute_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, float Temp_float_Variable1, float Temp_float_Variable2, int32 Temp_int_Variable, const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable1, const struct FVector& Temp_struct_Variable2, const struct FVector& Temp_struct_Variable3, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, float Temp_float_Variable3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, int32 Temp_int_Variable1, const struct FVector& CallFunc_RandomUnitVector_ReturnValue1, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue1, const struct FVector& K2Node_Select_Default, int32 Temp_int_Variable2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, float K2Node_Select1_Default, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


