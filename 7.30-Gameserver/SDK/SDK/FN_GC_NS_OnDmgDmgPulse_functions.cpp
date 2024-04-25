#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_NS_OnDmgDmgPulse.GC_NS_OnDmgDmgPulse_C
// (None)

class UClass* UGC_NS_OnDmgDmgPulse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_NS_OnDmgDmgPulse_C");

	return Clss;
}


// GC_NS_OnDmgDmgPulse_C GC_NS_OnDmgDmgPulse.Default__GC_NS_OnDmgDmgPulse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_NS_OnDmgDmgPulse_C* UGC_NS_OnDmgDmgPulse_C::GetDefaultObj()
{
	static class UGC_NS_OnDmgDmgPulse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_NS_OnDmgDmgPulse_C*>(UGC_NS_OnDmgDmgPulse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_NS_OnDmgDmgPulse.GC_NS_OnDmgDmgPulse_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    SpawnedParticleSysComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGC_NS_OnDmgDmgPulse_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_NS_OnDmgDmgPulse_C", "OnStartParticleSystemSpawned");

	Params::UGC_NS_OnDmgDmgPulse_C_OnStartParticleSystemSpawned_Params Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}

}


