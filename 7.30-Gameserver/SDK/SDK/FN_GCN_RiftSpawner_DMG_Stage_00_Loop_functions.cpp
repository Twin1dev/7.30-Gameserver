#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_RiftSpawner_DMG_Stage_00_Loop.GCN_RiftSpawner_DMG_Stage_00_Loop_C
// (Actor)

class UClass* AGCN_RiftSpawner_DMG_Stage_00_Loop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_RiftSpawner_DMG_Stage_00_Loop_C");

	return Clss;
}


// GCN_RiftSpawner_DMG_Stage_00_Loop_C GCN_RiftSpawner_DMG_Stage_00_Loop.Default__GCN_RiftSpawner_DMG_Stage_00_Loop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_RiftSpawner_DMG_Stage_00_Loop_C* AGCN_RiftSpawner_DMG_Stage_00_Loop_C::GetDefaultObj()
{
	static class AGCN_RiftSpawner_DMG_Stage_00_Loop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_RiftSpawner_DMG_Stage_00_Loop_C*>(AGCN_RiftSpawner_DMG_Stage_00_Loop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_RiftSpawner_DMG_Stage_00_Loop.GCN_RiftSpawner_DMG_Stage_00_Loop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_RiftSpawner_DMG_Stage_00_Loop_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_RiftSpawner_DMG_Stage_00_Loop_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_RiftSpawner_DMG_Stage_00_Loop.GCN_RiftSpawner_DMG_Stage_00_Loop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCN_RiftSpawner_DMG_Stage_00_Loop_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_RiftSpawner_DMG_Stage_00_Loop_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_RiftSpawner_DMG_Stage_00_Loop.GCN_RiftSpawner_DMG_Stage_00_Loop_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_RiftSpawner_DMG_Stage_00_Loop_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_RiftSpawner_DMG_Stage_00_Loop_C", "OnLoopingStart");

	Params::AGCN_RiftSpawner_DMG_Stage_00_Loop_C_OnLoopingStart_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RiftSpawner_DMG_Stage_00_Loop.GCN_RiftSpawner_DMG_Stage_00_Loop_C.ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage_00_Loop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents                                  (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ZeroConstructor, ReferenceParm)

void AGCN_RiftSpawner_DMG_Stage_00_Loop_C::ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage_00_Loop(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_RiftSpawner_DMG_Stage_00_Loop_C", "ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage_00_Loop");

	Params::AGCN_RiftSpawner_DMG_Stage_00_Loop_C_ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage_00_Loop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}

}


