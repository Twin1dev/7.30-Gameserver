#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C
// (Actor)

class UClass* AGCNL_Creative_SpeedAdjust_Vehicle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Creative_SpeedAdjust_Vehicle_C");

	return Clss;
}


// GCNL_Creative_SpeedAdjust_Vehicle_C GCNL_Creative_SpeedAdjust_Vehicle.Default__GCNL_Creative_SpeedAdjust_Vehicle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Creative_SpeedAdjust_Vehicle_C* AGCNL_Creative_SpeedAdjust_Vehicle_C::GetDefaultObj()
{
	static class AGCNL_Creative_SpeedAdjust_Vehicle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Creative_SpeedAdjust_Vehicle_C*>(AGCNL_Creative_SpeedAdjust_Vehicle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Creative_SpeedAdjust_Vehicle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Creative_SpeedAdjust_Vehicle_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCNL_Creative_SpeedAdjust_Vehicle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Creative_SpeedAdjust_Vehicle_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Creative_SpeedAdjust_Vehicle_C::ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Creative_SpeedAdjust_Vehicle_C", "ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle");

	Params::AGCNL_Creative_SpeedAdjust_Vehicle_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


