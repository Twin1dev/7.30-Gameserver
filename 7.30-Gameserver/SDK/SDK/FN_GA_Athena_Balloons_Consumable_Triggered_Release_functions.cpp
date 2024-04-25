#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C
// (None)

class UClass* UGA_Athena_Balloons_Consumable_Triggered_Release_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Balloons_Consumable_Triggered_Release_C");

	return Clss;
}


// GA_Athena_Balloons_Consumable_Triggered_Release_C GA_Athena_Balloons_Consumable_Triggered_Release.Default__GA_Athena_Balloons_Consumable_Triggered_Release_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Balloons_Consumable_Triggered_Release_C* UGA_Athena_Balloons_Consumable_Triggered_Release_C::GetDefaultObj()
{
	static class UGA_Athena_Balloons_Consumable_Triggered_Release_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Balloons_Consumable_Triggered_Release_C*>(UGA_Athena_Balloons_Consumable_Triggered_Release_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Balloons_Consumable_Triggered_Release_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_Triggered_Release_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_Balloons_Consumable_Triggered_Release_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C.ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGA_Athena_Balloons_Consumable_Triggered_Release_C::ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_Triggered_Release_C", "ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release");

	Params::UGA_Athena_Balloons_Consumable_Triggered_Release_C_ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


