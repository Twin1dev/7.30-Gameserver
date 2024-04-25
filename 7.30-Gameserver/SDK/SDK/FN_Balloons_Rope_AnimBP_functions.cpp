#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Balloons_Rope_AnimBP.Balloons_Rope_AnimBP_C
// (None)

class UClass* UBalloons_Rope_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Balloons_Rope_AnimBP_C");

	return Clss;
}


// Balloons_Rope_AnimBP_C Balloons_Rope_AnimBP.Default__Balloons_Rope_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalloons_Rope_AnimBP_C* UBalloons_Rope_AnimBP_C::GetDefaultObj()
{
	static class UBalloons_Rope_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalloons_Rope_AnimBP_C*>(UBalloons_Rope_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Balloons_Rope_AnimBP.Balloons_Rope_AnimBP_C.ExecuteUbergraph_Balloons_Rope_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloons_Rope_AnimBP_C::ExecuteUbergraph_Balloons_Rope_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balloons_Rope_AnimBP_C", "ExecuteUbergraph_Balloons_Rope_AnimBP");

	Params::UBalloons_Rope_AnimBP_C_ExecuteUbergraph_Balloons_Rope_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


