#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_DUDEBRO_TargetedForSummon.GC_DUDEBRO_TargetedForSummon_C
// (Actor)

class UClass* AGC_DUDEBRO_TargetedForSummon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_DUDEBRO_TargetedForSummon_C");

	return Clss;
}


// GC_DUDEBRO_TargetedForSummon_C GC_DUDEBRO_TargetedForSummon.Default__GC_DUDEBRO_TargetedForSummon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_DUDEBRO_TargetedForSummon_C* AGC_DUDEBRO_TargetedForSummon_C::GetDefaultObj()
{
	static class AGC_DUDEBRO_TargetedForSummon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_DUDEBRO_TargetedForSummon_C*>(AGC_DUDEBRO_TargetedForSummon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_DUDEBRO_TargetedForSummon.GC_DUDEBRO_TargetedForSummon_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGC_DUDEBRO_TargetedForSummon_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_DUDEBRO_TargetedForSummon_C", "OnActive");

	Params::AGC_DUDEBRO_TargetedForSummon_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_DUDEBRO_TargetedForSummon.GC_DUDEBRO_TargetedForSummon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_DUDEBRO_TargetedForSummon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_DUDEBRO_TargetedForSummon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GC_DUDEBRO_TargetedForSummon.GC_DUDEBRO_TargetedForSummon_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_DUDEBRO_TargetedForSummon_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_DUDEBRO_TargetedForSummon_C", "K2_HandleGameplayCue");

	Params::AGC_DUDEBRO_TargetedForSummon_C_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_DUDEBRO_TargetedForSummon.GC_DUDEBRO_TargetedForSummon_C.ExecuteUbergraph_GC_DUDEBRO_TargetedForSummon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_Event_EventType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)

void AGC_DUDEBRO_TargetedForSummon_C::ExecuteUbergraph_GC_DUDEBRO_TargetedForSummon(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_DUDEBRO_TargetedForSummon_C", "ExecuteUbergraph_GC_DUDEBRO_TargetedForSummon");

	Params::AGC_DUDEBRO_TargetedForSummon_C_ExecuteUbergraph_GC_DUDEBRO_TargetedForSummon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;

	UObject::ProcessEvent(Func, &Parms);

}

}


