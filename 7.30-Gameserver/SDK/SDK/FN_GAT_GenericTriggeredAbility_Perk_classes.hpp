#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x66 (0xA70 - 0xA0A)
// BlueprintGeneratedClass GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C
class UGAT_GenericTriggeredAbility_Perk_C : public UGAT_GenericTriggeredAbility_C
{
public:
	uint8                                        Pad_5F28[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        StreakCount;                                       // 0xA18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, class UClass*>     MAP_DamageElement;                                 // 0xA20(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGAT_GenericTriggeredAbility_Perk_C* GetDefaultObj();

	void CalcStreakBreakerThreshold(float PROC_Chance__0Minus1_, int32* Streak_Breaker_Threshold, float Proc_Chance_Multiplier, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void GrantRegenItemToOwner(class AFortPlayerPawn* FortPlayerPawn, class UFortWorldItemDefinition* ItemToGive, int32 NumberToGive, bool NotifyPlayer, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_AddRegenItemToInventoryOwner_InventoryOwner_CastInput);
	void SetDamageElement(const struct FGameplayTagContainer& InstegatorTags, class UClass* DefaultEffect, class UClass** ElementEffectOut, bool* EffectWasChanged, class UClass* EffectOut, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_ClassClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void GetCorrectBalanceValue(const struct FScalableFloat& Lookup_Base, const struct FScalableFloat& Lookup_Commander, const struct FGameplayTag& Commander_Tag, float* Value, bool Temp_bool_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, const struct FScalableFloat& K2Node_Select_Default, float CallFunc_GetValueAtLevel_ReturnValue1);
	void GrantFragmentCharge(int32 Grant_Amount, class UClass* GE_HasFragmentTags, class UFortWorldItemDefinition* FragmentAmmo, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class APlayerPawn_Outlander_C* K2Node_DynamicCast_AsPlayer_Pawn_Outlander, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput);
	void CheckStreak(int32 CountPerTrigger, int32 MaxStreak, int32* StreakCount, bool* StreakMaxed, bool Passed, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}


