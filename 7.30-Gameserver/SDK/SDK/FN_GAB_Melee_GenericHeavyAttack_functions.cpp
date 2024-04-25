#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_Melee_GenericHeavyAttack.GAB_Melee_GenericHeavyAttack_C
// (None)

class UClass* UGAB_Melee_GenericHeavyAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_Melee_GenericHeavyAttack_C");

	return Clss;
}


// GAB_Melee_GenericHeavyAttack_C GAB_Melee_GenericHeavyAttack.Default__GAB_Melee_GenericHeavyAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_Melee_GenericHeavyAttack_C* UGAB_Melee_GenericHeavyAttack_C::GetDefaultObj()
{
	static class UGAB_Melee_GenericHeavyAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_Melee_GenericHeavyAttack_C*>(UGAB_Melee_GenericHeavyAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_Melee_GenericHeavyAttack.GAB_Melee_GenericHeavyAttack_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Melee_GenericHeavyAttack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Melee_GenericHeavyAttack_C", "K2_OnEndAbility");

	Params::UGAB_Melee_GenericHeavyAttack_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_Melee_GenericHeavyAttack.GAB_Melee_GenericHeavyAttack_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAB_Melee_GenericHeavyAttack_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Melee_GenericHeavyAttack_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_Melee_GenericHeavyAttack.GAB_Melee_GenericHeavyAttack_C.ExecuteUbergraph_GAB_Melee_GenericHeavyAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Melee_GenericHeavyAttack_C::ExecuteUbergraph_GAB_Melee_GenericHeavyAttack(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_Melee_GenericHeavyAttack_C", "ExecuteUbergraph_GAB_Melee_GenericHeavyAttack");

	Params::UGAB_Melee_GenericHeavyAttack_C_ExecuteUbergraph_GAB_Melee_GenericHeavyAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


