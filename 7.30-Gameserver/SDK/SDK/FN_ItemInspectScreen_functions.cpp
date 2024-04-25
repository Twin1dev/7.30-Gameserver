#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectScreen.ItemInspectScreen_C
// (None)

class UClass* UItemInspectScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectScreen_C");

	return Clss;
}


// ItemInspectScreen_C ItemInspectScreen.Default__ItemInspectScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectScreen_C* UItemInspectScreen_C::GetDefaultObj()
{
	static class UItemInspectScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectScreen_C*>(UItemInspectScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetRefundHelpActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FConfirmationDialogAction>ConfirmActions                                                   (Parm, OutParm, ZeroConstructor)
// class FName                        DeclineAction                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConfirmationDialogAction>ConfirmActionList                                                (Edit, BlueprintVisible, ZeroConstructor)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction                       (None)
// bool                               CallFunc_GetHideStwItemRefundHelp_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction1                      (None)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetRefundHelpActions(TArray<struct FConfirmationDialogAction>* ConfirmActions, class FName* DeclineAction, const TArray<struct FConfirmationDialogAction>& ConfirmActionList, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, bool CallFunc_GetHideStwItemRefundHelp_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction1, int32 CallFunc_Array_Add_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetRefundHelpActions");

	Params::UItemInspectScreen_C_GetRefundHelpActions_Params Parms{};

	Parms.ConfirmActionList = ConfirmActionList;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction = K2Node_MakeStruct_ConfirmationDialogAction;
	Parms.CallFunc_GetHideStwItemRefundHelp_ReturnValue = CallFunc_GetHideStwItemRefundHelp_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction1 = K2Node_MakeStruct_ConfirmationDialogAction1;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (ConfirmActions != nullptr)
		*ConfirmActions = std::move(Parms.ConfirmActions);

	if (DeclineAction != nullptr)
		*DeclineAction = Parms.DeclineAction;

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShouldShowRefundMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldShowRefundMessage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        RefundDescriptionText                                            (Parm, OutParm)
// class FText                        RefundDescription                                                (Edit, BlueprintVisible)
// class FText                        CallFunc_GetRefundDescriptionText_ReturnValue                    (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRefundable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::ShouldShowRefundMessage(bool* ShouldShowRefundMessage, class FText* RefundDescriptionText, class FText RefundDescription, class FText CallFunc_GetRefundDescriptionText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRefundable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "ShouldShowRefundMessage");

	Params::UItemInspectScreen_C_ShouldShowRefundMessage_Params Parms{};

	Parms.RefundDescription = RefundDescription;
	Parms.CallFunc_GetRefundDescriptionText_ReturnValue = CallFunc_GetRefundDescriptionText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsRefundable_ReturnValue = CallFunc_IsRefundable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShowRefundMessage != nullptr)
		*ShouldShowRefundMessage = Parms.ShouldShowRefundMessage;

	if (RefundDescriptionText != nullptr)
		*RefundDescriptionText = Parms.RefundDescriptionText;

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundConfirmationModalWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            CallFunc_GetRefundResultItem_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRefundable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectRefundConfirmationModalWidget_C*K2Node_DynamicCast_AsItem_Inspect_Refund_Confirmation_Modal_Widget(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::ShowRefundConfirmationModalWidget(class UFortAccountItem* CallFunc_GetRefundResultItem_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsRefundable_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UItemInspectRefundConfirmationModalWidget_C* K2Node_DynamicCast_AsItem_Inspect_Refund_Confirmation_Modal_Widget, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "ShowRefundConfirmationModalWidget");

	Params::UItemInspectScreen_C_ShowRefundConfirmationModalWidget_Params Parms{};

	Parms.CallFunc_GetRefundResultItem_ReturnValue = CallFunc_GetRefundResultItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_IsRefundable_ReturnValue = CallFunc_IsRefundable_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Inspect_Refund_Confirmation_Modal_Widget = K2Node_DynamicCast_AsItem_Inspect_Refund_Confirmation_Modal_Widget;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetRefundPopupInputActionState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRefundable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetRefundPopupInputActionState(enum class EInputActionState* State, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRefundable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetRefundPopupInputActionState");

	Params::UItemInspectScreen_C_GetRefundPopupInputActionState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsRefundable_ReturnValue = CallFunc_IsRefundable_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundHelpIfNecessary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRefundable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHideStwItemRefundHelp_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::ShowRefundHelpIfNecessary(class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsRefundable_ReturnValue, bool CallFunc_GetHideStwItemRefundHelp_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "ShowRefundHelpIfNecessary");

	Params::UItemInspectScreen_C_ShowRefundHelpIfNecessary_Params Parms{};

	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsRefundable_ReturnValue = CallFunc_IsRefundable_ReturnValue;
	Parms.CallFunc_GetHideStwItemRefundHelp_ReturnValue = CallFunc_GetHideStwItemRefundHelp_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.CreateRefundPopupMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectRefundPopupMenu_C*K2Node_DynamicCast_AsItem_Inspect_Refund_Popup_Menu              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::CreateRefundPopupMenu(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UItemInspectRefundPopupMenu_C* K2Node_DynamicCast_AsItem_Inspect_Refund_Popup_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "CreateRefundPopupMenu");

	Params::UItemInspectScreen_C_CreateRefundPopupMenu_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Inspect_Refund_Popup_Menu = K2Node_DynamicCast_AsItem_Inspect_Refund_Popup_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleRefundPopup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleRefundPopup(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleRefundPopup");

	Params::UItemInspectScreen_C_HandleRefundPopup_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleShowUpgradeTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// class FText                        Temp_text_Variable2                                              (None)
// class FText                        Temp_text_Variable3                                              (None)
// class FText                        Temp_text_Variable4                                              (None)
// class FText                        Temp_text_Variable5                                              (None)
// class FText                        Temp_text_Variable6                                              (None)
// class FText                        Temp_text_Variable7                                              (None)
// class FText                        Temp_text_Variable8                                              (None)
// class FText                        Temp_text_Variable9                                              (None)
// class FText                        Temp_text_Variable10                                             (None)
// class FText                        Temp_text_Variable11                                             (None)
// class FText                        Temp_text_Variable12                                             (None)
// class FText                        Temp_text_Variable13                                             (None)
// class FText                        Temp_text_Variable14                                             (None)
// class FText                        Temp_text_Variable15                                             (None)
// class FText                        Temp_text_Variable16                                             (None)
// class FText                        Temp_text_Variable17                                             (None)
// class FText                        Temp_text_Variable18                                             (None)
// class FText                        Temp_text_Variable19                                             (None)
// class FText                        Temp_text_Variable20                                             (None)
// class FText                        Temp_text_Variable21                                             (None)
// class FText                        Temp_text_Variable22                                             (None)
// class FText                        Temp_text_Variable23                                             (None)
// class FText                        Temp_text_Variable24                                             (None)
// class FText                        Temp_text_Variable25                                             (None)
// class FText                        Temp_text_Variable26                                             (None)
// class FText                        Temp_text_Variable27                                             (None)
// class FText                        Temp_text_Variable28                                             (None)
// class FText                        Temp_text_Variable29                                             (None)
// class FText                        Temp_text_Variable30                                             (None)
// class FText                        Temp_text_Variable31                                             (None)
// class FText                        Temp_text_Variable32                                             (None)
// class FText                        Temp_text_Variable33                                             (None)
// class FText                        Temp_text_Variable34                                             (None)
// class FText                        Temp_text_Variable35                                             (None)
// class FText                        Temp_text_Variable36                                             (None)
// class FText                        Temp_text_Variable37                                             (None)
// class FText                        Temp_text_Variable38                                             (None)
// class FText                        Temp_text_Variable39                                             (None)
// class FText                        Temp_text_Variable40                                             (None)
// class FText                        Temp_text_Variable41                                             (None)
// class FText                        Temp_text_Variable42                                             (None)
// class FText                        Temp_text_Variable43                                             (None)
// class FText                        Temp_text_Variable44                                             (None)
// class FText                        Temp_text_Variable45                                             (None)
// class FText                        Temp_text_Variable46                                             (None)
// class FText                        Temp_text_Variable47                                             (None)
// class FText                        Temp_text_Variable48                                             (None)
// class FText                        Temp_text_Variable49                                             (None)
// class FText                        Temp_text_Variable50                                             (None)
// class FText                        Temp_text_Variable51                                             (None)
// class FText                        Temp_text_Variable52                                             (None)
// class FText                        Temp_text_Variable53                                             (None)
// class FText                        Temp_text_Variable54                                             (None)
// class FText                        Temp_text_Variable55                                             (None)
// class FText                        Temp_text_Variable56                                             (None)
// class FText                        Temp_text_Variable57                                             (None)
// class FText                        Temp_text_Variable58                                             (None)
// class FText                        Temp_text_Variable59                                             (None)
// class FText                        Temp_text_Variable60                                             (None)
// class FText                        Temp_text_Variable61                                             (None)
// class FText                        Temp_text_Variable62                                             (None)
// class FText                        Temp_text_Variable63                                             (None)
// class FText                        Temp_text_Variable64                                             (None)
// class FText                        Temp_text_Variable65                                             (None)
// class FText                        Temp_text_Variable66                                             (None)
// class FText                        Temp_text_Variable67                                             (None)
// class FText                        Temp_text_Variable68                                             (None)
// class FText                        Temp_text_Variable69                                             (None)
// class FText                        Temp_text_Variable70                                             (None)
// class FText                        Temp_text_Variable71                                             (None)
// class FText                        Temp_text_Variable72                                             (None)
// class FText                        Temp_text_Variable73                                             (None)
// class FText                        Temp_text_Variable74                                             (None)
// class FText                        Temp_text_Variable75                                             (None)
// class FText                        Temp_text_Variable76                                             (None)
// class FText                        Temp_text_Variable77                                             (None)
// class FText                        Temp_text_Variable78                                             (None)
// class FText                        Temp_text_Variable79                                             (None)
// class FText                        Temp_text_Variable80                                             (None)
// class FText                        Temp_text_Variable81                                             (None)
// class FText                        Temp_text_Variable82                                             (None)
// class FText                        Temp_text_Variable83                                             (None)
// class FText                        Temp_text_Variable84                                             (None)
// class FText                        Temp_text_Variable85                                             (None)
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable86                                             (None)
// class FText                        Temp_text_Variable87                                             (None)
// class FText                        Temp_text_Variable88                                             (None)
// class FText                        Temp_text_Variable89                                             (None)
// class FText                        Temp_text_Variable90                                             (None)
// class FText                        Temp_text_Variable91                                             (None)
// class FText                        Temp_text_Variable92                                             (None)
// class FText                        Temp_text_Variable93                                             (None)
// class FText                        Temp_text_Variable94                                             (None)
// class FText                        Temp_text_Variable95                                             (None)
// class FText                        Temp_text_Variable96                                             (None)
// class FText                        Temp_text_Variable97                                             (None)
// class FText                        Temp_text_Variable98                                             (None)
// class FText                        Temp_text_Variable99                                             (None)
// class FText                        Temp_text_Variable100                                            (None)
// class FText                        Temp_text_Variable101                                            (None)
// class FText                        Temp_text_Variable102                                            (None)
// class FText                        Temp_text_Variable103                                            (None)
// class FText                        Temp_text_Variable104                                            (None)
// class FText                        Temp_text_Variable105                                            (None)
// class FText                        Temp_text_Variable106                                            (None)
// class FText                        Temp_text_Variable107                                            (None)
// class FText                        Temp_text_Variable108                                            (None)
// class FText                        Temp_text_Variable109                                            (None)
// class FText                        Temp_text_Variable110                                            (None)
// class FText                        Temp_text_Variable111                                            (None)
// class FText                        Temp_text_Variable112                                            (None)
// class FText                        Temp_text_Variable113                                            (None)
// class FText                        Temp_text_Variable114                                            (None)
// class FText                        Temp_text_Variable115                                            (None)
// class FText                        Temp_text_Variable116                                            (None)
// class FText                        Temp_text_Variable117                                            (None)
// class FText                        Temp_text_Variable118                                            (None)
// class FText                        Temp_text_Variable119                                            (None)
// class FText                        Temp_text_Variable120                                            (None)
// class FText                        Temp_text_Variable121                                            (None)
// class FText                        Temp_text_Variable122                                            (None)
// class FText                        Temp_text_Variable123                                            (None)
// class FText                        Temp_text_Variable124                                            (None)
// class FText                        Temp_text_Variable125                                            (None)
// class FText                        Temp_text_Variable126                                            (None)
// class FText                        Temp_text_Variable127                                            (None)
// class FText                        Temp_text_Variable128                                            (None)
// class FText                        Temp_text_Variable129                                            (None)
// class FText                        Temp_text_Variable130                                            (None)
// class FText                        Temp_text_Variable131                                            (None)
// class FText                        Temp_text_Variable132                                            (None)
// class FText                        Temp_text_Variable133                                            (None)
// class FText                        Temp_text_Variable134                                            (None)
// class FText                        Temp_text_Variable135                                            (None)
// class FText                        Temp_text_Variable136                                            (None)
// class FText                        Temp_text_Variable137                                            (None)
// class FText                        Temp_text_Variable138                                            (None)
// class FText                        Temp_text_Variable139                                            (None)
// class FText                        Temp_text_Variable140                                            (None)
// class FText                        Temp_text_Variable141                                            (None)
// class FText                        Temp_text_Variable142                                            (None)
// class FText                        Temp_text_Variable143                                            (None)
// class FText                        Temp_text_Variable144                                            (None)
// class FText                        Temp_text_Variable145                                            (None)
// class FText                        Temp_text_Variable146                                            (None)
// class FText                        Temp_text_Variable147                                            (None)
// class FText                        Temp_text_Variable148                                            (None)
// class FText                        Temp_text_Variable149                                            (None)
// class FText                        Temp_text_Variable150                                            (None)
// class FText                        Temp_text_Variable151                                            (None)
// class FText                        Temp_text_Variable152                                            (None)
// class FText                        Temp_text_Variable153                                            (None)
// class FText                        Temp_text_Variable154                                            (None)
// class FText                        Temp_text_Variable155                                            (None)
// class FText                        Temp_text_Variable156                                            (None)
// class FText                        Temp_text_Variable157                                            (None)
// class FText                        Temp_text_Variable158                                            (None)
// class FText                        Temp_text_Variable159                                            (None)
// class FText                        Temp_text_Variable160                                            (None)
// class FText                        Temp_text_Variable161                                            (None)
// class FText                        Temp_text_Variable162                                            (None)
// class FText                        Temp_text_Variable163                                            (None)
// class FText                        Temp_text_Variable164                                            (None)
// class FText                        Temp_text_Variable165                                            (None)
// class FText                        Temp_text_Variable166                                            (None)
// class FText                        Temp_text_Variable167                                            (None)
// class FText                        Temp_text_Variable168                                            (None)
// class FText                        Temp_text_Variable169                                            (None)
// class FText                        Temp_text_Variable170                                            (None)
// class FText                        Temp_text_Variable171                                            (None)
// class FText                        Temp_text_Variable172                                            (None)
// class FText                        Temp_text_Variable173                                            (None)
// class FText                        Temp_text_Variable174                                            (None)
// class FText                        Temp_text_Variable175                                            (None)
// class FText                        Temp_text_Variable176                                            (None)
// enum class EFortItemType           Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable177                                            (None)
// class FText                        Temp_text_Variable178                                            (None)
// class FText                        Temp_text_Variable179                                            (None)
// class FText                        Temp_text_Variable180                                            (None)
// class FText                        Temp_text_Variable181                                            (None)
// class FText                        Temp_text_Variable182                                            (None)
// class FText                        Temp_text_Variable183                                            (None)
// class FText                        Temp_text_Variable184                                            (None)
// class FText                        Temp_text_Variable185                                            (None)
// class FText                        Temp_text_Variable186                                            (None)
// class FText                        Temp_text_Variable187                                            (None)
// class FText                        Temp_text_Variable188                                            (None)
// class FText                        Temp_text_Variable189                                            (None)
// class FText                        Temp_text_Variable190                                            (None)
// class FText                        Temp_text_Variable191                                            (None)
// class FText                        Temp_text_Variable192                                            (None)
// class FText                        Temp_text_Variable193                                            (None)
// class FText                        Temp_text_Variable194                                            (None)
// class FText                        Temp_text_Variable195                                            (None)
// class FText                        Temp_text_Variable196                                            (None)
// class FText                        Temp_text_Variable197                                            (None)
// class FText                        Temp_text_Variable198                                            (None)
// class FText                        Temp_text_Variable199                                            (None)
// class FText                        Temp_text_Variable200                                            (None)
// class FText                        Temp_text_Variable201                                            (None)
// class FText                        Temp_text_Variable202                                            (None)
// class FText                        Temp_text_Variable203                                            (None)
// class FText                        Temp_text_Variable204                                            (None)
// class FText                        Temp_text_Variable205                                            (None)
// class FText                        Temp_text_Variable206                                            (None)
// class FText                        Temp_text_Variable207                                            (None)
// class FText                        Temp_text_Variable208                                            (None)
// class FText                        Temp_text_Variable209                                            (None)
// class FText                        Temp_text_Variable210                                            (None)
// class FText                        Temp_text_Variable211                                            (None)
// class FText                        Temp_text_Variable212                                            (None)
// class FText                        Temp_text_Variable213                                            (None)
// class FText                        Temp_text_Variable214                                            (None)
// class FText                        Temp_text_Variable215                                            (None)
// class FText                        Temp_text_Variable216                                            (None)
// class FText                        Temp_text_Variable217                                            (None)
// class FText                        Temp_text_Variable218                                            (None)
// class FText                        Temp_text_Variable219                                            (None)
// class FText                        Temp_text_Variable220                                            (None)
// class FText                        Temp_text_Variable221                                            (None)
// class FText                        Temp_text_Variable222                                            (None)
// class FText                        Temp_text_Variable223                                            (None)
// class FText                        Temp_text_Variable224                                            (None)
// class FText                        Temp_text_Variable225                                            (None)
// class FText                        Temp_text_Variable226                                            (None)
// class FText                        Temp_text_Variable227                                            (None)
// class FText                        Temp_text_Variable228                                            (None)
// class FText                        Temp_text_Variable229                                            (None)
// class FText                        Temp_text_Variable230                                            (None)
// class FText                        Temp_text_Variable231                                            (None)
// class FText                        Temp_text_Variable232                                            (None)
// class FText                        Temp_text_Variable233                                            (None)
// class FText                        Temp_text_Variable234                                            (None)
// class FText                        Temp_text_Variable235                                            (None)
// class FText                        Temp_text_Variable236                                            (None)
// class FText                        Temp_text_Variable237                                            (None)
// class FText                        Temp_text_Variable238                                            (None)
// class FText                        Temp_text_Variable239                                            (None)
// class FText                        Temp_text_Variable240                                            (None)
// class FText                        Temp_text_Variable241                                            (None)
// class FText                        Temp_text_Variable242                                            (None)
// class FText                        Temp_text_Variable243                                            (None)
// class FText                        Temp_text_Variable244                                            (None)
// class FText                        Temp_text_Variable245                                            (None)
// class FText                        Temp_text_Variable246                                            (None)
// class FText                        Temp_text_Variable247                                            (None)
// class FText                        Temp_text_Variable248                                            (None)
// class FText                        Temp_text_Variable249                                            (None)
// class FText                        Temp_text_Variable250                                            (None)
// class FText                        Temp_text_Variable251                                            (None)
// class FText                        Temp_text_Variable252                                            (None)
// class FText                        Temp_text_Variable253                                            (None)
// class FText                        Temp_text_Variable254                                            (None)
// class FText                        Temp_text_Variable255                                            (None)
// class FText                        Temp_text_Variable256                                            (None)
// class FText                        Temp_text_Variable257                                            (None)
// class FText                        Temp_text_Variable258                                            (None)
// class FText                        Temp_text_Variable259                                            (None)
// class FText                        Temp_text_Variable260                                            (None)
// class FText                        Temp_text_Variable261                                            (None)
// class FText                        Temp_text_Variable262                                            (None)
// class FText                        Temp_text_Variable263                                            (None)
// class FText                        Temp_text_Variable264                                            (None)
// class FText                        Temp_text_Variable265                                            (None)
// class FText                        Temp_text_Variable266                                            (None)
// class FText                        Temp_text_Variable267                                            (None)
// class FText                        Temp_text_Variable268                                            (None)
// class FText                        Temp_text_Variable269                                            (None)
// enum class EFortItemType           Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable270                                            (None)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select1_Default                                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTexture2D>>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable271                                            (None)
// class FText                        Temp_text_Variable272                                            (None)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           (None)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class UModalTutorialOverlay_C*     K2Node_DynamicCast_AsModal_Tutorial_Overlay                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<class FText>                K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CheckForSideTutorialQuests_RelevantSideQuestFound       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleShowUpgradeTutorial(class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, class FText Temp_text_Variable30, class FText Temp_text_Variable31, class FText Temp_text_Variable32, class FText Temp_text_Variable33, class FText Temp_text_Variable34, class FText Temp_text_Variable35, class FText Temp_text_Variable36, class FText Temp_text_Variable37, class FText Temp_text_Variable38, class FText Temp_text_Variable39, class FText Temp_text_Variable40, class FText Temp_text_Variable41, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class FText Temp_text_Variable44, class FText Temp_text_Variable45, class FText Temp_text_Variable46, class FText Temp_text_Variable47, class FText Temp_text_Variable48, class FText Temp_text_Variable49, class FText Temp_text_Variable50, class FText Temp_text_Variable51, class FText Temp_text_Variable52, class FText Temp_text_Variable53, class FText Temp_text_Variable54, class FText Temp_text_Variable55, class FText Temp_text_Variable56, class FText Temp_text_Variable57, class FText Temp_text_Variable58, class FText Temp_text_Variable59, class FText Temp_text_Variable60, class FText Temp_text_Variable61, class FText Temp_text_Variable62, class FText Temp_text_Variable63, class FText Temp_text_Variable64, class FText Temp_text_Variable65, class FText Temp_text_Variable66, class FText Temp_text_Variable67, class FText Temp_text_Variable68, class FText Temp_text_Variable69, class FText Temp_text_Variable70, class FText Temp_text_Variable71, class FText Temp_text_Variable72, class FText Temp_text_Variable73, class FText Temp_text_Variable74, class FText Temp_text_Variable75, class FText Temp_text_Variable76, class FText Temp_text_Variable77, class FText Temp_text_Variable78, class FText Temp_text_Variable79, class FText Temp_text_Variable80, class FText Temp_text_Variable81, class FText Temp_text_Variable82, class FText Temp_text_Variable83, class FText Temp_text_Variable84, class FText Temp_text_Variable85, enum class EFortItemType Temp_byte_Variable, class FText Temp_text_Variable86, class FText Temp_text_Variable87, class FText Temp_text_Variable88, class FText Temp_text_Variable89, class FText Temp_text_Variable90, class FText Temp_text_Variable91, class FText Temp_text_Variable92, class FText Temp_text_Variable93, class FText Temp_text_Variable94, class FText Temp_text_Variable95, class FText Temp_text_Variable96, class FText Temp_text_Variable97, class FText Temp_text_Variable98, class FText Temp_text_Variable99, class FText Temp_text_Variable100, class FText Temp_text_Variable101, class FText Temp_text_Variable102, class FText Temp_text_Variable103, class FText Temp_text_Variable104, class FText Temp_text_Variable105, class FText Temp_text_Variable106, class FText Temp_text_Variable107, class FText Temp_text_Variable108, class FText Temp_text_Variable109, class FText Temp_text_Variable110, class FText Temp_text_Variable111, class FText Temp_text_Variable112, class FText Temp_text_Variable113, class FText Temp_text_Variable114, class FText Temp_text_Variable115, class FText Temp_text_Variable116, class FText Temp_text_Variable117, class FText Temp_text_Variable118, class FText Temp_text_Variable119, class FText Temp_text_Variable120, class FText Temp_text_Variable121, class FText Temp_text_Variable122, class FText Temp_text_Variable123, class FText Temp_text_Variable124, class FText Temp_text_Variable125, class FText Temp_text_Variable126, class FText Temp_text_Variable127, class FText Temp_text_Variable128, class FText Temp_text_Variable129, class FText Temp_text_Variable130, class FText Temp_text_Variable131, class FText Temp_text_Variable132, class FText Temp_text_Variable133, class FText Temp_text_Variable134, class FText Temp_text_Variable135, class FText Temp_text_Variable136, class FText Temp_text_Variable137, class FText Temp_text_Variable138, class FText Temp_text_Variable139, class FText Temp_text_Variable140, class FText Temp_text_Variable141, class FText Temp_text_Variable142, class FText Temp_text_Variable143, class FText Temp_text_Variable144, class FText Temp_text_Variable145, class FText Temp_text_Variable146, class FText Temp_text_Variable147, class FText Temp_text_Variable148, class FText Temp_text_Variable149, class FText Temp_text_Variable150, class FText Temp_text_Variable151, class FText Temp_text_Variable152, class FText Temp_text_Variable153, class FText Temp_text_Variable154, class FText Temp_text_Variable155, class FText Temp_text_Variable156, class FText Temp_text_Variable157, class FText Temp_text_Variable158, class FText Temp_text_Variable159, class FText Temp_text_Variable160, class FText Temp_text_Variable161, class FText Temp_text_Variable162, class FText Temp_text_Variable163, class FText Temp_text_Variable164, class FText Temp_text_Variable165, class FText Temp_text_Variable166, class FText Temp_text_Variable167, class FText Temp_text_Variable168, class FText Temp_text_Variable169, class FText Temp_text_Variable170, class FText Temp_text_Variable171, class FText Temp_text_Variable172, class FText Temp_text_Variable173, class FText Temp_text_Variable174, class FText Temp_text_Variable175, class FText Temp_text_Variable176, enum class EFortItemType Temp_byte_Variable1, class FText Temp_text_Variable177, class FText Temp_text_Variable178, class FText Temp_text_Variable179, class FText Temp_text_Variable180, class FText Temp_text_Variable181, class FText Temp_text_Variable182, class FText Temp_text_Variable183, class FText Temp_text_Variable184, class FText Temp_text_Variable185, class FText Temp_text_Variable186, class FText Temp_text_Variable187, class FText Temp_text_Variable188, class FText Temp_text_Variable189, class FText Temp_text_Variable190, class FText Temp_text_Variable191, class FText Temp_text_Variable192, class FText Temp_text_Variable193, class FText Temp_text_Variable194, class FText Temp_text_Variable195, class FText Temp_text_Variable196, class FText Temp_text_Variable197, class FText Temp_text_Variable198, class FText Temp_text_Variable199, class FText Temp_text_Variable200, class FText Temp_text_Variable201, class FText Temp_text_Variable202, class FText Temp_text_Variable203, class FText Temp_text_Variable204, class FText Temp_text_Variable205, class FText Temp_text_Variable206, class FText Temp_text_Variable207, class FText Temp_text_Variable208, class FText Temp_text_Variable209, class FText Temp_text_Variable210, class FText Temp_text_Variable211, class FText Temp_text_Variable212, class FText Temp_text_Variable213, class FText Temp_text_Variable214, class FText Temp_text_Variable215, class FText Temp_text_Variable216, class FText Temp_text_Variable217, class FText Temp_text_Variable218, class FText Temp_text_Variable219, class FText Temp_text_Variable220, class FText Temp_text_Variable221, class FText Temp_text_Variable222, class FText Temp_text_Variable223, class FText Temp_text_Variable224, class FText Temp_text_Variable225, class FText Temp_text_Variable226, class FText Temp_text_Variable227, class FText Temp_text_Variable228, class FText Temp_text_Variable229, class FText Temp_text_Variable230, class FText Temp_text_Variable231, class FText Temp_text_Variable232, class FText Temp_text_Variable233, class FText Temp_text_Variable234, class FText Temp_text_Variable235, class FText Temp_text_Variable236, class FText Temp_text_Variable237, class FText Temp_text_Variable238, class FText Temp_text_Variable239, class FText Temp_text_Variable240, class FText Temp_text_Variable241, class FText Temp_text_Variable242, class FText Temp_text_Variable243, class FText Temp_text_Variable244, class FText Temp_text_Variable245, class FText Temp_text_Variable246, class FText Temp_text_Variable247, class FText Temp_text_Variable248, class FText Temp_text_Variable249, class FText Temp_text_Variable250, class FText Temp_text_Variable251, class FText Temp_text_Variable252, class FText Temp_text_Variable253, class FText Temp_text_Variable254, class FText Temp_text_Variable255, class FText Temp_text_Variable256, class FText Temp_text_Variable257, class FText Temp_text_Variable258, class FText Temp_text_Variable259, class FText Temp_text_Variable260, class FText Temp_text_Variable261, class FText Temp_text_Variable262, class FText Temp_text_Variable263, class FText Temp_text_Variable264, class FText Temp_text_Variable265, class FText Temp_text_Variable266, class FText Temp_text_Variable267, class FText Temp_text_Variable268, class FText Temp_text_Variable269, enum class EFortItemType Temp_byte_Variable2, class FText Temp_text_Variable270, enum class EFortItemType CallFunc_GetType_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select1_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<TSoftObjectPtr<class UTexture2D>>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array1, class FText Temp_text_Variable271, class FText Temp_text_Variable272, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class FText K2Node_Select2_Default, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class UModalTutorialOverlay_C* K2Node_DynamicCast_AsModal_Tutorial_Overlay, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array3, bool CallFunc_CheckForSideTutorialQuests_RelevantSideQuestFound, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleShowUpgradeTutorial");

	Params::UItemInspectScreen_C_HandleShowUpgradeTutorial_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_text_Variable46 = Temp_text_Variable46;
	Parms.Temp_text_Variable47 = Temp_text_Variable47;
	Parms.Temp_text_Variable48 = Temp_text_Variable48;
	Parms.Temp_text_Variable49 = Temp_text_Variable49;
	Parms.Temp_text_Variable50 = Temp_text_Variable50;
	Parms.Temp_text_Variable51 = Temp_text_Variable51;
	Parms.Temp_text_Variable52 = Temp_text_Variable52;
	Parms.Temp_text_Variable53 = Temp_text_Variable53;
	Parms.Temp_text_Variable54 = Temp_text_Variable54;
	Parms.Temp_text_Variable55 = Temp_text_Variable55;
	Parms.Temp_text_Variable56 = Temp_text_Variable56;
	Parms.Temp_text_Variable57 = Temp_text_Variable57;
	Parms.Temp_text_Variable58 = Temp_text_Variable58;
	Parms.Temp_text_Variable59 = Temp_text_Variable59;
	Parms.Temp_text_Variable60 = Temp_text_Variable60;
	Parms.Temp_text_Variable61 = Temp_text_Variable61;
	Parms.Temp_text_Variable62 = Temp_text_Variable62;
	Parms.Temp_text_Variable63 = Temp_text_Variable63;
	Parms.Temp_text_Variable64 = Temp_text_Variable64;
	Parms.Temp_text_Variable65 = Temp_text_Variable65;
	Parms.Temp_text_Variable66 = Temp_text_Variable66;
	Parms.Temp_text_Variable67 = Temp_text_Variable67;
	Parms.Temp_text_Variable68 = Temp_text_Variable68;
	Parms.Temp_text_Variable69 = Temp_text_Variable69;
	Parms.Temp_text_Variable70 = Temp_text_Variable70;
	Parms.Temp_text_Variable71 = Temp_text_Variable71;
	Parms.Temp_text_Variable72 = Temp_text_Variable72;
	Parms.Temp_text_Variable73 = Temp_text_Variable73;
	Parms.Temp_text_Variable74 = Temp_text_Variable74;
	Parms.Temp_text_Variable75 = Temp_text_Variable75;
	Parms.Temp_text_Variable76 = Temp_text_Variable76;
	Parms.Temp_text_Variable77 = Temp_text_Variable77;
	Parms.Temp_text_Variable78 = Temp_text_Variable78;
	Parms.Temp_text_Variable79 = Temp_text_Variable79;
	Parms.Temp_text_Variable80 = Temp_text_Variable80;
	Parms.Temp_text_Variable81 = Temp_text_Variable81;
	Parms.Temp_text_Variable82 = Temp_text_Variable82;
	Parms.Temp_text_Variable83 = Temp_text_Variable83;
	Parms.Temp_text_Variable84 = Temp_text_Variable84;
	Parms.Temp_text_Variable85 = Temp_text_Variable85;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable86 = Temp_text_Variable86;
	Parms.Temp_text_Variable87 = Temp_text_Variable87;
	Parms.Temp_text_Variable88 = Temp_text_Variable88;
	Parms.Temp_text_Variable89 = Temp_text_Variable89;
	Parms.Temp_text_Variable90 = Temp_text_Variable90;
	Parms.Temp_text_Variable91 = Temp_text_Variable91;
	Parms.Temp_text_Variable92 = Temp_text_Variable92;
	Parms.Temp_text_Variable93 = Temp_text_Variable93;
	Parms.Temp_text_Variable94 = Temp_text_Variable94;
	Parms.Temp_text_Variable95 = Temp_text_Variable95;
	Parms.Temp_text_Variable96 = Temp_text_Variable96;
	Parms.Temp_text_Variable97 = Temp_text_Variable97;
	Parms.Temp_text_Variable98 = Temp_text_Variable98;
	Parms.Temp_text_Variable99 = Temp_text_Variable99;
	Parms.Temp_text_Variable100 = Temp_text_Variable100;
	Parms.Temp_text_Variable101 = Temp_text_Variable101;
	Parms.Temp_text_Variable102 = Temp_text_Variable102;
	Parms.Temp_text_Variable103 = Temp_text_Variable103;
	Parms.Temp_text_Variable104 = Temp_text_Variable104;
	Parms.Temp_text_Variable105 = Temp_text_Variable105;
	Parms.Temp_text_Variable106 = Temp_text_Variable106;
	Parms.Temp_text_Variable107 = Temp_text_Variable107;
	Parms.Temp_text_Variable108 = Temp_text_Variable108;
	Parms.Temp_text_Variable109 = Temp_text_Variable109;
	Parms.Temp_text_Variable110 = Temp_text_Variable110;
	Parms.Temp_text_Variable111 = Temp_text_Variable111;
	Parms.Temp_text_Variable112 = Temp_text_Variable112;
	Parms.Temp_text_Variable113 = Temp_text_Variable113;
	Parms.Temp_text_Variable114 = Temp_text_Variable114;
	Parms.Temp_text_Variable115 = Temp_text_Variable115;
	Parms.Temp_text_Variable116 = Temp_text_Variable116;
	Parms.Temp_text_Variable117 = Temp_text_Variable117;
	Parms.Temp_text_Variable118 = Temp_text_Variable118;
	Parms.Temp_text_Variable119 = Temp_text_Variable119;
	Parms.Temp_text_Variable120 = Temp_text_Variable120;
	Parms.Temp_text_Variable121 = Temp_text_Variable121;
	Parms.Temp_text_Variable122 = Temp_text_Variable122;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_text_Variable124 = Temp_text_Variable124;
	Parms.Temp_text_Variable125 = Temp_text_Variable125;
	Parms.Temp_text_Variable126 = Temp_text_Variable126;
	Parms.Temp_text_Variable127 = Temp_text_Variable127;
	Parms.Temp_text_Variable128 = Temp_text_Variable128;
	Parms.Temp_text_Variable129 = Temp_text_Variable129;
	Parms.Temp_text_Variable130 = Temp_text_Variable130;
	Parms.Temp_text_Variable131 = Temp_text_Variable131;
	Parms.Temp_text_Variable132 = Temp_text_Variable132;
	Parms.Temp_text_Variable133 = Temp_text_Variable133;
	Parms.Temp_text_Variable134 = Temp_text_Variable134;
	Parms.Temp_text_Variable135 = Temp_text_Variable135;
	Parms.Temp_text_Variable136 = Temp_text_Variable136;
	Parms.Temp_text_Variable137 = Temp_text_Variable137;
	Parms.Temp_text_Variable138 = Temp_text_Variable138;
	Parms.Temp_text_Variable139 = Temp_text_Variable139;
	Parms.Temp_text_Variable140 = Temp_text_Variable140;
	Parms.Temp_text_Variable141 = Temp_text_Variable141;
	Parms.Temp_text_Variable142 = Temp_text_Variable142;
	Parms.Temp_text_Variable143 = Temp_text_Variable143;
	Parms.Temp_text_Variable144 = Temp_text_Variable144;
	Parms.Temp_text_Variable145 = Temp_text_Variable145;
	Parms.Temp_text_Variable146 = Temp_text_Variable146;
	Parms.Temp_text_Variable147 = Temp_text_Variable147;
	Parms.Temp_text_Variable148 = Temp_text_Variable148;
	Parms.Temp_text_Variable149 = Temp_text_Variable149;
	Parms.Temp_text_Variable150 = Temp_text_Variable150;
	Parms.Temp_text_Variable151 = Temp_text_Variable151;
	Parms.Temp_text_Variable152 = Temp_text_Variable152;
	Parms.Temp_text_Variable153 = Temp_text_Variable153;
	Parms.Temp_text_Variable154 = Temp_text_Variable154;
	Parms.Temp_text_Variable155 = Temp_text_Variable155;
	Parms.Temp_text_Variable156 = Temp_text_Variable156;
	Parms.Temp_text_Variable157 = Temp_text_Variable157;
	Parms.Temp_text_Variable158 = Temp_text_Variable158;
	Parms.Temp_text_Variable159 = Temp_text_Variable159;
	Parms.Temp_text_Variable160 = Temp_text_Variable160;
	Parms.Temp_text_Variable161 = Temp_text_Variable161;
	Parms.Temp_text_Variable162 = Temp_text_Variable162;
	Parms.Temp_text_Variable163 = Temp_text_Variable163;
	Parms.Temp_text_Variable164 = Temp_text_Variable164;
	Parms.Temp_text_Variable165 = Temp_text_Variable165;
	Parms.Temp_text_Variable166 = Temp_text_Variable166;
	Parms.Temp_text_Variable167 = Temp_text_Variable167;
	Parms.Temp_text_Variable168 = Temp_text_Variable168;
	Parms.Temp_text_Variable169 = Temp_text_Variable169;
	Parms.Temp_text_Variable170 = Temp_text_Variable170;
	Parms.Temp_text_Variable171 = Temp_text_Variable171;
	Parms.Temp_text_Variable172 = Temp_text_Variable172;
	Parms.Temp_text_Variable173 = Temp_text_Variable173;
	Parms.Temp_text_Variable174 = Temp_text_Variable174;
	Parms.Temp_text_Variable175 = Temp_text_Variable175;
	Parms.Temp_text_Variable176 = Temp_text_Variable176;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_text_Variable177 = Temp_text_Variable177;
	Parms.Temp_text_Variable178 = Temp_text_Variable178;
	Parms.Temp_text_Variable179 = Temp_text_Variable179;
	Parms.Temp_text_Variable180 = Temp_text_Variable180;
	Parms.Temp_text_Variable181 = Temp_text_Variable181;
	Parms.Temp_text_Variable182 = Temp_text_Variable182;
	Parms.Temp_text_Variable183 = Temp_text_Variable183;
	Parms.Temp_text_Variable184 = Temp_text_Variable184;
	Parms.Temp_text_Variable185 = Temp_text_Variable185;
	Parms.Temp_text_Variable186 = Temp_text_Variable186;
	Parms.Temp_text_Variable187 = Temp_text_Variable187;
	Parms.Temp_text_Variable188 = Temp_text_Variable188;
	Parms.Temp_text_Variable189 = Temp_text_Variable189;
	Parms.Temp_text_Variable190 = Temp_text_Variable190;
	Parms.Temp_text_Variable191 = Temp_text_Variable191;
	Parms.Temp_text_Variable192 = Temp_text_Variable192;
	Parms.Temp_text_Variable193 = Temp_text_Variable193;
	Parms.Temp_text_Variable194 = Temp_text_Variable194;
	Parms.Temp_text_Variable195 = Temp_text_Variable195;
	Parms.Temp_text_Variable196 = Temp_text_Variable196;
	Parms.Temp_text_Variable197 = Temp_text_Variable197;
	Parms.Temp_text_Variable198 = Temp_text_Variable198;
	Parms.Temp_text_Variable199 = Temp_text_Variable199;
	Parms.Temp_text_Variable200 = Temp_text_Variable200;
	Parms.Temp_text_Variable201 = Temp_text_Variable201;
	Parms.Temp_text_Variable202 = Temp_text_Variable202;
	Parms.Temp_text_Variable203 = Temp_text_Variable203;
	Parms.Temp_text_Variable204 = Temp_text_Variable204;
	Parms.Temp_text_Variable205 = Temp_text_Variable205;
	Parms.Temp_text_Variable206 = Temp_text_Variable206;
	Parms.Temp_text_Variable207 = Temp_text_Variable207;
	Parms.Temp_text_Variable208 = Temp_text_Variable208;
	Parms.Temp_text_Variable209 = Temp_text_Variable209;
	Parms.Temp_text_Variable210 = Temp_text_Variable210;
	Parms.Temp_text_Variable211 = Temp_text_Variable211;
	Parms.Temp_text_Variable212 = Temp_text_Variable212;
	Parms.Temp_text_Variable213 = Temp_text_Variable213;
	Parms.Temp_text_Variable214 = Temp_text_Variable214;
	Parms.Temp_text_Variable215 = Temp_text_Variable215;
	Parms.Temp_text_Variable216 = Temp_text_Variable216;
	Parms.Temp_text_Variable217 = Temp_text_Variable217;
	Parms.Temp_text_Variable218 = Temp_text_Variable218;
	Parms.Temp_text_Variable219 = Temp_text_Variable219;
	Parms.Temp_text_Variable220 = Temp_text_Variable220;
	Parms.Temp_text_Variable221 = Temp_text_Variable221;
	Parms.Temp_text_Variable222 = Temp_text_Variable222;
	Parms.Temp_text_Variable223 = Temp_text_Variable223;
	Parms.Temp_text_Variable224 = Temp_text_Variable224;
	Parms.Temp_text_Variable225 = Temp_text_Variable225;
	Parms.Temp_text_Variable226 = Temp_text_Variable226;
	Parms.Temp_text_Variable227 = Temp_text_Variable227;
	Parms.Temp_text_Variable228 = Temp_text_Variable228;
	Parms.Temp_text_Variable229 = Temp_text_Variable229;
	Parms.Temp_text_Variable230 = Temp_text_Variable230;
	Parms.Temp_text_Variable231 = Temp_text_Variable231;
	Parms.Temp_text_Variable232 = Temp_text_Variable232;
	Parms.Temp_text_Variable233 = Temp_text_Variable233;
	Parms.Temp_text_Variable234 = Temp_text_Variable234;
	Parms.Temp_text_Variable235 = Temp_text_Variable235;
	Parms.Temp_text_Variable236 = Temp_text_Variable236;
	Parms.Temp_text_Variable237 = Temp_text_Variable237;
	Parms.Temp_text_Variable238 = Temp_text_Variable238;
	Parms.Temp_text_Variable239 = Temp_text_Variable239;
	Parms.Temp_text_Variable240 = Temp_text_Variable240;
	Parms.Temp_text_Variable241 = Temp_text_Variable241;
	Parms.Temp_text_Variable242 = Temp_text_Variable242;
	Parms.Temp_text_Variable243 = Temp_text_Variable243;
	Parms.Temp_text_Variable244 = Temp_text_Variable244;
	Parms.Temp_text_Variable245 = Temp_text_Variable245;
	Parms.Temp_text_Variable246 = Temp_text_Variable246;
	Parms.Temp_text_Variable247 = Temp_text_Variable247;
	Parms.Temp_text_Variable248 = Temp_text_Variable248;
	Parms.Temp_text_Variable249 = Temp_text_Variable249;
	Parms.Temp_text_Variable250 = Temp_text_Variable250;
	Parms.Temp_text_Variable251 = Temp_text_Variable251;
	Parms.Temp_text_Variable252 = Temp_text_Variable252;
	Parms.Temp_text_Variable253 = Temp_text_Variable253;
	Parms.Temp_text_Variable254 = Temp_text_Variable254;
	Parms.Temp_text_Variable255 = Temp_text_Variable255;
	Parms.Temp_text_Variable256 = Temp_text_Variable256;
	Parms.Temp_text_Variable257 = Temp_text_Variable257;
	Parms.Temp_text_Variable258 = Temp_text_Variable258;
	Parms.Temp_text_Variable259 = Temp_text_Variable259;
	Parms.Temp_text_Variable260 = Temp_text_Variable260;
	Parms.Temp_text_Variable261 = Temp_text_Variable261;
	Parms.Temp_text_Variable262 = Temp_text_Variable262;
	Parms.Temp_text_Variable263 = Temp_text_Variable263;
	Parms.Temp_text_Variable264 = Temp_text_Variable264;
	Parms.Temp_text_Variable265 = Temp_text_Variable265;
	Parms.Temp_text_Variable266 = Temp_text_Variable266;
	Parms.Temp_text_Variable267 = Temp_text_Variable267;
	Parms.Temp_text_Variable268 = Temp_text_Variable268;
	Parms.Temp_text_Variable269 = Temp_text_Variable269;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_text_Variable270 = Temp_text_Variable270;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.Temp_text_Variable271 = Temp_text_Variable271;
	Parms.Temp_text_Variable272 = Temp_text_Variable272;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_DynamicCast_AsModal_Tutorial_Overlay = K2Node_DynamicCast_AsModal_Tutorial_Overlay;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_CheckForSideTutorialQuests_RelevantSideQuestFound = CallFunc_CheckForSideTutorialQuests_RelevantSideQuestFound;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.CheckForSideTutorialQuests
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RelevantSideQuestFound                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::CheckForSideTutorialQuests(bool* RelevantSideQuestFound, bool CallFunc_Not_PreBool_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_HasCompletedQuest_ReturnValue1, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue2, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_HasCompletedQuest_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "CheckForSideTutorialQuests");

	Params::UItemInspectScreen_C_CheckForSideTutorialQuests_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue1 = CallFunc_GetQuestWithDefinition_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_HasCompletedQuest_ReturnValue1 = CallFunc_HasCompletedQuest_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue2 = CallFunc_GetQuestWithDefinition_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_HasCompletedQuest_ReturnValue2 = CallFunc_HasCompletedQuest_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue6 = CallFunc_BooleanAND_ReturnValue6;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantSideQuestFound != nullptr)
		*RelevantSideQuestFound = Parms.RelevantSideQuestFound;

}


// Function ItemInspectScreen.ItemInspectScreen_C.AlterationQuestComplete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               QuestComplete                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalItemQuantityByDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::AlterationQuestComplete(bool* QuestComplete, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalItemQuantityByDefinition_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "AlterationQuestComplete");

	Params::UItemInspectScreen_C_AlterationQuestComplete_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTotalItemQuantityByDefinition_ReturnValue = CallFunc_GetTotalItemQuantityByDefinition_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestComplete != nullptr)
		*QuestComplete = Parms.QuestComplete;

}


// Function ItemInspectScreen.ItemInspectScreen_C.UpgradeQuestComplete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               QuestIsComplete                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::UpgradeQuestComplete(bool* QuestIsComplete, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue3, bool CallFunc_IsValid_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "UpgradeQuestComplete");

	Params::UItemInspectScreen_C_UpgradeQuestComplete_Params Parms{};

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue1 = CallFunc_GetQuestWithDefinition_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue2 = CallFunc_GetQuestWithDefinition_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue3 = CallFunc_GetQuestWithDefinition_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestIsComplete != nullptr)
		*QuestIsComplete = Parms.QuestIsComplete;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupUpgrades
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_UpgradeQuestComplete_QuestIsComplete                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::SetupUpgrades(bool CallFunc_UpgradeQuestComplete_QuestIsComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "SetupUpgrades");

	Params::UItemInspectScreen_C_SetupUpgrades_Params Parms{};

	Parms.CallFunc_UpgradeQuestComplete_QuestIsComplete = CallFunc_UpgradeQuestComplete_QuestIsComplete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::SetupScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "SetupScrollWidget");

	Params::UItemInspectScreen_C_SetupScrollWidget_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetRequiredTagContainer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*         ItemDef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasRequiredTag                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       RequiredTagContainer                                             (Parm, OutParm)
// struct FGameplayTagContainer       TC_Return                                                        (Edit, BlueprintVisible)
// bool                               b_Return                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_Map_Values_Values                                       (ZeroConstructor, ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ZeroConstructor, ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item1                                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::GetRequiredTagContainer(class UFortItemDefinition* ItemDef, bool* HasRequiredTag, struct FGameplayTagContainer* RequiredTagContainer, const struct FGameplayTagContainer& TC_Return, bool b_Return, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Values_Values, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, const struct FGameplayTag& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetRequiredTagContainer");

	Params::UItemInspectScreen_C_GetRequiredTagContainer_Params Parms{};

	Parms.ItemDef = ItemDef;
	Parms.TC_Return = TC_Return;
	Parms.b_Return = b_Return;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput = CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue = CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasRequiredTag != nullptr)
		*HasRequiredTag = Parms.HasRequiredTag;

	if (RequiredTagContainer != nullptr)
		*RequiredTagContainer = std::move(Parms.RequiredTagContainer);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SchematicRequirementsMet
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRequiredTagContainer_HasRequiredTag                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetRequiredTagContainer_RequiredTagContainer            (None)
// bool                               CallFunc_DoesItemHaveLegacyAlterations_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UItemInspectScreen_C::SchematicRequirementsMet(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetRequiredTagContainer_HasRequiredTag, const struct FGameplayTagContainer& CallFunc_GetRequiredTagContainer_RequiredTagContainer, bool CallFunc_DoesItemHaveLegacyAlterations_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_HasGameplayTagContainer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "SchematicRequirementsMet");

	Params::UItemInspectScreen_C_SchematicRequirementsMet_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRequiredTagContainer_HasRequiredTag = CallFunc_GetRequiredTagContainer_HasRequiredTag;
	Parms.CallFunc_GetRequiredTagContainer_RequiredTagContainer = CallFunc_GetRequiredTagContainer_RequiredTagContainer;
	Parms.CallFunc_DoesItemHaveLegacyAlterations_ReturnValue = CallFunc_DoesItemHaveLegacyAlterations_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_HasGameplayTagContainer_ReturnValue = CallFunc_HasGameplayTagContainer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.MeetsQuestRequirements
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              QuestItem                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UItemInspectScreen_C::MeetsQuestRequirements(class UFortQuestItem* QuestItem, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "MeetsQuestRequirements");

	Params::UItemInspectScreen_C_MeetsQuestRequirements_Params Parms{};

	Parms.QuestItem = QuestItem;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.IsAlterableItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortAlterableItem*          K2Node_DynamicCast_AsFort_Alterable_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortAlterationSlotStatus>CallFunc_GetAlterationSlots_ReturnValue                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UItemInspectScreen_C::IsAlterableItem(class UFortAlterableItem* K2Node_DynamicCast_AsFort_Alterable_Item, bool K2Node_DynamicCast_bSuccess, TArray<struct FFortAlterationSlotStatus>& CallFunc_GetAlterationSlots_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "IsAlterableItem");

	Params::UItemInspectScreen_C_IsAlterableItem_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Alterable_Item = K2Node_DynamicCast_AsFort_Alterable_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAlterationSlots_ReturnValue = CallFunc_GetAlterationSlots_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.CreateUpgradePopupMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectUpgradePopupMenu_C*K2Node_DynamicCast_AsItem_Inspect_Upgrade_Popup_Menu             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::CreateUpgradePopupMenu(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UItemInspectUpgradePopupMenu_C* K2Node_DynamicCast_AsItem_Inspect_Upgrade_Popup_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "CreateUpgradePopupMenu");

	Params::UItemInspectScreen_C_CreateUpgradePopupMenu_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Inspect_Upgrade_Popup_Menu = K2Node_DynamicCast_AsItem_Inspect_Upgrade_Popup_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleAlterationModify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterableItem*          AlterableItem                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleAlterationModify(class UFortAlterableItem* AlterableItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleAlterationModify");

	Params::UItemInspectScreen_C_HandleAlterationModify_Params Parms{};

	Parms.AlterableItem = AlterableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetItemActionSwitcherVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetItemActionSwitcherVisibility(enum class ESlateVisibility* Return_Value, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetItemActionSwitcherVisibility");

	Params::UItemInspectScreen_C_GetItemActionSwitcherVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeItemInputActionState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpgradeQuestComplete_QuestIsComplete                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetAlterationModifyVisibility_Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetUpgradeRarityVisibility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetEvolutionVisibility_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetLevelUpVisibility_Return_Value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetUpgradeItemInputActionState(enum class EInputActionState* Return_Value, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsInZone_ReturnValue, enum class EInputActionState Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class EInputActionState Temp_byte_Variable1, bool CallFunc_UpgradeQuestComplete_QuestIsComplete, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility CallFunc_GetAlterationModifyVisibility_Return_Value, enum class ESlateVisibility CallFunc_GetUpgradeRarityVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ESlateVisibility CallFunc_GetEvolutionVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetLevelUpVisibility_Return_Value, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue1, enum class EInputActionState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetUpgradeItemInputActionState");

	Params::UItemInspectScreen_C_GetUpgradeItemInputActionState_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_UpgradeQuestComplete_QuestIsComplete = CallFunc_UpgradeQuestComplete_QuestIsComplete;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAlterationModifyVisibility_Return_Value = CallFunc_GetAlterationModifyVisibility_Return_Value;
	Parms.CallFunc_GetUpgradeRarityVisibility_ReturnValue = CallFunc_GetUpgradeRarityVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetEvolutionVisibility_ReturnValue = CallFunc_GetEvolutionVisibility_ReturnValue;
	Parms.CallFunc_GetLevelUpVisibility_Return_Value = CallFunc_GetLevelUpVisibility_Return_Value;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetAlterationModifyVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AlterationQuestComplete_QuestComplete                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MeetsQuestRequirements_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemSlottedInCollectionBook_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInventoryOverflowItem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlterableItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetAlterationModifyVisibility(enum class ESlateVisibility* Return_Value, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_AlterationQuestComplete_QuestComplete, bool CallFunc_MeetsQuestRequirements_ReturnValue, bool CallFunc_IsItemSlottedInCollectionBook_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInventoryOverflowItem_ReturnValue, bool CallFunc_IsAlterableItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetAlterationModifyVisibility");

	Params::UItemInspectScreen_C_GetAlterationModifyVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_AlterationQuestComplete_QuestComplete = CallFunc_AlterationQuestComplete_QuestComplete;
	Parms.CallFunc_MeetsQuestRequirements_ReturnValue = CallFunc_MeetsQuestRequirements_ReturnValue;
	Parms.CallFunc_IsItemSlottedInCollectionBook_ReturnValue = CallFunc_IsItemSlottedInCollectionBook_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsInventoryOverflowItem_ReturnValue = CallFunc_IsInventoryOverflowItem_ReturnValue;
	Parms.CallFunc_IsAlterableItem_ReturnValue = CallFunc_IsAlterableItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetOverviewActionsInputState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       CallFunc_GetFavoriteInputState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetViewInputState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::SetOverviewActionsInputState(enum class EInputActionState State, enum class EInputActionState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, enum class EInputActionState Temp_byte_Variable4, bool K2Node_Select_Default, enum class EInputActionState CallFunc_GetFavoriteInputState_ReturnValue, enum class EInputActionState CallFunc_GetViewInputState_ReturnValue, enum class EInputActionState K2Node_Select1_Default, enum class EInputActionState K2Node_Select2_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "SetOverviewActionsInputState");

	Params::UItemInspectScreen_C_SetOverviewActionsInputState_Params Parms{};

	Parms.State = State;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetFavoriteInputState_ReturnValue = CallFunc_GetFavoriteInputState_ReturnValue;
	Parms.CallFunc_GetViewInputState_ReturnValue = CallFunc_GetViewInputState_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetLevelUpVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetLevelUpVisibility(enum class ESlateVisibility* Return_Value, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetLevelUpVisibility");

	Params::UItemInspectScreen_C_GetLevelUpVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleSchematicUpgradeOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleSchematicUpgradeOptions(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleSchematicUpgradeOptions");

	Params::UItemInspectScreen_C_HandleSchematicUpgradeOptions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.UpdateInspectionMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetItemActionSwitcherVisibility_Return_Value            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::UpdateInspectionMode(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility CallFunc_GetItemActionSwitcherVisibility_Return_Value, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "UpdateInspectionMode");

	Params::UItemInspectScreen_C_UpdateInspectionMode_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemActionSwitcherVisibility_Return_Value = CallFunc_GetItemActionSwitcherVisibility_Return_Value;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetWindowTitleBarVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UItemInspectScreen_C::GetWindowTitleBarVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetWindowTitleBarVisibility");

	Params::UItemInspectScreen_C_GetWindowTitleBarVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UItemInspectScreen_C::UnbindDelegates(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "UnbindDelegates");

	Params::UItemInspectScreen_C_UnbindDelegates_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "BindDelegates");

	Params::UItemInspectScreen_C_BindDelegates_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UItemInspectScreen_C::GetWidgetForFramingViewedItem(bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetWidgetForFramingViewedItem");

	Params::UItemInspectScreen_C_GetWidgetForFramingViewedItem_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshItemViewHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeLiteralBool_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::RefreshItemViewHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue1, enum class EInputActionState K2Node_Select_Default, enum class EInputActionState K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "RefreshItemViewHandlerStates");

	Params::UItemInspectScreen_C_RefreshItemViewHandlerStates_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue1 = CallFunc_MakeLiteralBool_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Setup Evolution Selection for Comparisons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::Setup_Evolution_Selection_for_Comparisons(class UFortItem* Item, int32 RecipeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "Setup Evolution Selection for Comparisons");

	Params::UItemInspectScreen_C_Setup_Evolution_Selection_for_Comparisons_Params Parms{};

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeRarityVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterableItem*          AlterableItem                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SchematicRequirementsMet_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInventoryOverflowItem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasRarityUpgrade_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UItemInspectScreen_C::GetUpgradeRarityVisibility(class UFortAlterableItem* AlterableItem, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_SchematicRequirementsMet_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInventoryOverflowItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasRarityUpgrade_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetUpgradeRarityVisibility");

	Params::UItemInspectScreen_C_GetUpgradeRarityVisibility_Params Parms{};

	Parms.AlterableItem = AlterableItem;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_SchematicRequirementsMet_ReturnValue = CallFunc_SchematicRequirementsMet_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsInventoryOverflowItem_ReturnValue = CallFunc_IsInventoryOverflowItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasRarityUpgrade_ReturnValue = CallFunc_HasRarityUpgrade_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetFavoriteInputState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInputActionState UItemInspectScreen_C::GetFavoriteInputState(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetFavoriteInputState");

	Params::UItemInspectScreen_C_GetFavoriteInputState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetEvolutionVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEvolutions_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UItemInspectScreen_C::GetEvolutionVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_HasEvolutions_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetEvolutionVisibility");

	Params::UItemInspectScreen_C_GetEvolutionVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_HasEvolutions_ReturnValue = CallFunc_HasEvolutions_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetViewInputState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSchematicOrCraftedWeapon_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInputActionState UItemInspectScreen_C::GetViewInputState(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSchematicOrCraftedWeapon_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetViewInputState");

	Params::UItemInspectScreen_C_GetViewInputState_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsSchematicOrCraftedWeapon_ReturnValue = CallFunc_IsSchematicOrCraftedWeapon_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetAllInputActionStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       InputActionState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::SetAllInputActionStates(enum class EInputActionState InputActionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "SetAllInputActionStates");

	Params::UItemInspectScreen_C_SetAllInputActionStates_Params Parms{};

	Parms.InputActionState = InputActionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgradeItemRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleUpgradeItemRarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleUpgradeItemRarity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshExtraDetailsTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SelectedTabID                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTabCount_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetSelectedTabId_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTabCount_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortAlterationSlotStatus>CallFunc_GetAlterationSlots_ReturnValue                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo                         (None)
// bool                               CallFunc_RegisterFortTab_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorker*                 K2Node_DynamicCast_AsFort_Worker                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSchematic_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo1                        (None)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo2                        (None)
// bool                               CallFunc_RegisterFortTab_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo3                        (None)
// bool                               CallFunc_RegisterFortTab_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RegisterFortTab_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshExtraDetailsTabs(class FName SelectedTabID, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_GetSelectedTabId_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, class FName CallFunc_GetTabIdAtIndex_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue1, int32 CallFunc_GetTabCount_ReturnValue1, TArray<struct FFortAlterationSlotStatus>& CallFunc_GetAlterationSlots_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, bool CallFunc_RegisterFortTab_ReturnValue, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess1, class UFortHero* K2Node_DynamicCast_AsFort_Hero1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSchematic_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo1, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo2, bool CallFunc_RegisterFortTab_ReturnValue1, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo3, bool CallFunc_RegisterFortTab_ReturnValue2, bool CallFunc_RegisterFortTab_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "RefreshExtraDetailsTabs");

	Params::UItemInspectScreen_C_RefreshExtraDetailsTabs_Params Parms{};

	Parms.SelectedTabID = SelectedTabID;
	Parms.CallFunc_GetTabCount_ReturnValue = CallFunc_GetTabCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetSelectedTabId_ReturnValue = CallFunc_GetSelectedTabId_ReturnValue;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue = CallFunc_GetTabIdAtIndex_ReturnValue;
	Parms.CallFunc_SelectTabByID_ReturnValue1 = CallFunc_SelectTabByID_ReturnValue1;
	Parms.CallFunc_GetTabCount_ReturnValue1 = CallFunc_GetTabCount_ReturnValue1;
	Parms.CallFunc_GetAlterationSlots_ReturnValue = CallFunc_GetAlterationSlots_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo = K2Node_MakeStruct_FortTabButtonLabelInfo;
	Parms.CallFunc_RegisterFortTab_ReturnValue = CallFunc_RegisterFortTab_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Worker = K2Node_DynamicCast_AsFort_Worker;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsFort_Hero1 = K2Node_DynamicCast_AsFort_Hero1;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsSchematic_ReturnValue = CallFunc_IsSchematic_ReturnValue;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo1 = K2Node_MakeStruct_FortTabButtonLabelInfo1;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo2 = K2Node_MakeStruct_FortTabButtonLabelInfo2;
	Parms.CallFunc_RegisterFortTab_ReturnValue1 = CallFunc_RegisterFortTab_ReturnValue1;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo3 = K2Node_MakeStruct_FortTabButtonLabelInfo3;
	Parms.CallFunc_RegisterFortTab_ReturnValue2 = CallFunc_RegisterFortTab_ReturnValue2;
	Parms.CallFunc_RegisterFortTab_ReturnValue3 = CallFunc_RegisterFortTab_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnItemCycleChangedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   NewItemToRepresent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::OnItemCycleChangedItem(class UFortItem* NewItemToRepresent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "OnItemCycleChangedItem");

	Params::UItemInspectScreen_C_OnItemCycleChangedItem_Params Parms{};

	Parms.NewItemToRepresent = NewItemToRepresent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemInspectionMode NewInspectMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::SetInspectModeForChildPanels(enum class EFortItemInspectionMode NewInspectMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "SetInspectModeForChildPanels");

	Params::UItemInspectScreen_C_SetInspectModeForChildPanels_Params Parms{};

	Parms.NewInspectMode = NewInspectMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::SetTabButtonStyle(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "SetTabButtonStyle");

	Params::UItemInspectScreen_C_SetTabButtonStyle_Params Parms{};

	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowPreviewLabel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::ShowPreviewHeader(bool ShowPreviewLabel, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "ShowPreviewHeader");

	Params::UItemInspectScreen_C_ShowPreviewHeader_Params Parms{};

	Parms.ShowPreviewLabel = ShowPreviewLabel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshCallout(bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "RefreshCallout");

	Params::UItemInspectScreen_C_RefreshCallout_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputActionState       CallFunc_GetRefundPopupInputActionState_State                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetLevelUpVisibility_Return_Value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetUpgradeItemInputActionState_Return_Value             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetAlterationModifyVisibility_Return_Value              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetUpgradeRarityVisibility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetFavoriteInputState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetEvolutionVisibility_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetViewInputState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshActionHandlers(enum class EInputActionState CallFunc_GetRefundPopupInputActionState_State, enum class ESlateVisibility CallFunc_GetLevelUpVisibility_Return_Value, enum class EInputActionState CallFunc_GetUpgradeItemInputActionState_Return_Value, enum class ESlateVisibility CallFunc_GetAlterationModifyVisibility_Return_Value, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue, enum class ESlateVisibility CallFunc_GetUpgradeRarityVisibility_ReturnValue, enum class EInputActionState CallFunc_GetFavoriteInputState_ReturnValue, enum class ESlateVisibility CallFunc_GetEvolutionVisibility_ReturnValue, enum class EInputActionState CallFunc_GetViewInputState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "RefreshActionHandlers");

	Params::UItemInspectScreen_C_RefreshActionHandlers_Params Parms{};

	Parms.CallFunc_GetRefundPopupInputActionState_State = CallFunc_GetRefundPopupInputActionState_State;
	Parms.CallFunc_GetLevelUpVisibility_Return_Value = CallFunc_GetLevelUpVisibility_Return_Value;
	Parms.CallFunc_GetUpgradeItemInputActionState_Return_Value = CallFunc_GetUpgradeItemInputActionState_Return_Value;
	Parms.CallFunc_GetAlterationModifyVisibility_Return_Value = CallFunc_GetAlterationModifyVisibility_Return_Value;
	Parms.CallFunc_GetCycleWidget_ReturnValue = CallFunc_GetCycleWidget_ReturnValue;
	Parms.CallFunc_GetUpgradeRarityVisibility_ReturnValue = CallFunc_GetUpgradeRarityVisibility_ReturnValue;
	Parms.CallFunc_GetFavoriteInputState_ReturnValue = CallFunc_GetFavoriteInputState_ReturnValue;
	Parms.CallFunc_GetEvolutionVisibility_ReturnValue = CallFunc_GetEvolutionVisibility_ReturnValue;
	Parms.CallFunc_GetViewInputState_ReturnValue = CallFunc_GetViewInputState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>ResultingItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FFortItemInstanceQuantityPairCallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleEvolutionComplete(TArray<struct FFortItemInstanceQuantityPair>& ResultingItems, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionComplete");

	Params::UItemInspectScreen_C_HandleEvolutionComplete_Params Parms{};

	Parms.ResultingItems = ResultingItems;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::RefreshOnUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "RefreshOnUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_Passthrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleCursorModeChanging(bool IsEnabled, bool CallFunc_HandleBack_Passthrough, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleCursorModeChanging");

	Params::UItemInspectScreen_C_HandleCursorModeChanging_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_HandleBack_Passthrough = CallFunc_HandleBack_Passthrough;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::ResetDetailsPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "ResetDetailsPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle1                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle2                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle3                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle4                            (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle5                            (NoDestructor)

void UItemInspectScreen_C::SetupActionHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "SetupActionHandlers");

	Params::UItemInspectScreen_C_SetupActionHandlers_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_DataTableRowHandle1 = K2Node_MakeStruct_DataTableRowHandle1;
	Parms.K2Node_MakeStruct_DataTableRowHandle2 = K2Node_MakeStruct_DataTableRowHandle2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_MakeStruct_DataTableRowHandle3 = K2Node_MakeStruct_DataTableRowHandle3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_MakeStruct_DataTableRowHandle4 = K2Node_MakeStruct_DataTableRowHandle4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_MakeStruct_DataTableRowHandle5 = K2Node_MakeStruct_DataTableRowHandle5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   EvolutionItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>Results                                                          (Edit, BlueprintVisible, ZeroConstructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          (None)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRecipe>             CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue       (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipe                     CallFunc_Array_Get_Item1                                         (None)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetFirstEvolutionOption(class UFortItem** EvolutionItem, const TArray<struct FFortItemQuantityPair>& Results, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "GetFirstEvolutionOption");

	Params::UItemInspectScreen_C_GetFirstEvolutionOption_Params Parms{};

	Parms.Results = Results;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;
	Parms.CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue = CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EvolutionItem != nullptr)
		*EvolutionItem = Parms.EvolutionItem;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceSelected(class UFortItem* Item, int32 RecipeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceSelected");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceSelected_Params Parms{};

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceUnhovered(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceUnhovered");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceUnhovered_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceHovered(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceHovered");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceHovered_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleEvolution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolution");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleView
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleView(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleView");

	Params::UItemInspectScreen_C_HandleView_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleFavorite(bool* PassThrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleFavorite");

	Params::UItemInspectScreen_C_HandleFavorite_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleBack(bool* PassThrough, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleBack");

	Params::UItemInspectScreen_C_HandleBack_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.DialogResult_7EB32ED049ED082854D5738A81CFCAA2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::DialogResult_7EB32ED049ED082854D5738A81CFCAA2(enum class EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "DialogResult_7EB32ED049ED082854D5738A81CFCAA2");

	Params::UItemInspectScreen_C_DialogResult_7EB32ED049ED082854D5738A81CFCAA2_Params Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.DialogResult_3D444D7245BFED3F760CE49A5698A308
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::DialogResult_3D444D7245BFED3F760CE49A5698A308(enum class EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "DialogResult_3D444D7245BFED3F760CE49A5698A308");

	Params::UItemInspectScreen_C_DialogResult_3D444D7245BFED3F760CE49A5698A308_Params Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__DetailPanelTabListMinusPC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__DetailPanelTabListMinusPC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature_Params Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::OnInputModeChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "OnInputModeChanged");

	Params::UItemInspectScreen_C_OnInputModeChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToEvolve                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EvolutionIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature(class UFortItem* ItemToEvolve, int32 EvolutionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature_Params Parms{};

	Parms.ItemToEvolve = ItemToEvolve;
	Parms.EvolutionIndex = EvolutionIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleIsPreviewingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleIsPreviewingChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleIsPreviewingChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleDifferentItemToInspectSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleDifferentItemToInspectSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleDifferentItemToInspectSetBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleDifferentInspectionModeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleDifferentInspectionModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleDifferentInspectionModeSetBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleItemToInspectChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleItemToInspectChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleItemToInspectChangedBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleItemToInspectDestroyedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleItemToInspectDestroyedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleItemToInspectDestroyedBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnRemovedFromActivationStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "OnRemovedFromActivationStack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundHelp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::ShowRefundHelp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "ShowRefundHelp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleRefundItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HandleRefundItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "HandleRefundItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnRefundItemConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            ItemToRefund                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::OnRefundItemConfirmed(class UFortAccountItem* ItemToRefund)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "OnRefundItemConfirmed");

	Params::UItemInspectScreen_C_OnRefundItemConfirmed_Params Parms{};

	Parms.ItemToRefund = ItemToRefund;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectRefundRayImage_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectRefundRayImage_C*CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_Passthrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_ComponentBoundEvent_Item1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_RecipeIndex1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortItem*                   K2Node_ComponentBoundEvent_ItemToEvolve                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_EvolutionIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortItem*                   K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_RecipeIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetWindowTitleBarVisibility_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_PassThrough1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_MCPContextUpgradeItem*CallFunc_UpgradeItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            K2Node_CustomEvent_ItemToRefund                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowRefundMessage_ShouldShowRefundMessage         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ShouldShowRefundMessage_RefundDescriptionText           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConfirmationDialogAction>CallFunc_GetRefundHelpActions_ConfirmActions                     (ZeroConstructor, ReferenceParm)
// class FName                        CallFunc_GetRefundHelpActions_DeclineAction                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowConfirmationDialog_NUI_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::ExecuteUbergraph_ItemInspectScreen(int32 EntryPoint, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UItemInspectRefundRayImage_C* CallFunc_Create_ReturnValue, class UItemInspectRefundRayImage_C* CallFunc_Create_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HandleBack_Passthrough, class UFortItem* K2Node_ComponentBoundEvent_Item1, int32 K2Node_ComponentBoundEvent_RecipeIndex1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool K2Node_Event_bUsingGamepad, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortItem* K2Node_ComponentBoundEvent_ItemToEvolve, int32 K2Node_ComponentBoundEvent_EvolutionIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortItem* K2Node_ComponentBoundEvent_Item, int32 K2Node_ComponentBoundEvent_RecipeIndex, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility CallFunc_GetWindowTitleBarVisibility_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_HandleBack_PassThrough1, class UFortAsyncAction_MCPContextUpgradeItem* CallFunc_UpgradeItem_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, class UFortAccountItem* K2Node_CustomEvent_ItemToRefund, bool CallFunc_ShouldShowRefundMessage_ShouldShowRefundMessage, class FText CallFunc_ShouldShowRefundMessage_RefundDescriptionText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, TArray<struct FConfirmationDialogAction>& CallFunc_GetRefundHelpActions_ConfirmActions, class FName CallFunc_GetRefundHelpActions_DeclineAction, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, class UFortMcpContext* CallFunc_GetContext_ReturnValue6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectScreen_C", "ExecuteUbergraph_ItemInspectScreen");

	Params::UItemInspectScreen_C_ExecuteUbergraph_ItemInspectScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_HandleBack_Passthrough = CallFunc_HandleBack_Passthrough;
	Parms.K2Node_ComponentBoundEvent_Item1 = K2Node_ComponentBoundEvent_Item1;
	Parms.K2Node_ComponentBoundEvent_RecipeIndex1 = K2Node_ComponentBoundEvent_RecipeIndex1;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Result1 = K2Node_CustomEvent_Result1;
	Parms.K2Node_CustomEvent_ResultName1 = K2Node_CustomEvent_ResultName1;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_GetCycleWidget_ReturnValue = CallFunc_GetCycleWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetCycleWidget_ReturnValue1 = CallFunc_GetCycleWidget_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_ComponentBoundEvent_ItemToEvolve = K2Node_ComponentBoundEvent_ItemToEvolve;
	Parms.K2Node_ComponentBoundEvent_EvolutionIndex = K2Node_ComponentBoundEvent_EvolutionIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_RecipeIndex = K2Node_ComponentBoundEvent_RecipeIndex;
	Parms.CallFunc_GetCycleWidget_ReturnValue2 = CallFunc_GetCycleWidget_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWindowTitleBarVisibility_ReturnValue = CallFunc_GetWindowTitleBarVisibility_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_HandleBack_PassThrough1 = CallFunc_HandleBack_PassThrough1;
	Parms.CallFunc_UpgradeItem_ReturnValue = CallFunc_UpgradeItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_ItemToRefund = K2Node_CustomEvent_ItemToRefund;
	Parms.CallFunc_ShouldShowRefundMessage_ShouldShowRefundMessage = CallFunc_ShouldShowRefundMessage_ShouldShowRefundMessage;
	Parms.CallFunc_ShouldShowRefundMessage_RefundDescriptionText = CallFunc_ShouldShowRefundMessage_RefundDescriptionText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetRefundHelpActions_ConfirmActions = CallFunc_GetRefundHelpActions_ConfirmActions;
	Parms.CallFunc_GetRefundHelpActions_DeclineAction = CallFunc_GetRefundHelpActions_DeclineAction;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_ShowConfirmationDialog_NUI_ReturnValue = CallFunc_ShowConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;

	UObject::ProcessEvent(Func, &Parms);

}

}


