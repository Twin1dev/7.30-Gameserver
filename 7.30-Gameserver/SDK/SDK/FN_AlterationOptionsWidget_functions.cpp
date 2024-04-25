#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AlterationOptionsWidget.AlterationOptionsWidget_C
// (None)

class UClass* UAlterationOptionsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlterationOptionsWidget_C");

	return Clss;
}


// AlterationOptionsWidget_C AlterationOptionsWidget.Default__AlterationOptionsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlterationOptionsWidget_C* UAlterationOptionsWidget_C::GetDefaultObj()
{
	static class UAlterationOptionsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlterationOptionsWidget_C*>(UAlterationOptionsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UnbindChildren
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Panel                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_DynamicCast_AsCommon_Button                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::UnbindChildren(class UPanelWidget* Panel, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "UnbindChildren");

	Params::UAlterationOptionsWidget_C_UnbindChildren_Params Parms{};

	Parms.Panel = Panel;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommon_Button = K2Node_DynamicCast_AsCommon_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearAndUnbindOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UVerticalBox*>        K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::ClearAndUnbindOptions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UVerticalBox*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UVerticalBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "ClearAndUnbindOptions");

	Params::UAlterationOptionsWidget_C_ClearAndUnbindOptions_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "SetScrollWidget");

	Params::UAlterationOptionsWidget_C_SetScrollWidget_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ShouldShowNoOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidAlterationSlot_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoAnyAlterationsExist_OptionsExist                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAlterationOptionsWidget_C::ShouldShowNoOptions(bool CallFunc_IsValidAlterationSlot_ReturnValue, bool CallFunc_DoAnyAlterationsExist_OptionsExist, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "ShouldShowNoOptions");

	Params::UAlterationOptionsWidget_C_ShouldShowNoOptions_Params Parms{};

	Parms.CallFunc_IsValidAlterationSlot_ReturnValue = CallFunc_IsValidAlterationSlot_ReturnValue;
	Parms.CallFunc_DoAnyAlterationsExist_OptionsExist = CallFunc_DoAnyAlterationsExist_OptionsExist;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.DoAnyAlterationsExist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OptionsExist                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoAlterationOptionsExist_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoAlterationOptionsExist_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::DoAnyAlterationsExist(bool* OptionsExist, bool CallFunc_DoAlterationOptionsExist_ReturnValue, bool CallFunc_DoAlterationOptionsExist_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "DoAnyAlterationsExist");

	Params::UAlterationOptionsWidget_C_DoAnyAlterationsExist_Params Parms{};

	Parms.CallFunc_DoAlterationOptionsExist_ReturnValue = CallFunc_DoAlterationOptionsExist_ReturnValue;
	Parms.CallFunc_DoAlterationOptionsExist_ReturnValue1 = CallFunc_DoAlterationOptionsExist_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OptionsExist != nullptr)
		*OptionsExist = Parms.OptionsExist;

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.AddAlterationOptionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortAlterationOptionTypeOptionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationOption*       OptionWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EFortAlterationOptionTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::AddAlterationOptionWidget(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortAlterationOptionType Temp_byte_Variable, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "AddAlterationOptionWidget");

	Params::UAlterationOptionsWidget_C_AddAlterationOptionWidget_Params Parms{};

	Parms.OptionType = OptionType;
	Parms.OptionWidget = OptionWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearOptionsAndInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIntroAlteration                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowNoOptions_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoAlterationOptionsExist_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoAlterationOptionsExist_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::ClearOptionsAndInitialize(bool bIntroAlteration, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool CallFunc_ShouldShowNoOptions_ReturnValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default, bool CallFunc_DoAlterationOptionsExist_ReturnValue, bool CallFunc_DoAlterationOptionsExist_ReturnValue1, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, enum class ESlateVisibility K2Node_Select5_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "ClearOptionsAndInitialize");

	Params::UAlterationOptionsWidget_C_ClearOptionsAndInitialize_Params Parms{};

	Parms.bIntroAlteration = bIntroAlteration;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_ShouldShowNoOptions_ReturnValue = CallFunc_ShouldShowNoOptions_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_DoAlterationOptionsExist_ReturnValue = CallFunc_DoAlterationOptionsExist_ReturnValue;
	Parms.CallFunc_DoAlterationOptionsExist_ReturnValue1 = CallFunc_DoAlterationOptionsExist_ReturnValue1;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIntroAlterations                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::OnItemChanged(bool bIntroAlterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "OnItemChanged");

	Params::UAlterationOptionsWidget_C_OnItemChanged_Params Parms{};

	Parms.bIntroAlterations = bIntroAlterations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnGenerateOption
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortAlterationOptionTypeOptionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationOption*       OptionWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsWidget_C::OnGenerateOption(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "OnGenerateOption");

	Params::UAlterationOptionsWidget_C_OnGenerateOption_Params Parms{};

	Parms.OptionType = OptionType;
	Parms.OptionWidget = OptionWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAlterationOptionsWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::OnOptionSelected(class UCommonButton* SelectedOption, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "OnOptionSelected");

	Params::UAlterationOptionsWidget_C_OnOptionSelected_Params Parms{};

	Parms.SelectedOption = SelectedOption;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ExecuteUbergraph_AlterationOptionsWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIntroAlterations                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortAlterationOptionTypeK2Node_Event_OptionType                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationOption*       K2Node_Event_OptionWidget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_SelectedOption                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsWidget_C::ExecuteUbergraph_AlterationOptionsWidget(int32 EntryPoint, bool K2Node_Event_bIntroAlterations, enum class EFortAlterationOptionType K2Node_Event_OptionType, class UFortAlterationOption* K2Node_Event_OptionWidget, class UCommonButton* K2Node_CustomEvent_SelectedOption, bool K2Node_CustomEvent_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationOptionsWidget_C", "ExecuteUbergraph_AlterationOptionsWidget");

	Params::UAlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIntroAlterations = K2Node_Event_bIntroAlterations;
	Parms.K2Node_Event_OptionType = K2Node_Event_OptionType;
	Parms.K2Node_Event_OptionWidget = K2Node_Event_OptionWidget;
	Parms.K2Node_CustomEvent_SelectedOption = K2Node_CustomEvent_SelectedOption;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;

	UObject::ProcessEvent(Func, &Parms);

}

}


