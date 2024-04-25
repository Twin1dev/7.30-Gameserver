#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C
// (None)

class UClass* UBP_Auto_Shotgun_Drum_Side_Action_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Auto_Shotgun_Drum_Side_Action_C");

	return Clss;
}


// BP_Auto_Shotgun_Drum_Side_Action_C BP_Auto_Shotgun_Drum_Side_Action.Default__BP_Auto_Shotgun_Drum_Side_Action_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Auto_Shotgun_Drum_Side_Action_C* UBP_Auto_Shotgun_Drum_Side_Action_C::GetDefaultObj()
{
	static class UBP_Auto_Shotgun_Drum_Side_Action_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Auto_Shotgun_Drum_Side_Action_C*>(UBP_Auto_Shotgun_Drum_Side_Action_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C.ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Auto_Shotgun_Drum_Side_Action_C::ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Auto_Shotgun_Drum_Side_Action_C", "ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action");

	Params::UBP_Auto_Shotgun_Drum_Side_Action_C_ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


