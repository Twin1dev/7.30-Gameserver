#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabGameOptionsMain.TabGameOptionsMain_C
// (None)

class UClass* UTabGameOptionsMain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabGameOptionsMain_C");

	return Clss;
}


// TabGameOptionsMain_C TabGameOptionsMain.Default__TabGameOptionsMain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabGameOptionsMain_C* UTabGameOptionsMain_C::GetDefaultObj()
{
	static class UTabGameOptionsMain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabGameOptionsMain_C*>(UTabGameOptionsMain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsMain_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdatePossibleLanguages
// (Event, Public, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::UpdatePossibleLanguages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsMain_C", "UpdatePossibleLanguages");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsMain_C", "CenterOnTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsMain_C", "UpdateOptionsTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Setting Value Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::Setting_Value_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsMain_C", "Setting Value Changed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.ExecuteUbergraph_TabGameOptionsMain
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsMenuSetting*     K2Node_DynamicCast_AsFort_Options_Menu_Setting                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsMenuSetting*     K2Node_DynamicCast_AsFort_Options_Menu_Setting1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGameOptionsMain_C::ExecuteUbergraph_TabGameOptionsMain(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget1, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting1, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabGameOptionsMain_C", "ExecuteUbergraph_TabGameOptionsMain");

	Params::UTabGameOptionsMain_C_ExecuteUbergraph_TabGameOptionsMain_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Widget1 = K2Node_ComponentBoundEvent_Widget1;
	Parms.K2Node_DynamicCast_AsFort_Options_Menu_Setting = K2Node_DynamicCast_AsFort_Options_Menu_Setting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsFort_Options_Menu_Setting1 = K2Node_DynamicCast_AsFort_Options_Menu_Setting1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}


