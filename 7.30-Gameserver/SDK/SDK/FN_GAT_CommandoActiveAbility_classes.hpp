#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0xA32 - 0x971)
// BlueprintGeneratedClass GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
class UGAT_CommandoActiveAbility_C : public UGAT_ActiveAbility_Hero_C
{
public:
	uint8                                        Pad_3F3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x978(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                    Event_Data;                                        // 0x980(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                             CommandoPlayerPawn;                                // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAutoCommitted;                                   // 0xA30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStaminaLockedOut;                                // 0xA31(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGAT_CommandoActiveAbility_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_CommandoActiveAbility(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
};

}


