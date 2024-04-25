#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectRefundConfirmationModalWidget.ItemInspectRefundConfirmationModalWidget_C
// (None)

class UClass* UItemInspectRefundConfirmationModalWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectRefundConfirmationModalWidget_C");

	return Clss;
}


// ItemInspectRefundConfirmationModalWidget_C ItemInspectRefundConfirmationModalWidget.Default__ItemInspectRefundConfirmationModalWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectRefundConfirmationModalWidget_C* UItemInspectRefundConfirmationModalWidget_C::GetDefaultObj()
{
	static class UItemInspectRefundConfirmationModalWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectRefundConfirmationModalWidget_C*>(UItemInspectRefundConfirmationModalWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemInspectRefundConfirmationModalWidget.ItemInspectRefundConfirmationModalWidget_C.SetItemToRefund
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            InItemToRefund                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            InRefundResultItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue1                                     (None)

void UItemInspectRefundConfirmationModalWidget_C::SetItemToRefund(class UFortAccountItem* InItemToRefund, class UFortAccountItem* InRefundResultItem, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundConfirmationModalWidget_C", "SetItemToRefund");

	Params::UItemInspectRefundConfirmationModalWidget_C_SetItemToRefund_Params Parms{};

	Parms.InItemToRefund = InItemToRefund;
	Parms.InRefundResultItem = InRefundResultItem;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue1 = CallFunc_GetLevel_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundConfirmationModalWidget.ItemInspectRefundConfirmationModalWidget_C.SetHostScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemInspectScreen_C*        InHostScreen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundConfirmationModalWidget_C::SetHostScreen(class UItemInspectScreen_C* InHostScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundConfirmationModalWidget_C", "SetHostScreen");

	Params::UItemInspectRefundConfirmationModalWidget_C_SetHostScreen_Params Parms{};

	Parms.InHostScreen = InHostScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundConfirmationModalWidget.ItemInspectRefundConfirmationModalWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundConfirmationModalWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundConfirmationModalWidget_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectRefundConfirmationModalWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundConfirmationModalWidget.ItemInspectRefundConfirmationModalWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectRefundConfirmationModalWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundConfirmationModalWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectRefundConfirmationModalWidget.ItemInspectRefundConfirmationModalWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectRefundConfirmationModalWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundConfirmationModalWidget_C", "PreConstruct");

	Params::UItemInspectRefundConfirmationModalWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundConfirmationModalWidget.ItemInspectRefundConfirmationModalWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectRefundConfirmationModalWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundConfirmationModalWidget_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectRefundConfirmationModalWidget.ItemInspectRefundConfirmationModalWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundConfirmationModalWidget_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundConfirmationModalWidget_C", "BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectRefundConfirmationModalWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundConfirmationModalWidget.ItemInspectRefundConfirmationModalWidget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectRefundConfirmationModalWidget_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundConfirmationModalWidget_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemInspectRefundConfirmationModalWidget.ItemInspectRefundConfirmationModalWidget_C.ExecuteUbergraph_ItemInspectRefundConfirmationModalWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundConfirmationModalWidget_C::ExecuteUbergraph_ItemInspectRefundConfirmationModalWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectRefundConfirmationModalWidget_C", "ExecuteUbergraph_ItemInspectRefundConfirmationModalWidget");

	Params::UItemInspectRefundConfirmationModalWidget_C_ExecuteUbergraph_ItemInspectRefundConfirmationModalWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;

	UObject::ProcessEvent(Func, &Parms);

}

}


