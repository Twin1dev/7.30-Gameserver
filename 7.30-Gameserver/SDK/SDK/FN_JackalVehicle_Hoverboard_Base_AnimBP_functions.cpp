#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C
// (None)

class UClass* UJackalVehicle_Hoverboard_Base_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JackalVehicle_Hoverboard_Base_AnimBP_C");

	return Clss;
}


// JackalVehicle_Hoverboard_Base_AnimBP_C JackalVehicle_Hoverboard_Base_AnimBP.Default__JackalVehicle_Hoverboard_Base_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJackalVehicle_Hoverboard_Base_AnimBP_C* UJackalVehicle_Hoverboard_Base_AnimBP_C::GetDefaultObj()
{
	static class UJackalVehicle_Hoverboard_Base_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJackalVehicle_Hoverboard_Base_AnimBP_C*>(UJackalVehicle_Hoverboard_Base_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJackalVehicle_Hoverboard_Base_AnimBP_C::ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JackalVehicle_Hoverboard_Base_AnimBP_C", "ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP");

	Params::UJackalVehicle_Hoverboard_Base_AnimBP_C_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


