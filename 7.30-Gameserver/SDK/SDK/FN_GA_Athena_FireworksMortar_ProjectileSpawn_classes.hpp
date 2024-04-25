#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1AE (0xBB8 - 0xA0A)
// BlueprintGeneratedClass GA_Athena_FireworksMortar_ProjectileSpawn.GA_Athena_FireworksMortar_ProjectileSpawn_C
class UGA_Athena_FireworksMortar_ProjectileSpawn_C : public UGAT_GenericTriggeredAbility_C
{
public:
	uint8                                        Pad_3105[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AB_BGA_FireworksMortar_Holder_C*       RocketHolder;                                      // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Prj_BottleRocket;                                  // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnLocOffset;                                    // 0xA28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BottleRocketSpeed;                                 // 0xA2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BottleRocketSpeedVariance;                         // 0xA30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spread;                                            // 0xA34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnDelayVarience;                                // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnDelay;                                        // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      GECS_Explode;                                      // 0xA40(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          T_Targeting;                                       // 0xAC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MaxShots;                                          // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShotsFired;                                        // 0xACC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HighShot;                                          // 0xAD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseBalanceRows;                                    // 0xAD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3108[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_RocketSpeed;                                   // 0xAD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_RocketSpeedVariance;                           // 0xAF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_SpawnDelay;                                    // 0xB18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_SpawnDelayVariance;                            // 0xB38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_MaxShots;                                      // 0xB58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_Spread;                                        // 0xB78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_HighShot;                                      // 0xB98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_FireworksMortar_ProjectileSpawn_C* GetDefaultObj();

	void SetBalance(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue1, float CallFunc_GetValueAtLevel_ReturnValue2, float CallFunc_GetValueAtLevel_ReturnValue3, float CallFunc_GetValueAtLevel_ReturnValue4, float CallFunc_GetValueAtLevel_ReturnValue5);
	void AddVariance(float Default, float Variance, float* RandomFloat, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
	void SpawnRocket(class UForceFeedbackEffect* ForceFeedbackFar, class UForceFeedbackEffect* ForceFeedbackNear, float BottleRocketGravity, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool Temp_bool_Variable, float CallFunc_AddVariance_RandomFloat, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void FireRockets();
	void ExecuteUbergraph_GA_Athena_FireworksMortar_ProjectileSpawn(int32 EntryPoint, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_AddVariance_RandomFloat, float Temp_float_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AB_BGA_FireworksMortar_Holder_C* K2Node_DynamicCast_AsB_BGA_Fireworks_Mortar_Holder, bool K2Node_DynamicCast_bSuccess);
};

}


