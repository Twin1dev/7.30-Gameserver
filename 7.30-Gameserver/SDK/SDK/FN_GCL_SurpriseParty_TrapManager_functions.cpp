#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCL_SurpriseParty_TrapManager.GCL_SurpriseParty_TrapManager_C
// (Actor)

class UClass* AGCL_SurpriseParty_TrapManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCL_SurpriseParty_TrapManager_C");

	return Clss;
}


// GCL_SurpriseParty_TrapManager_C GCL_SurpriseParty_TrapManager.Default__GCL_SurpriseParty_TrapManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCL_SurpriseParty_TrapManager_C* AGCL_SurpriseParty_TrapManager_C::GetDefaultObj()
{
	static class AGCL_SurpriseParty_TrapManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCL_SurpriseParty_TrapManager_C*>(AGCL_SurpriseParty_TrapManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCL_SurpriseParty_TrapManager.GCL_SurpriseParty_TrapManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCL_SurpriseParty_TrapManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCL_SurpriseParty_TrapManager_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCL_SurpriseParty_TrapManager.GCL_SurpriseParty_TrapManager_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCL_SurpriseParty_TrapManager_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCL_SurpriseParty_TrapManager_C", "OnLoopingStart");

	Params::AGCL_SurpriseParty_TrapManager_C_OnLoopingStart_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_SurpriseParty_TrapManager.GCL_SurpriseParty_TrapManager_C.ExecuteUbergraph_GCL_SurpriseParty_TrapManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents                                  (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ZeroConstructor, ReferenceParm)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item2                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item3                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue3                              (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGCL_SurpriseParty_TrapManager_C::ExecuteUbergraph_GCL_SurpriseParty_TrapManager(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UParticleSystemComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* CallFunc_Array_Get_Item1, class UParticleSystemComponent* CallFunc_Array_Get_Item2, class UParticleSystemComponent* CallFunc_Array_Get_Item3, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCL_SurpriseParty_TrapManager_C", "ExecuteUbergraph_GCL_SurpriseParty_TrapManager");

	Params::AGCL_SurpriseParty_TrapManager_C_ExecuteUbergraph_GCL_SurpriseParty_TrapManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult1 = CallFunc_K2_SetRelativeTransform_SweepHitResult1;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_MakeTransform_ReturnValue3 = CallFunc_MakeTransform_ReturnValue3;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult2 = CallFunc_K2_SetRelativeTransform_SweepHitResult2;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult3 = CallFunc_K2_SetRelativeTransform_SweepHitResult3;

	UObject::ProcessEvent(Func, &Parms);

}

}


