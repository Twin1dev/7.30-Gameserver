#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C
// (None)

class UClass* UAthenaItemCustomizationSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaItemCustomizationSelector_C");

	return Clss;
}


// AthenaItemCustomizationSelector_C AthenaItemCustomizationSelector.Default__AthenaItemCustomizationSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaItemCustomizationSelector_C* UAthenaItemCustomizationSelector_C::GetDefaultObj()
{
	static class UAthenaItemCustomizationSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaItemCustomizationSelector_C*>(UAthenaItemCustomizationSelector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateEditStyleButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaCosmeticItemDefinition*K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasModifiableVariants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaItemCustomizationSelector_C::UpdateEditStyleButton(class UFortItem* Item, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasModifiableVariants_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "UpdateEditStyleButton");

	Params::UAthenaItemCustomizationSelector_C_UpdateEditStyleButton_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition = K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasModifiableVariants_ReturnValue = CallFunc_HasModifiableVariants_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateToggleFavoriteVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasInputActionHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaItemCustomizationSelector_C::UpdateToggleFavoriteVisibility(class UFortItem* Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "UpdateToggleFavoriteVisibility");

	Params::UAthenaItemCustomizationSelector_C_UpdateToggleFavoriteVisibility_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasInputActionHandler_ReturnValue = CallFunc_HasInputActionHandler_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue = CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCurrentItemCosmeticDefinition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaCosmeticItemDefinition*Cosmetic_Item_Definition                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetCurrentItem_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCosmeticAccountItem*  K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCosmeticItemDefinition*K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaItemCustomizationSelector_C::GetCurrentItemCosmeticDefinition(class UAthenaCosmeticItemDefinition** Cosmetic_Item_Definition, class UFortItem* CallFunc_GetCurrentItem_ReturnValue, class UAthenaCosmeticAccountItem* K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item, bool K2Node_DynamicCast_bSuccess, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "GetCurrentItemCosmeticDefinition");

	Params::UAthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition_Params Parms{};

	Parms.CallFunc_GetCurrentItem_ReturnValue = CallFunc_GetCurrentItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item = K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition = K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

	if (Cosmetic_Item_Definition != nullptr)
		*Cosmetic_Item_Definition = Parms.Cosmetic_Item_Definition;

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ShowSavingModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable1                                              (ConstParm)
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressModalWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::ShowSavingModal(class FText Temp_text_Variable, class FText Temp_text_Variable1, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "ShowSavingModal");

	Params::UAthenaItemCustomizationSelector_C_ShowSavingModal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UAthenaItemCustomizationSelector_C::GetWidgetForFramingViewedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "GetWidgetForFramingViewedItem");

	Params::UAthenaItemCustomizationSelector_C_GetWidgetForFramingViewedItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ToggleFavorite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetCurrentItem_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaItemCustomizationSelector_C::ToggleFavorite(bool* PassThrough, class UFortItem* CallFunc_GetCurrentItem_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsFavorite_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "ToggleFavorite");

	Params::UAthenaItemCustomizationSelector_C_ToggleFavorite_Params Parms{};

	Parms.CallFunc_GetCurrentItem_ReturnValue = CallFunc_GetCurrentItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "HandleBack");

	Params::UAthenaItemCustomizationSelector_C_HandleBack_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaItemCustomizationSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature");

	Params::UAthenaItemCustomizationSelector_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature_Params Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinsihedItemSave
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaItemCustomizationSelector_C::OnFinsihedItemSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnFinsihedItemSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnSavingItemStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaItemCustomizationSelector_C::OnSavingItemStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnSavingItemStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaItemCustomizationSelector_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGameplayTag                VariantChannel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                VariantTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               IsOwned                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaItemCustomizationSelector_C::BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, bool IsOwned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature");

	Params::UAthenaItemCustomizationSelector_C_BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature_Params Parms{};

	Parms.VariantChannel = VariantChannel;
	Parms.VariantTag = VariantTag;
	Parms.IsOwned = IsOwned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnTabSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowingVariants                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaItemCustomizationSelector_C::OnTabSelectionChanged(bool bShowingVariants)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnTabSelectionChanged");

	Params::UAthenaItemCustomizationSelector_C_OnTabSelectionChanged_Params Parms{};

	Parms.bShowingVariants = bShowingVariants;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnCurrentItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::OnCurrentItemChanged(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnCurrentItemChanged");

	Params::UAthenaItemCustomizationSelector_C_OnCurrentItemChanged_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinsihedItemSetup
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CategoryDisplayName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        ItemDisplayTypeName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EAthenaCustomizationCategorySelectedCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::OnFinsihedItemSetup(class FText& CategoryDisplayName, class FText& ItemDisplayTypeName, enum class EAthenaCustomizationCategory SelectedCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnFinsihedItemSetup");

	Params::UAthenaItemCustomizationSelector_C_OnFinsihedItemSetup_Params Parms{};

	Parms.CategoryDisplayName = CategoryDisplayName;
	Parms.ItemDisplayTypeName = ItemDisplayTypeName;
	Parms.SelectedCategory = SelectedCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_1_OnUpdateSaveButtonVisuals__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaItemCustomizationSelector_C::BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_1_OnUpdateSaveButtonVisuals__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_1_OnUpdateSaveButtonVisuals__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_2_OnUpdateSaveButtonVisuals__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaItemCustomizationSelector_C::BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_2_OnUpdateSaveButtonVisuals__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_2_OnUpdateSaveButtonVisuals__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.RotationInputGiven
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaItemCustomizationSelector_C::RotationInputGiven()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "RotationInputGiven");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ZoomInputGiven
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaItemCustomizationSelector_C::ZoomInputGiven()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "ZoomInputGiven");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.FadeItemHeaderBackIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaItemCustomizationSelector_C::FadeItemHeaderBackIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "FadeItemHeaderBackIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable13                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HandleBack_Passthrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable14                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable15                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_ComponentBoundEvent_VariantChannel                        (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_ComponentBoundEvent_VariantTag                            (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsOwned                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaCosmeticItemDefinition*CallFunc_GetCurrentItemCosmeticDefinition_Cosmetic_Item_Definition(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable16                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCosmeticVariant*        CallFunc_GetVariantChannel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetVariantUnlockRequirement_ReturnValue                 (None)
// bool                               K2Node_Event_bShowingVariants                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetCurrentItem_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_SelectedItem                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable17                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_CategoryDisplayName                                 (ConstParm)
// class FText                        K2Node_Event_ItemDisplayTypeName                                 (ConstParm)
// enum class EAthenaCustomizationCategoryK2Node_Event_SelectedCategory                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UItemInfoHeaderWidget_C*     K2Node_DynamicCast_AsItem_Info_Header_Widget                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaCustomizationCategoryTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::ExecuteUbergraph_AthenaItemCustomizationSelector(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable1, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, class UObject* Temp_object_Variable4, class UObject* Temp_object_Variable5, class UObject* Temp_object_Variable6, class UObject* Temp_object_Variable7, class UObject* Temp_object_Variable8, class UObject* Temp_object_Variable9, class UObject* Temp_object_Variable10, class UObject* Temp_object_Variable11, class UObject* Temp_object_Variable12, class UObject* Temp_object_Variable13, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HandleBack_Passthrough, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class UObject* Temp_object_Variable14, class UObject* Temp_object_Variable15, const struct FGameplayTag& K2Node_ComponentBoundEvent_VariantChannel, const struct FGameplayTag& K2Node_ComponentBoundEvent_VariantTag, bool K2Node_ComponentBoundEvent_IsOwned, class UAthenaCosmeticItemDefinition* CallFunc_GetCurrentItemCosmeticDefinition_Cosmetic_Item_Definition, class UObject* Temp_object_Variable16, bool CallFunc_IsValid_ReturnValue1, class UFortCosmeticVariant* CallFunc_GetVariantChannel_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_GetVariantUnlockRequirement_ReturnValue, bool K2Node_Event_bShowingVariants, class UFortItem* CallFunc_GetCurrentItem_ReturnValue, class UFortItem* K2Node_Event_SelectedItem, bool CallFunc_IsValid_ReturnValue3, class UObject* Temp_object_Variable17, class FText K2Node_Event_CategoryDisplayName, class FText K2Node_Event_ItemDisplayTypeName, enum class EAthenaCustomizationCategory K2Node_Event_SelectedCategory, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UItemInfoHeaderWidget_C* K2Node_DynamicCast_AsItem_Info_Header_Widget, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue1, enum class EAthenaCustomizationCategory Temp_byte_Variable, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "ExecuteUbergraph_AthenaItemCustomizationSelector");

	Params::UAthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.Temp_object_Variable11 = Temp_object_Variable11;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_object_Variable13 = Temp_object_Variable13;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HandleBack_Passthrough = CallFunc_HandleBack_Passthrough;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_object_Variable14 = Temp_object_Variable14;
	Parms.Temp_object_Variable15 = Temp_object_Variable15;
	Parms.K2Node_ComponentBoundEvent_VariantChannel = K2Node_ComponentBoundEvent_VariantChannel;
	Parms.K2Node_ComponentBoundEvent_VariantTag = K2Node_ComponentBoundEvent_VariantTag;
	Parms.K2Node_ComponentBoundEvent_IsOwned = K2Node_ComponentBoundEvent_IsOwned;
	Parms.CallFunc_GetCurrentItemCosmeticDefinition_Cosmetic_Item_Definition = CallFunc_GetCurrentItemCosmeticDefinition_Cosmetic_Item_Definition;
	Parms.Temp_object_Variable16 = Temp_object_Variable16;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetVariantChannel_ReturnValue = CallFunc_GetVariantChannel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetVariantUnlockRequirement_ReturnValue = CallFunc_GetVariantUnlockRequirement_ReturnValue;
	Parms.K2Node_Event_bShowingVariants = K2Node_Event_bShowingVariants;
	Parms.CallFunc_GetCurrentItem_ReturnValue = CallFunc_GetCurrentItem_ReturnValue;
	Parms.K2Node_Event_SelectedItem = K2Node_Event_SelectedItem;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.Temp_object_Variable17 = Temp_object_Variable17;
	Parms.K2Node_Event_CategoryDisplayName = K2Node_Event_CategoryDisplayName;
	Parms.K2Node_Event_ItemDisplayTypeName = K2Node_Event_ItemDisplayTypeName;
	Parms.K2Node_Event_SelectedCategory = K2Node_Event_SelectedCategory;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_DynamicCast_AsItem_Info_Header_Widget = K2Node_DynamicCast_AsItem_Info_Header_Widget;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue1 = CallFunc_PlayAnimationForward_ReturnValue1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue1 = CallFunc_PlayAnimationReverse_ReturnValue1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue2 = CallFunc_PlayAnimationReverse_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}


