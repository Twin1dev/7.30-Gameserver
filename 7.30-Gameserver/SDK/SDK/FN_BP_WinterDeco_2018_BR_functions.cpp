#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C
// (Actor)

class UClass* ABP_WinterDeco_2018_BR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WinterDeco_2018_BR_C");

	return Clss;
}


// BP_WinterDeco_2018_BR_C BP_WinterDeco_2018_BR.Default__BP_WinterDeco_2018_BR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WinterDeco_2018_BR_C* ABP_WinterDeco_2018_BR_C::GetDefaultObj()
{
	static class ABP_WinterDeco_2018_BR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WinterDeco_2018_BR_C*>(ABP_WinterDeco_2018_BR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WinterDeco_2018_BR_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WinterDeco_2018_BR_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C.OnEventEnded_60D069544B14128930DDA499E61B26E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WinterDeco_2018_BR_C::OnEventEnded_60D069544B14128930DDA499E61B26E0(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WinterDeco_2018_BR_C", "OnEventEnded_60D069544B14128930DDA499E61B26E0");

	Params::ABP_WinterDeco_2018_BR_C_OnEventEnded_60D069544B14128930DDA499E61B26E0_Params Parms{};

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C.OnEventUpdated_60D069544B14128930DDA499E61B26E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WinterDeco_2018_BR_C::OnEventUpdated_60D069544B14128930DDA499E61B26E0(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WinterDeco_2018_BR_C", "OnEventUpdated_60D069544B14128930DDA499E61B26E0");

	Params::ABP_WinterDeco_2018_BR_C_OnEventUpdated_60D069544B14128930DDA499E61B26E0_Params Parms{};

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C.OnEventActive_60D069544B14128930DDA499E61B26E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WinterDeco_2018_BR_C::OnEventActive_60D069544B14128930DDA499E61B26E0(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WinterDeco_2018_BR_C", "OnEventActive_60D069544B14128930DDA499E61B26E0");

	Params::ABP_WinterDeco_2018_BR_C_OnEventActive_60D069544B14128930DDA499E61B26E0_Params Parms{};

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WinterDeco_2018_BR_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WinterDeco_2018_BR_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C.ExecuteUbergraph_BP_WinterDeco_2018_BR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventName2                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd2                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName1                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class UFortAsyncAction_CalendarEventWatcher*CallFunc_WatchCalendarEvent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WinterDeco_2018_BR_C::ExecuteUbergraph_BP_WinterDeco_2018_BR(int32 EntryPoint, const class FString& K2Node_CustomEvent_EventName2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin2, float K2Node_CustomEvent_TimeSpanRatio2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin1, float K2Node_CustomEvent_TimeSpanRatio1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, float K2Node_CustomEvent_TimeSpanRatio, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, float Temp_float_Variable, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable1, const class FString& Temp_string_Variable, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WinterDeco_2018_BR_C", "ExecuteUbergraph_BP_WinterDeco_2018_BR");

	Params::ABP_WinterDeco_2018_BR_C_ExecuteUbergraph_BP_WinterDeco_2018_BR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventName2 = K2Node_CustomEvent_EventName2;
	Parms.K2Node_CustomEvent_TimeUntilEnd2 = K2Node_CustomEvent_TimeUntilEnd2;
	Parms.K2Node_CustomEvent_TimeSinceBegin2 = K2Node_CustomEvent_TimeSinceBegin2;
	Parms.K2Node_CustomEvent_TimeSpanRatio2 = K2Node_CustomEvent_TimeSpanRatio2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventName1 = K2Node_CustomEvent_EventName1;
	Parms.K2Node_CustomEvent_TimeUntilEnd1 = K2Node_CustomEvent_TimeUntilEnd1;
	Parms.K2Node_CustomEvent_TimeSinceBegin1 = K2Node_CustomEvent_TimeSinceBegin1;
	Parms.K2Node_CustomEvent_TimeSpanRatio1 = K2Node_CustomEvent_TimeSpanRatio1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_EventName = K2Node_CustomEvent_EventName;
	Parms.K2Node_CustomEvent_TimeUntilEnd = K2Node_CustomEvent_TimeUntilEnd;
	Parms.K2Node_CustomEvent_TimeSinceBegin = K2Node_CustomEvent_TimeSinceBegin;
	Parms.K2Node_CustomEvent_TimeSpanRatio = K2Node_CustomEvent_TimeSpanRatio;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_WatchCalendarEvent_ReturnValue = CallFunc_WatchCalendarEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


