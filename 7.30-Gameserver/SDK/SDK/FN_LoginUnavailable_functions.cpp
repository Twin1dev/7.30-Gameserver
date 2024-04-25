#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoginUnavailable.LoginUnavailable_C
// (None)

class UClass* ULoginUnavailable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginUnavailable_C");

	return Clss;
}


// LoginUnavailable_C LoginUnavailable.Default__LoginUnavailable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoginUnavailable_C* ULoginUnavailable_C::GetDefaultObj()
{
	static class ULoginUnavailable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginUnavailable_C*>(ULoginUnavailable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoginUnavailable.LoginUnavailable_C.BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginUnavailable_C::BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginUnavailable_C", "BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::ULoginUnavailable_C_BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginUnavailable.LoginUnavailable_C.OnMessageSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bDisableMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginUnavailable_C::OnMessageSet(bool bDisableMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginUnavailable_C", "OnMessageSet");

	Params::ULoginUnavailable_C_OnMessageSet_Params Parms{};

	Parms.bDisableMessage = bDisableMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginUnavailable.LoginUnavailable_C.ExecuteUbergraph_LoginUnavailable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bDisableMessage                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginUnavailable_C::ExecuteUbergraph_LoginUnavailable(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bDisableMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginUnavailable_C", "ExecuteUbergraph_LoginUnavailable");

	Params::ULoginUnavailable_C_ExecuteUbergraph_LoginUnavailable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_bDisableMessage = K2Node_Event_bDisableMessage;

	UObject::ProcessEvent(Func, &Parms);

}

}


