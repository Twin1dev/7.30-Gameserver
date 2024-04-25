#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Decal_Snow_WorldImpact.BP_Decal_Snow_WorldImpact_C
// (Actor)

class UClass* ABP_Decal_Snow_WorldImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Decal_Snow_WorldImpact_C");

	return Clss;
}


// BP_Decal_Snow_WorldImpact_C BP_Decal_Snow_WorldImpact.Default__BP_Decal_Snow_WorldImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Decal_Snow_WorldImpact_C* ABP_Decal_Snow_WorldImpact_C::GetDefaultObj()
{
	static class ABP_Decal_Snow_WorldImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Decal_Snow_WorldImpact_C*>(ABP_Decal_Snow_WorldImpact_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Decal_Snow_WorldImpact.BP_Decal_Snow_WorldImpact_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Decal_Snow_WorldImpact_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Decal_Snow_WorldImpact_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Decal_Snow_WorldImpact.BP_Decal_Snow_WorldImpact_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Decal_Snow_WorldImpact_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Decal_Snow_WorldImpact_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Decal_Snow_WorldImpact.BP_Decal_Snow_WorldImpact_C.ExecuteUbergraph_BP_Decal_Snow_WorldImpact
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddActorLocalRotation_SweepHitResult                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Decal_Snow_WorldImpact_C::ExecuteUbergraph_BP_Decal_Snow_WorldImpact(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorLocalRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Decal_Snow_WorldImpact_C", "ExecuteUbergraph_BP_Decal_Snow_WorldImpact");

	Params::ABP_Decal_Snow_WorldImpact_C_ExecuteUbergraph_BP_Decal_Snow_WorldImpact_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_AddActorLocalRotation_SweepHitResult = CallFunc_K2_AddActorLocalRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


