#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Ninja_SmokeBomb_ImpactFX.GC_Ninja_SmokeBomb_ImpactFX_C
// (None)

class UClass* UGC_Ninja_SmokeBomb_ImpactFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Ninja_SmokeBomb_ImpactFX_C");

	return Clss;
}


// GC_Ninja_SmokeBomb_ImpactFX_C GC_Ninja_SmokeBomb_ImpactFX.Default__GC_Ninja_SmokeBomb_ImpactFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Ninja_SmokeBomb_ImpactFX_C* UGC_Ninja_SmokeBomb_ImpactFX_C::GetDefaultObj()
{
	static class UGC_Ninja_SmokeBomb_ImpactFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Ninja_SmokeBomb_ImpactFX_C*>(UGC_Ninja_SmokeBomb_ImpactFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Ninja_SmokeBomb_ImpactFX.GC_Ninja_SmokeBomb_ImpactFX_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnExecute_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_Ninja_SmokeBomb_ImpactFX_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Ninja_SmokeBomb_ImpactFX_C", "OnExecute");

	Params::UGC_Ninja_SmokeBomb_ImpactFX_C_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_OnExecute_ReturnValue = CallFunc_OnExecute_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


