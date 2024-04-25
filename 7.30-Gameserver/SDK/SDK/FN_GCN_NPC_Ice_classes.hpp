#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x4F8 - 0x428)
// BlueprintGeneratedClass GCN_NPC_Ice.GCN_NPC_Ice_C
class AGCN_NPC_Ice_C : public AFortGameplayCueNotify_Looping
{
public:
	float                                        TransitionOutLength;                               // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FLinearColor>       VectorParameters;                                  // 0x430(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class FString, class UMaterialInterface*> Elemental_Mat_Map;                                 // 0x480(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                       Ice_Particle_Husk;                                 // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Ice_Particle_Player;                               // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Flinger_Ice_Modifier;                              // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Mesh;                                              // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCN_NPC_Ice_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortPawn_Taker* K2Node_DynamicCast_AsFort_Pawn_Taker, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AFortPawn_Flinger* K2Node_DynamicCast_AsFort_Pawn_Flinger, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetGameTimeInSeconds_ReturnValue1, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class AFortPawn_Taker* K2Node_DynamicCast_AsFort_Pawn_Taker, bool K2Node_DynamicCast_bSuccess1, class AFortPawn_Flinger* K2Node_DynamicCast_AsFort_Pawn_Flinger, bool K2Node_DynamicCast_bSuccess2, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& Temp_string_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const class FString& Temp_string_Variable1, const class FString& K2Node_Select_Default, class UMaterialInterface* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript();
};

}


