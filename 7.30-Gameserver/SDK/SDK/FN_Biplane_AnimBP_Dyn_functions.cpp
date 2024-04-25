#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Biplane_AnimBP_Dyn.Biplane_AnimBP_Dyn_C
// (None)

class UClass* UBiplane_AnimBP_Dyn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Biplane_AnimBP_Dyn_C");

	return Clss;
}


// Biplane_AnimBP_Dyn_C Biplane_AnimBP_Dyn.Default__Biplane_AnimBP_Dyn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBiplane_AnimBP_Dyn_C* UBiplane_AnimBP_Dyn_C::GetDefaultObj()
{
	static class UBiplane_AnimBP_Dyn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBiplane_AnimBP_Dyn_C*>(UBiplane_AnimBP_Dyn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Biplane_AnimBP_Dyn.Biplane_AnimBP_Dyn_C.ExecuteUbergraph_Biplane_AnimBP_Dyn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBiplane_AnimBP_Dyn_C::ExecuteUbergraph_Biplane_AnimBP_Dyn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Biplane_AnimBP_Dyn_C", "ExecuteUbergraph_Biplane_AnimBP_Dyn");

	Params::UBiplane_AnimBP_Dyn_C_ExecuteUbergraph_Biplane_AnimBP_Dyn_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


