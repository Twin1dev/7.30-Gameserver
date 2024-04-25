#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C
// (Actor)

class UClass* AGCNL_Perk_H_CorruptedAura_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Perk_H_CorruptedAura_C");

	return Clss;
}


// GCNL_Perk_H_CorruptedAura_C GCNL_Perk_H_CorruptedAura.Default__GCNL_Perk_H_CorruptedAura_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Perk_H_CorruptedAura_C* AGCNL_Perk_H_CorruptedAura_C::GetDefaultObj()
{
	static class AGCNL_Perk_H_CorruptedAura_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Perk_H_CorruptedAura_C*>(AGCNL_Perk_H_CorruptedAura_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Perk_H_CorruptedAura_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Perk_H_CorruptedAura_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCNL_Perk_H_CorruptedAura_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Perk_H_CorruptedAura_C", "OnLoopingStart");

	Params::AGCNL_Perk_H_CorruptedAura_C_OnLoopingStart_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.ExecuteUbergraph_GCNL_Perk_H_CorruptedAura
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents                                  (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ZeroConstructor, ReferenceParm)

void AGCNL_Perk_H_CorruptedAura_C::ExecuteUbergraph_GCNL_Perk_H_CorruptedAura(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_Perk_H_CorruptedAura_C", "ExecuteUbergraph_GCNL_Perk_H_CorruptedAura");

	Params::AGCNL_Perk_H_CorruptedAura_C_ExecuteUbergraph_GCNL_Perk_H_CorruptedAura_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}

}


