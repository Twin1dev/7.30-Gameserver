#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9C (0xBC4 - 0xB28)
// WidgetBlueprintGeneratedClass AthenaSeasonReward.AthenaSeasonReward_C
class UAthenaSeasonReward_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0xB30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         BorderOwned;                                       // 0xB38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Check;                                             // 0xB40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ClaimedImage;                                      // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCard;                                          // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockedImage;                                       // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OwnedText;                                         // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RarityFlare;                                       // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RevealOverlay;                                     // 0xB70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SBoxOwned;                                         // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             StrongItemToRepresent;                             // 0xB80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnReveal;                                     // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ViewOnHover;                                       // 0xB90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5592[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             SecondaryItem;                                     // 0xB98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShowVariantTimer;                                  // 0xBA0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ResetVariantTimer;                                 // 0xBA8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        VariantIndex;                                      // 0xBB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WaitingForVaultToChange;                           // 0xBB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5593[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeBetweenVariants;                               // 0xBB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenVariantsRestart;                        // 0xBBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        VariantTimerIndex;                                 // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaSeasonReward_C* GetDefaultObj();

	void GetItem(class UFortItem** Result);
	void SetupQuantity(int32 Quantity, bool CallFunc_Greater_IntInt_ReturnValue);
	void ResetVariantToDefault(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetTemporaryItems(TArray<struct FFortCosmeticVariantPreviewElement>& Cosmetics, TArray<class UFortItem*>* Temporary_Items, const TArray<class UFortItem*>& TemporaryItems, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFortCosmeticVariantPreviewElement& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CancelVariantTimer();
	void StartVariantTimer(float OverrideTimer, float TimerToUse, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1);
	void GetAthenaItemCharacterItemDefinition(class UAthenaCharacterItemDefinition** AsAthena_Character_Item_Definition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void OnVaultItemsChanged(TArray<class UFortItem*>& Items, float TimeToPreview, class UFortItem* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ShowNextVariant(const TArray<struct FFortCosmeticVariantPreviewElement>& Temp, int32 VariantPreviewLength, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UFortItem*>& CallFunc_GetTemporaryItems_Temporary_Items, bool CallFunc_NotEqual_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, int32 Temp_int_Variable1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue4, class UAthenaCharacterItemDefinition* CallFunc_GetAthenaItemCharacterItemDefinition_AsAthena_Character_Item_Definition, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FMcpVariantChannelInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FUnlockableVariantPreviewInfo& K2Node_MakeStruct_UnlockableVariantPreviewInfo, bool CallFunc_IsValid_ReturnValue1, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue1);
	void StopCyclingVariants(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void BeginCyclingVariants(TArray<class UFortItem*>& K2Node_MakeArray_Array, const struct FUnlockableVariantPreviewInfo& K2Node_MakeStruct_UnlockableVariantPreviewInfo, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UAthenaCharacterItemDefinition* CallFunc_GetAthenaItemCharacterItemDefinition_AsAthena_Character_Item_Definition, bool CallFunc_IsValid_ReturnValue, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUnlockableVariantPreviewInfo& K2Node_MakeStruct_UnlockableVariantPreviewInfo1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2);
	void ViewInVaultByUser();
	void ViewInVault(TArray<class UFortItem*>& Additional_Items, const TArray<class UFortItem*>& Mutable_Additional_Items, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void SetSecondaryItem(class UFortItem* SecondaryItem);
	void EnableRarityFlare();
	void SetViewOnHover(bool ShouldViewOnHover);
	void SetState(bool Claimed, bool Locked, bool LevelAchieved, bool bOwned, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, float K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select3_Default);
	void Setup(class UFortItem* InItemToRepresent, bool Claimed, bool Locked, bool LevelAchieved, bool bOwned, enum class EFortItemCardSize ItemCardSize, int32 Quantity, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void BP_OnHovered();
	void PlayIntro();
	void ViewItem();
	void BP_OnClicked();
	void ExecuteUbergraph_AthenaSeasonReward(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


