#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_FireworksMortar_CountTracker.GA_FireworksMortar_CountTracker_C
// (None)

class UClass* UGA_FireworksMortar_CountTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_FireworksMortar_CountTracker_C");

	return Clss;
}


// GA_FireworksMortar_CountTracker_C GA_FireworksMortar_CountTracker.Default__GA_FireworksMortar_CountTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_FireworksMortar_CountTracker_C* UGA_FireworksMortar_CountTracker_C::GetDefaultObj()
{
	static class UGA_FireworksMortar_CountTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_FireworksMortar_CountTracker_C*>(UGA_FireworksMortar_CountTracker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_FireworksMortar_CountTracker.GA_FireworksMortar_CountTracker_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_FireworksMortar_CountTracker_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FireworksMortar_CountTracker_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_FireworksMortar_CountTracker_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_FireworksMortar_CountTracker.GA_FireworksMortar_CountTracker_C.ExecuteUbergraph_GA_FireworksMortar_CountTracker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// TArray<class AActor*>              CallFunc_GetTrackedGroupedActors_ReturnValue                     (ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_BGA_FireworksMortar_Holder_C*K2Node_DynamicCast_AsB_BGA_Fireworks_Mortar_Holder               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_FireworksMortar_CountTracker_C::ExecuteUbergraph_GA_FireworksMortar_CountTracker(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, TArray<class AActor*>& CallFunc_GetTrackedGroupedActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AB_BGA_FireworksMortar_Holder_C* K2Node_DynamicCast_AsB_BGA_Fireworks_Mortar_Holder, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FireworksMortar_CountTracker_C", "ExecuteUbergraph_GA_FireworksMortar_CountTracker");

	Params::UGA_FireworksMortar_CountTracker_C_ExecuteUbergraph_GA_FireworksMortar_CountTracker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetTrackedGroupedActors_ReturnValue = CallFunc_GetTrackedGroupedActors_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsB_BGA_Fireworks_Mortar_Holder = K2Node_DynamicCast_AsB_BGA_Fireworks_Mortar_Holder;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


