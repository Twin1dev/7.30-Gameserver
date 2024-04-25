#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReportablePlayerEntry.ReportablePlayerEntry_C
// (None)

class UClass* UReportablePlayerEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReportablePlayerEntry_C");

	return Clss;
}


// ReportablePlayerEntry_C ReportablePlayerEntry.Default__ReportablePlayerEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReportablePlayerEntry_C* UReportablePlayerEntry_C::GetDefaultObj()
{
	static class UReportablePlayerEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReportablePlayerEntry_C*>(UReportablePlayerEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReportablePlayerEntry.ReportablePlayerEntry_C.SetSelectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAnimateOnSelect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportablePlayerEntry_C::SetSelectionState(bool bIsSelected, bool bAnimateOnSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReportablePlayerEntry_C", "SetSelectionState");

	Params::UReportablePlayerEntry_C_SetSelectionState_Params Parms{};

	Parms.bIsSelected = bIsSelected;
	Parms.bAnimateOnSelect = bAnimateOnSelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReportablePlayerEntry.ReportablePlayerEntry_C.ExecuteUbergraph_ReportablePlayerEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAnimateOnSelect                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportablePlayerEntry_C::ExecuteUbergraph_ReportablePlayerEntry(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bAnimateOnSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReportablePlayerEntry_C", "ExecuteUbergraph_ReportablePlayerEntry");

	Params::UReportablePlayerEntry_C_ExecuteUbergraph_ReportablePlayerEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bAnimateOnSelect = K2Node_Event_bAnimateOnSelect;

	UObject::ProcessEvent(Func, &Parms);

}

}


