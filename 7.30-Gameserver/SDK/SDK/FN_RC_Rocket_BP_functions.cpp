#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass RC_Rocket_BP.RC_Rocket_BP_C
// (None)

class UClass* URC_Rocket_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RC_Rocket_BP_C");

	return Clss;
}


// RC_Rocket_BP_C RC_Rocket_BP.Default__RC_Rocket_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URC_Rocket_BP_C* URC_Rocket_BP_C::GetDefaultObj()
{
	static class URC_Rocket_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URC_Rocket_BP_C*>(URC_Rocket_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RC_Rocket_BP.RC_Rocket_BP_C.ExecuteUbergraph_RC_Rocket_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URC_Rocket_BP_C::ExecuteUbergraph_RC_Rocket_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RC_Rocket_BP_C", "ExecuteUbergraph_RC_Rocket_BP");

	Params::URC_Rocket_BP_C_ExecuteUbergraph_RC_Rocket_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


