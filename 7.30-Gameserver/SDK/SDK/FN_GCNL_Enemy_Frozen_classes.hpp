#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x491 - 0x428)
// BlueprintGeneratedClass GCNL_Enemy_Frozen.GCNL_Enemy_Frozen_C
class AGCNL_Enemy_Frozen_C : public AFortGameplayCueNotify_Looping
{
public:
	class UStaticMeshComponent*                  St_HuskFrozenBase_01;                              // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Ice_Particles;                                     // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              IceMeshMID;                                        // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class UMaterialInterface*> Elemental_Material_Set;                            // 0x440(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         NewVar_0;                                          // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGCNL_Enemy_Frozen_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGameTimeInSeconds_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, const class FString& Temp_string_Variable, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_RandomFloatInRange_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_Map_Contains_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_RandomFloat_ReturnValue, const class FString& Temp_string_Variable1, bool Temp_bool_Variable1, const class FString& K2Node_Select_Default, class UMaterialInterface* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UserConstructionScript();
};

}


