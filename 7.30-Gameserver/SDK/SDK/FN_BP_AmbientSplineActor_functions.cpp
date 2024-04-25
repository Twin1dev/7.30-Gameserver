#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AmbientSplineActor.BP_AmbientSplineActor_C
// (Actor)

class UClass* ABP_AmbientSplineActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AmbientSplineActor_C");

	return Clss;
}


// BP_AmbientSplineActor_C BP_AmbientSplineActor.Default__BP_AmbientSplineActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AmbientSplineActor_C* ABP_AmbientSplineActor_C::GetDefaultObj()
{
	static class ABP_AmbientSplineActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AmbientSplineActor_C*>(ABP_AmbientSplineActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientSplineActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientSplineActor_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AmbientSplineActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientSplineActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.Check Closest Point
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientSplineActor_C::Check_Closest_Point()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientSplineActor_C", "Check Closest Point");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AmbientSplineActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientSplineActor_C", "ReceiveTick");

	Params::ABP_AmbientSplineActor_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ExecuteUbergraph_BP_AmbientSplineActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AmbientSplineActor_C::ExecuteUbergraph_BP_AmbientSplineActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientSplineActor_C", "ExecuteUbergraph_BP_AmbientSplineActor");

	Params::ABP_AmbientSplineActor_C_ExecuteUbergraph_BP_AmbientSplineActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


