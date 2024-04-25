#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C
// (None)

class UClass* UExpeditionSquadSlotPopupMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExpeditionSquadSlotPopupMenu_C");

	return Clss;
}


// ExpeditionSquadSlotPopupMenu_C ExpeditionSquadSlotPopupMenu.Default__ExpeditionSquadSlotPopupMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExpeditionSquadSlotPopupMenu_C* UExpeditionSquadSlotPopupMenu_C::GetDefaultObj()
{
	static class UExpeditionSquadSlotPopupMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExpeditionSquadSlotPopupMenu_C*>(UExpeditionSquadSlotPopupMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.GetItemInSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSquadSlotSelectorButton*CallFunc_GetHostButton_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInSquadSlotBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExpeditionSquadSlotPopupMenu_C::GetItemInSlot(class UFortItem** Item, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "GetItemInSlot");

	Params::UExpeditionSquadSlotPopupMenu_C_GetItemInSlot_Params Parms{};

	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_GetHostButton_ReturnValue = CallFunc_GetHostButton_ReturnValue;
	Parms.CallFunc_GetItemInSquadSlotBP_ReturnValue = CallFunc_GetItemInSquadSlotBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotPopupMenu_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExpeditionSquadSlotPopupMenu_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	Params::UExpeditionSquadSlotPopupMenu_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.OnBeginOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotPopupMenu_C::OnBeginOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "OnBeginOutro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotPopupMenu_C::OnBeginIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "OnBeginIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExpeditionSquadSlotPopupMenu_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature");

	Params::UExpeditionSquadSlotPopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExpeditionSquadSlotPopupMenu_C::BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature");

	Params::UExpeditionSquadSlotPopupMenu_C_BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotPopupMenu_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.HandlePostDifferentContextProviderSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotPopupMenu_C::HandlePostDifferentContextProviderSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "HandlePostDifferentContextProviderSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotPopupMenu_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UExpeditionSquadSlotPopupMenu_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.ExecuteUbergraph_ExpeditionSquadSlotPopupMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSquadSlotSelectorButton*CallFunc_GetHostButton_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInSlot_Item                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInSlot_Item1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExpeditionSquadSlotPopupMenu_C::ExecuteUbergraph_ExpeditionSquadSlotPopupMenu(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_SwitchEnum_CmpSuccess, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue, class UFortItem* CallFunc_GetItemInSlot_Item, bool CallFunc_IsValid_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, class UFortItem* CallFunc_GetItemInSlot_Item1, class UWidget* CallFunc_GetChildAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpeditionSquadSlotPopupMenu_C", "ExecuteUbergraph_ExpeditionSquadSlotPopupMenu");

	Params::UExpeditionSquadSlotPopupMenu_C_ExecuteUbergraph_ExpeditionSquadSlotPopupMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetHostButton_ReturnValue = CallFunc_GetHostButton_ReturnValue;
	Parms.CallFunc_GetItemInSlot_Item = CallFunc_GetItemInSlot_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue1 = CallFunc_GetUINavigationManager_ReturnValue1;
	Parms.CallFunc_GetItemInSlot_Item1 = CallFunc_GetItemInSlot_Item1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


