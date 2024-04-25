#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_Launcher_FrontAction.BP_Launcher_FrontAction_C
// (None)

class UClass* UBP_Launcher_FrontAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Launcher_FrontAction_C");

	return Clss;
}


// BP_Launcher_FrontAction_C BP_Launcher_FrontAction.Default__BP_Launcher_FrontAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Launcher_FrontAction_C* UBP_Launcher_FrontAction_C::GetDefaultObj()
{
	static class UBP_Launcher_FrontAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Launcher_FrontAction_C*>(UBP_Launcher_FrontAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Launcher_FrontAction.BP_Launcher_FrontAction_C.ExecuteUbergraph_BP_Launcher_FrontAction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Launcher_FrontAction_C::ExecuteUbergraph_BP_Launcher_FrontAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Launcher_FrontAction_C", "ExecuteUbergraph_BP_Launcher_FrontAction");

	Params::UBP_Launcher_FrontAction_C_ExecuteUbergraph_BP_Launcher_FrontAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


