#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_GM_OnDmgLifeLeech.GCNS_GM_OnDmgLifeLeech_C
// (None)

class UClass* UGCNS_GM_OnDmgLifeLeech_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_GM_OnDmgLifeLeech_C");

	return Clss;
}


// GCNS_GM_OnDmgLifeLeech_C GCNS_GM_OnDmgLifeLeech.Default__GCNS_GM_OnDmgLifeLeech_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_GM_OnDmgLifeLeech_C* UGCNS_GM_OnDmgLifeLeech_C::GetDefaultObj()
{
	static class UGCNS_GM_OnDmgLifeLeech_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_GM_OnDmgLifeLeech_C*>(UGCNS_GM_OnDmgLifeLeech_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCNS_GM_OnDmgLifeLeech.GCNS_GM_OnDmgLifeLeech_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    SpawnedParticleSysComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGCNS_GM_OnDmgLifeLeech_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNS_GM_OnDmgLifeLeech_C", "OnStartParticleSystemSpawned");

	Params::UGCNS_GM_OnDmgLifeLeech_C_OnStartParticleSystemSpawned_Params Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}

}


