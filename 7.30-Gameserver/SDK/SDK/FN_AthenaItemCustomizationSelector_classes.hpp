#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA5 (0x655 - 0x5B0)
// WidgetBlueprintGeneratedClass AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C
class UAthenaItemCustomizationSelector_C : public UAthenaItemSelectorScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ItemInfoIntroOutro;                                // 0x5B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x5C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              CameraFramingWidget;                               // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLockedStyleNotification_C*      LockedNotification;                                // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             MainSafeZone;                                      // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_MainContent;                                    // 0x5E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_SaveAndExit;                                    // 0x5E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShortDescriptionText;                              // 0x5F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SlotImage;                                         // 0x5F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBox_LockerRoomMode;                            // 0x600(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 WidgetSwitcher_InteractionMethod;                  // 0x608(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 WidgetSwitcher_ItemEditor;                         // 0x610(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              UIManager;                                         // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                ProgressModal;                                     // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShowSaveProgressModalDelegate;                     // 0x628(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   FavoriteInputActionRow;                            // 0x630(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        CurrentSubslotIndexBeingPopulated;                 // 0x640(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPickingStyle;                                     // 0x644(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5526[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          FadeHeaderBackInTimer;                             // 0x648(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        HowLongToShowItemHeader;                           // 0x650(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFadingItemHeaderOut;                              // 0x654(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaItemCustomizationSelector_C* GetDefaultObj();

	void UpdateEditStyleButton(class UFortItem* Item, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasModifiableVariants_ReturnValue);
	void UpdateToggleFavoriteVisibility(class UFortItem* Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void GetCurrentItemCosmeticDefinition(class UAthenaCosmeticItemDefinition** Cosmetic_Item_Definition, class UFortItem* CallFunc_GetCurrentItem_ReturnValue, class UAthenaCosmeticAccountItem* K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item, bool K2Node_DynamicCast_bSuccess, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess1);
	void ShowSavingModal(class FText Temp_text_Variable, class FText Temp_text_Variable1, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	class UWidget* GetWidgetForFramingViewedItem();
	void ToggleFavorite(bool* PassThrough, class UFortItem* CallFunc_GetCurrentItem_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsFavorite_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnFinsihedItemSave();
	void OnSavingItemStarted();
	void OnActivated();
	void BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, bool IsOwned);
	void OnTabSelectionChanged(bool bShowingVariants);
	void OnCurrentItemChanged(class UFortItem* SelectedItem);
	void OnFinsihedItemSetup(class FText& CategoryDisplayName, class FText& ItemDisplayTypeName, enum class EAthenaCustomizationCategory SelectedCategory);
	void BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_1_OnUpdateSaveButtonVisuals__DelegateSignature();
	void BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_2_OnUpdateSaveButtonVisuals__DelegateSignature();
	void RotationInputGiven();
	void ZoomInputGiven();
	void FadeItemHeaderBackIn();
	void ExecuteUbergraph_AthenaItemCustomizationSelector(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable1, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, class UObject* Temp_object_Variable4, class UObject* Temp_object_Variable5, class UObject* Temp_object_Variable6, class UObject* Temp_object_Variable7, class UObject* Temp_object_Variable8, class UObject* Temp_object_Variable9, class UObject* Temp_object_Variable10, class UObject* Temp_object_Variable11, class UObject* Temp_object_Variable12, class UObject* Temp_object_Variable13, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HandleBack_Passthrough, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class UObject* Temp_object_Variable14, class UObject* Temp_object_Variable15, const struct FGameplayTag& K2Node_ComponentBoundEvent_VariantChannel, const struct FGameplayTag& K2Node_ComponentBoundEvent_VariantTag, bool K2Node_ComponentBoundEvent_IsOwned, class UAthenaCosmeticItemDefinition* CallFunc_GetCurrentItemCosmeticDefinition_Cosmetic_Item_Definition, class UObject* Temp_object_Variable16, bool CallFunc_IsValid_ReturnValue1, class UFortCosmeticVariant* CallFunc_GetVariantChannel_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_GetVariantUnlockRequirement_ReturnValue, bool K2Node_Event_bShowingVariants, class UFortItem* CallFunc_GetCurrentItem_ReturnValue, class UFortItem* K2Node_Event_SelectedItem, bool CallFunc_IsValid_ReturnValue3, class UObject* Temp_object_Variable17, class FText K2Node_Event_CategoryDisplayName, class FText K2Node_Event_ItemDisplayTypeName, enum class EAthenaCustomizationCategory K2Node_Event_SelectedCategory, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UItemInfoHeaderWidget_C* K2Node_DynamicCast_AsItem_Info_Header_Widget, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue1, enum class EAthenaCustomizationCategory Temp_byte_Variable, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue2);
};

}


