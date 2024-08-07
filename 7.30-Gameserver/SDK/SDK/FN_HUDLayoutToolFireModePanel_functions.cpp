#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C
// (None)

class UClass* UHUDLayoutToolFireModePanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDLayoutToolFireModePanel_C");

	return Clss;
}


// HUDLayoutToolFireModePanel_C HUDLayoutToolFireModePanel.Default__HUDLayoutToolFireModePanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDLayoutToolFireModePanel_C* UHUDLayoutToolFireModePanel_C::GetDefaultObj()
{
	static class UHUDLayoutToolFireModePanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDLayoutToolFireModePanel_C*>(UHUDLayoutToolFireModePanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.IsInCustomMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsCustom                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolFireModePanel_C::IsInCustomMode(bool* IsCustom, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "IsInCustomMode");

	Params::UHUDLayoutToolFireModePanel_C_IsInCustomMode_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCustom != nullptr)
		*IsCustom = Parms.IsCustom;

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomFireMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolFireModePanel_C::SetCustomFireMode(class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "SetCustomFireMode");

	Params::UHUDLayoutToolFireModePanel_C_SetCustomFireMode_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomModeVisibilities
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFireModeAvailable_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFireModeAvailable_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFireModeAvailable_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFireModeAvailable_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFireModeType           CallFunc_GetFireMode_FireMode                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFireMode_bAutofireEnabled                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFireMode_bForceTouchEnabled                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFireMode_bTapToShootEnabled                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFireMode_bAlwaysShowDedicatedButton                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolFireModePanel_C::SetCustomModeVisibilities(enum class ESlateVisibility Temp_byte_Variable, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsFireModeAvailable_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsFireModeAvailable_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsFireModeAvailable_ReturnValue2, enum class ESlateVisibility K2Node_Select1_Default, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable7, bool Temp_bool_Variable3, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue3, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsFireModeAvailable_ReturnValue3, enum class EFireModeType CallFunc_GetFireMode_FireMode, bool CallFunc_GetFireMode_bAutofireEnabled, bool CallFunc_GetFireMode_bForceTouchEnabled, bool CallFunc_GetFireMode_bTapToShootEnabled, bool CallFunc_GetFireMode_bAlwaysShowDedicatedButton, enum class ESlateVisibility K2Node_Select3_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "SetCustomModeVisibilities");

	Params::UHUDLayoutToolFireModePanel_C_SetCustomModeVisibilities_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsFireModeAvailable_ReturnValue = CallFunc_IsFireModeAvailable_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsFireModeAvailable_ReturnValue1 = CallFunc_IsFireModeAvailable_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsFireModeAvailable_ReturnValue2 = CallFunc_IsFireModeAvailable_ReturnValue2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_IsFireModeAvailable_ReturnValue3 = CallFunc_IsFireModeAvailable_ReturnValue3;
	Parms.CallFunc_GetFireMode_FireMode = CallFunc_GetFireMode_FireMode;
	Parms.CallFunc_GetFireMode_bAutofireEnabled = CallFunc_GetFireMode_bAutofireEnabled;
	Parms.CallFunc_GetFireMode_bForceTouchEnabled = CallFunc_GetFireMode_bForceTouchEnabled;
	Parms.CallFunc_GetFireMode_bTapToShootEnabled = CallFunc_GetFireMode_bTapToShootEnabled;
	Parms.CallFunc_GetFireMode_bAlwaysShowDedicatedButton = CallFunc_GetFireMode_bAlwaysShowDedicatedButton;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UHUDLayoutToolFireModePanel_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "OnMouseButtonDown_0");

	Params::UHUDLayoutToolFireModePanel_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitButtonBindings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UHUDLayoutToolFireModeButton*>ArrayOfFireModeButtons                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolFireModeButton*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFireModeSelectTile_C*       K2Node_DynamicCast_AsFire_Mode_Select_Tile                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UHUDLayoutToolFireModePanel_C::InitButtonBindings(TArray<class UHUDLayoutToolFireModeButton*>& ArrayOfFireModeButtons, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UHUDLayoutToolFireModeButton* CallFunc_Array_Get_Item, class UFireModeSelectTile_C* K2Node_DynamicCast_AsFire_Mode_Select_Tile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "InitButtonBindings");

	Params::UHUDLayoutToolFireModePanel_C_InitButtonBindings_Params Parms{};

	Parms.ArrayOfFireModeButtons = ArrayOfFireModeButtons;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFire_Mode_Select_Tile = K2Node_DynamicCast_AsFire_Mode_Select_Tile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleCurSelectedTile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*       Tile                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolFireModePanel_C::HandleCurSelectedTile(class UFireModeSelectTile_C* Tile, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "HandleCurSelectedTile");

	Params::UHUDLayoutToolFireModePanel_C_HandleCurSelectedTile_Params Parms{};

	Parms.Tile = Tile;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitializeSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutToolFireModePanel_C::InitializeSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "InitializeSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.PlayCurFocusedTileMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*       CurFocusedTile                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFireModeSelectTile_C*       NextPanelToPlay                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolFireModeButton*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFireModeSelectTile_C*       K2Node_DynamicCast_AsFire_Mode_Select_Tile                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolFireModePanel_C::PlayCurFocusedTileMovie(class UFireModeSelectTile_C* CurFocusedTile, class UFireModeSelectTile_C* NextPanelToPlay, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UHUDLayoutToolFireModeButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFireModeSelectTile_C* K2Node_DynamicCast_AsFire_Mode_Select_Tile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "PlayCurFocusedTileMovie");

	Params::UHUDLayoutToolFireModePanel_C_PlayCurFocusedTileMovie_Params Parms{};

	Parms.CurFocusedTile = CurFocusedTile;
	Parms.NextPanelToPlay = NextPanelToPlay;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsFire_Mode_Select_Tile = K2Node_DynamicCast_AsFire_Mode_Select_Tile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleTileButtonFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*       Tile                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolFireModePanel_C::HandleTileButtonFocused(class UFireModeSelectTile_C* Tile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "HandleTileButtonFocused");

	Params::UHUDLayoutToolFireModePanel_C_HandleTileButtonFocused_Params Parms{};

	Parms.Tile = Tile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.NewTileSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*       Tile                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolFireModePanel_C::NewTileSelected(class UFireModeSelectTile_C* Tile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "NewTileSelected");

	Params::UHUDLayoutToolFireModePanel_C_NewTileSelected_Params Parms{};

	Parms.Tile = Tile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetOpenState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewOpenState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolFireModePanel_C::SetOpenState(bool bNewOpenState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "SetOpenState");

	Params::UHUDLayoutToolFireModePanel_C_SetOpenState_Params Parms{};

	Parms.bNewOpenState = bNewOpenState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolFireModePanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolFireModePanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDLayoutToolFireModePanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolFireModePanel_C::BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolFireModePanel_C_BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolFireModePanel_C::BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolFireModePanel_C_BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolFireModePanel_C::BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolFireModePanel_C_BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnFire Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFireModeType           NewFireMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolFireModePanel_C::OnFire_Mode_Changed(enum class EFireModeType NewFireMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "OnFire Mode Changed");

	Params::UHUDLayoutToolFireModePanel_C_OnFire_Mode_Changed_Params Parms{};

	Parms.NewFireMode = NewFireMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.ExecuteUbergraph_HUDLayoutToolFireModePanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFireModeSelectTile_C*       K2Node_CustomEvent_Tile1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UHUDLayoutToolFireModeButton*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_GetFireModeDescription_ReturnValue                      (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFireModeSelectTile_C*       K2Node_CustomEvent_Tile                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewOpenState                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInCustomMode_IsCustom                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInCustomMode_IsCustom1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFireModeType           K2Node_CustomEvent_NewFireMode                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInCustomMode_IsCustom2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolFireModePanel_C::ExecuteUbergraph_HUDLayoutToolFireModePanel(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFireModeSelectTile_C* K2Node_CustomEvent_Tile1, TArray<class UHUDLayoutToolFireModeButton*>& K2Node_MakeArray_Array, class FText CallFunc_GetFireModeDescription_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFireModeSelectTile_C* K2Node_CustomEvent_Tile, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_bNewOpenState, bool CallFunc_IsValid_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button2, enum class ESlateVisibility Temp_byte_Variable2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable1, bool CallFunc_IsInCustomMode_IsCustom, bool CallFunc_IsInCustomMode_IsCustom1, enum class ESlateVisibility K2Node_Select_Default, enum class EFireModeType K2Node_CustomEvent_NewFireMode, bool CallFunc_IsInCustomMode_IsCustom2, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModePanel_C", "ExecuteUbergraph_HUDLayoutToolFireModePanel");

	Params::UHUDLayoutToolFireModePanel_C_ExecuteUbergraph_HUDLayoutToolFireModePanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_CustomEvent_Tile1 = K2Node_CustomEvent_Tile1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetFireModeDescription_ReturnValue = CallFunc_GetFireModeDescription_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Tile = K2Node_CustomEvent_Tile;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_bNewOpenState = K2Node_Event_bNewOpenState;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue1 = CallFunc_PlayAnimation_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_IsInCustomMode_IsCustom = CallFunc_IsInCustomMode_IsCustom;
	Parms.CallFunc_IsInCustomMode_IsCustom1 = CallFunc_IsInCustomMode_IsCustom1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_NewFireMode = K2Node_CustomEvent_NewFireMode;
	Parms.CallFunc_IsInCustomMode_IsCustom2 = CallFunc_IsInCustomMode_IsCustom2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


