#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x878 - 0x830)
// BlueprintGeneratedClass B_Prj_Arrow_DemonHunter_Crossbow_Athena.B_Prj_Arrow_DemonHunter_Crossbow_Athena_C
class AB_Prj_Arrow_DemonHunter_Crossbow_Athena_C : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x830(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBulletWhipTrackerComponent_Crossbow_C* BulletWhipTrackerComponent_Crossbow;               // 0x838(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Crossbow_Projectile;                             // 0x840(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       HitDeimosEffect;                                   // 0x848(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       HitPlayerEffect;                                   // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewVar_0;                                          // 0x858(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            BoltStuck;                                         // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BoltBreak;                                         // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Bolt_Surface_Impact;                               // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Prj_Arrow_DemonHunter_Crossbow_Athena_C* GetDefaultObj();

	void UserConstructionScript();
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap);
	void ExecuteUbergraph_B_Prj_Arrow_DemonHunter_Crossbow_Athena(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 Temp_int_Variable6, int32 Temp_int_Variable7, int32 Temp_int_Variable8, int32 Temp_int_Variable9, int32 Temp_int_Variable10, int32 Temp_int_Variable11, int32 Temp_int_Variable12, int32 Temp_int_Variable13, int32 Temp_int_Variable14, int32 Temp_int_Variable15, int32 Temp_int_Variable16, int32 Temp_int_Variable17, int32 Temp_int_Variable18, int32 Temp_int_Variable19, int32 Temp_int_Variable20, int32 Temp_int_Variable21, int32 Temp_int_Variable22, int32 Temp_int_Variable23, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_bIsOverlap, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ADeimos_Fiend_C* K2Node_DynamicCast_AsDeimos_Fiend, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, int32 Temp_int_Variable24, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_FindClosestBone_K2_BoneLocation, class FName CallFunc_FindClosestBone_K2_ReturnValue, enum class EPhysicalSurface Temp_byte_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName Temp_name_Variable, int32 K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue1, class FName CallFunc_Temp_FindClosestBone_ClosestBone, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class FName K2Node_Select1_Default, bool Temp_bool_Variable1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult1, class USoundBase* K2Node_Select2_Default);
};

}


