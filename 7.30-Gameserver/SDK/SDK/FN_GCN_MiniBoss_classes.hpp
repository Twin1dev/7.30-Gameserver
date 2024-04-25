#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x588 - 0x428)
// BlueprintGeneratedClass GCN_MiniBoss.GCN_MiniBoss_C
class AGCN_MiniBoss_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortMiniMapComponent*                 MiniMapCrosshair;                                  // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_NPCCharacterTypeMiniBoss1P;                     // 0x438(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_NPCCharacterTypeMiniBoss4P;                     // 0x458(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          FourP_Color;                                       // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OneP_Color;                                        // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>       VectorParameters;                                  // 0x498(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class FName, float>                     ScalarParameters;                                  // 0x4E8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class FString, class UParticleSystem*>  ElementalParticlesMap;                             // 0x538(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGCN_MiniBoss_C* GetDefaultObj();

	void SetMiniBossVisibility(bool Visible);
	void OverwriteElementalParticles(class AEnemyPawn_Parent_C* Enemy_Pawn_Parent, const class FString& TagName, bool TagWasFound, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const class FString& K2Node_Select_Default, class UParticleSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void SetMiniBossGCNColors();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCN_MiniBoss(int32 EntryPoint);
};

}


