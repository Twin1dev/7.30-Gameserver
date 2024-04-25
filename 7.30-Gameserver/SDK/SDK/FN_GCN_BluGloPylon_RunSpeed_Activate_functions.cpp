#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C
// (Actor)

class UClass* AGCN_BluGloPylon_RunSpeed_Activate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_BluGloPylon_RunSpeed_Activate_C");

	return Clss;
}


// GCN_BluGloPylon_RunSpeed_Activate_C GCN_BluGloPylon_RunSpeed_Activate.Default__GCN_BluGloPylon_RunSpeed_Activate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_BluGloPylon_RunSpeed_Activate_C* AGCN_BluGloPylon_RunSpeed_Activate_C::GetDefaultObj()
{
	static class AGCN_BluGloPylon_RunSpeed_Activate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_BluGloPylon_RunSpeed_Activate_C*>(AGCN_BluGloPylon_RunSpeed_Activate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    SpawnedParticleSysComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_BluGloPylon_RunSpeed_Activate_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_BluGloPylon_RunSpeed_Activate_C", "OnStartParticleSystemSpawned");

	Params::AGCN_BluGloPylon_RunSpeed_Activate_C_OnStartParticleSystemSpawned_Params Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = Parameters;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_BluGloPylon_RunSpeed_Activate_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_BluGloPylon_RunSpeed_Activate_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


