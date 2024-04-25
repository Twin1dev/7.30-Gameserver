#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PCB_InfoPannel.PCB_InfoPannel_C
// (None)

class UClass* UPCB_InfoPannel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCB_InfoPannel_C");

	return Clss;
}


// PCB_InfoPannel_C PCB_InfoPannel.Default__PCB_InfoPannel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPCB_InfoPannel_C* UPCB_InfoPannel_C::GetDefaultObj()
{
	static class UPCB_InfoPannel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCB_InfoPannel_C*>(UPCB_InfoPannel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PCB_InfoPannel.PCB_InfoPannel_C.CmsDataRead
// (Event, Public, BlueprintEvent)
// Parameters:

void UPCB_InfoPannel_C::CmsDataRead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCB_InfoPannel_C", "CmsDataRead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PCB_InfoPannel.PCB_InfoPannel_C.ExecuteUbergraph_PCB_InfoPannel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPCBHeader_ReturnValue                                (None)
// class FText                        CallFunc_GetPCBDescription_ReturnValue                           (None)

void UPCB_InfoPannel_C::ExecuteUbergraph_PCB_InfoPannel(int32 EntryPoint, class FText CallFunc_GetPCBHeader_ReturnValue, class FText CallFunc_GetPCBDescription_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCB_InfoPannel_C", "ExecuteUbergraph_PCB_InfoPannel");

	Params::UPCB_InfoPannel_C_ExecuteUbergraph_PCB_InfoPannel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPCBHeader_ReturnValue = CallFunc_GetPCBHeader_ReturnValue;
	Parms.CallFunc_GetPCBDescription_ReturnValue = CallFunc_GetPCBDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


