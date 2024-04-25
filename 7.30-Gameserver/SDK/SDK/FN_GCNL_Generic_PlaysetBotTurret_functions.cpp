#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C
// (Actor)

class UClass* AGCNL_Generic_PlaysetBotTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Generic_PlaysetBotTurret_C");

	return Clss;
}


// GCNL_Generic_PlaysetBotTurret_C GCNL_Generic_PlaysetBotTurret.Default__GCNL_Generic_PlaysetBotTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Generic_PlaysetBotTurret_C* AGCNL_Generic_PlaysetBotTurret_C::GetDefaultObj()
{
	static class AGCNL_Generic_PlaysetBotTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Generic_PlaysetBotTurret_C*>(AGCNL_Generic_PlaysetBotTurret_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Generic_PlaysetBotTurret_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_PlaysetBotTurret_C", "OnActive");

	Params::AGCNL_Generic_PlaysetBotTurret_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Generic_PlaysetBotTurret_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_PlaysetBotTurret_C", "OnRemove");

	Params::AGCNL_Generic_PlaysetBotTurret_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_Generic_PlaysetBotTurret.GCNL_Generic_PlaysetBotTurret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Generic_PlaysetBotTurret_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Generic_PlaysetBotTurret_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


