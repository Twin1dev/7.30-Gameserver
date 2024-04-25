#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C
// (Actor)

class UClass* ABP_MedicPack_HealNozzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MedicPack_HealNozzle_C");

	return Clss;
}


// BP_MedicPack_HealNozzle_C BP_MedicPack_HealNozzle.Default__BP_MedicPack_HealNozzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MedicPack_HealNozzle_C* ABP_MedicPack_HealNozzle_C::GetDefaultObj()
{
	static class ABP_MedicPack_HealNozzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MedicPack_HealNozzle_C*>(ABP_MedicPack_HealNozzle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MedicPack_HealNozzle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MedicPack_HealNozzle_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MedicPack_HealNozzle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MedicPack_HealNozzle_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.ExecuteUbergraph_BP_MedicPack_HealNozzle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MedicPack_HealNozzle_C::ExecuteUbergraph_BP_MedicPack_HealNozzle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MedicPack_HealNozzle_C", "ExecuteUbergraph_BP_MedicPack_HealNozzle");

	Params::ABP_MedicPack_HealNozzle_C_ExecuteUbergraph_BP_MedicPack_HealNozzle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


