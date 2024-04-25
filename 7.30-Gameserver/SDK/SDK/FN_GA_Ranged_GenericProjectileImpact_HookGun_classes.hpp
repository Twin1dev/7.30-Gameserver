#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F (0x9C8 - 0x979)
// BlueprintGeneratedClass GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C
class UGA_Ranged_GenericProjectileImpact_HookGun_C : public UGA_Ranged_GenericDamage_C
{
public:
	uint8                                        Pad_651D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 ChangeEquipmentTag;                                // 0x980(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          RopeActiveTag;                                     // 0x9A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              QuestItem;                                         // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ObjBackendName;                                    // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ObjStat;                                           // 0x9B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_Ranged_GenericProjectileImpact_HookGun_C* GetDefaultObj();

	void Overflow(class UFortWorldItem* Item_Dropped);
	void K2_OnEndAbility(bool bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess);
	void K2_CommitExecute(class AGameStateBase* CallFunc_GetGameState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetAthenaPlaylistContextTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, const class FString& CallFunc_GetDisplayName_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsValid_ReturnValue1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess3);
};

}


