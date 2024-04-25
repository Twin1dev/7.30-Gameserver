#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_GolfBall_DistanceMarker.GCN_GolfBall_DistanceMarker_C
// (None)

class UClass* UGCN_GolfBall_DistanceMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_GolfBall_DistanceMarker_C");

	return Clss;
}


// GCN_GolfBall_DistanceMarker_C GCN_GolfBall_DistanceMarker.Default__GCN_GolfBall_DistanceMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_GolfBall_DistanceMarker_C* UGCN_GolfBall_DistanceMarker_C::GetDefaultObj()
{
	static class UGCN_GolfBall_DistanceMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_GolfBall_DistanceMarker_C*>(UGCN_GolfBall_DistanceMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_GolfBall_DistanceMarker.GCN_GolfBall_DistanceMarker_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    SpawnedParticleSysComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetPinColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_GolfBall_DistanceMarker_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_GetPinColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_GolfBall_DistanceMarker_C", "OnStartParticleSystemSpawned");

	Params::UGCN_GolfBall_DistanceMarker_C_OnStartParticleSystemSpawned_Params Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = Parameters;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena = K2Node_DynamicCast_AsFort_Player_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPinColor_ReturnValue = CallFunc_GetPinColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


