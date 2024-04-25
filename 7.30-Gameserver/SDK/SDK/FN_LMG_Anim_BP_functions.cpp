#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass LMG_Anim_BP.LMG_Anim_BP_C
// (None)

class UClass* ULMG_Anim_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LMG_Anim_BP_C");

	return Clss;
}


// LMG_Anim_BP_C LMG_Anim_BP.Default__LMG_Anim_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULMG_Anim_BP_C* ULMG_Anim_BP_C::GetDefaultObj()
{
	static class ULMG_Anim_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULMG_Anim_BP_C*>(ULMG_Anim_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LMG_Anim_BP.LMG_Anim_BP_C.ExecuteUbergraph_LMG_Anim_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULMG_Anim_BP_C::ExecuteUbergraph_LMG_Anim_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LMG_Anim_BP_C", "ExecuteUbergraph_LMG_Anim_BP");

	Params::ULMG_Anim_BP_C_ExecuteUbergraph_LMG_Anim_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


