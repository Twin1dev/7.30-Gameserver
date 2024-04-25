#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Perk_NightStalker_Active_Looping.GC_Perk_NightStalker_Active_Looping_C
// (Actor)

class UClass* AGC_Perk_NightStalker_Active_Looping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Perk_NightStalker_Active_Looping_C");

	return Clss;
}


// GC_Perk_NightStalker_Active_Looping_C GC_Perk_NightStalker_Active_Looping.Default__GC_Perk_NightStalker_Active_Looping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Perk_NightStalker_Active_Looping_C* AGC_Perk_NightStalker_Active_Looping_C::GetDefaultObj()
{
	static class AGC_Perk_NightStalker_Active_Looping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Perk_NightStalker_Active_Looping_C*>(AGC_Perk_NightStalker_Active_Looping_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Perk_NightStalker_Active_Looping.GC_Perk_NightStalker_Active_Looping_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_Perk_NightStalker_Active_Looping_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Perk_NightStalker_Active_Looping_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GC_Perk_NightStalker_Active_Looping.GC_Perk_NightStalker_Active_Looping_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_Perk_NightStalker_Active_Looping_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Perk_NightStalker_Active_Looping_C", "K2_HandleGameplayCue");

	Params::AGC_Perk_NightStalker_Active_Looping_C_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Perk_NightStalker_Active_Looping.GC_Perk_NightStalker_Active_Looping_C.ExecuteUbergraph_GC_Perk_NightStalker_Active_Looping
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_Event_EventType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Generic_C*       K2Node_DynamicCast_AsPlayer_Pawn_Generic                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGC_Perk_NightStalker_Active_Looping_C::ExecuteUbergraph_GC_Perk_NightStalker_Active_Looping(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Perk_NightStalker_Active_Looping_C", "ExecuteUbergraph_GC_Perk_NightStalker_Active_Looping");

	Params::AGC_Perk_NightStalker_Active_Looping_C_ExecuteUbergraph_GC_Perk_NightStalker_Active_Looping_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue1 = CallFunc_K2_AttachToComponent_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


