#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Perk_ExplosiveRounds_Explosion.GC_Perk_ExplosiveRounds_Explosion_C
// (None)

class UClass* UGC_Perk_ExplosiveRounds_Explosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Perk_ExplosiveRounds_Explosion_C");

	return Clss;
}


// GC_Perk_ExplosiveRounds_Explosion_C GC_Perk_ExplosiveRounds_Explosion.Default__GC_Perk_ExplosiveRounds_Explosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Perk_ExplosiveRounds_Explosion_C* UGC_Perk_ExplosiveRounds_Explosion_C::GetDefaultObj()
{
	static class UGC_Perk_ExplosiveRounds_Explosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Perk_ExplosiveRounds_Explosion_C*>(UGC_Perk_ExplosiveRounds_Explosion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Perk_ExplosiveRounds_Explosion.GC_Perk_ExplosiveRounds_Explosion_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnExecute_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGC_Perk_ExplosiveRounds_Explosion_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Perk_ExplosiveRounds_Explosion_C", "OnExecute");

	Params::UGC_Perk_ExplosiveRounds_Explosion_C_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_OnExecute_ReturnValue = CallFunc_OnExecute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


