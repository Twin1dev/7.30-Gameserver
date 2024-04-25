#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C
// (Actor)

class UClass* AGCN_Hoverboard_Strait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Hoverboard_Strait_C");

	return Clss;
}


// GCN_Hoverboard_Strait_C GCN_Hoverboard_Strait.Default__GCN_Hoverboard_Strait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Hoverboard_Strait_C* AGCN_Hoverboard_Strait_C::GetDefaultObj()
{
	static class AGCN_Hoverboard_Strait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Hoverboard_Strait_C*>(AGCN_Hoverboard_Strait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ATrap_Floor_Hoverboard_Speed_C*K2Node_DynamicCast_AsTrap_Floor_Hoverboard_Speed                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Generic_C*       K2Node_DynamicCast_AsPlayer_Pawn_Generic                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCN_Hoverboard_Strait_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ATrap_Floor_Hoverboard_Speed_C* K2Node_DynamicCast_AsTrap_Floor_Hoverboard_Speed, bool K2Node_DynamicCast_bSuccess, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Hoverboard_Strait_C", "OnActive");

	Params::AGCN_Hoverboard_Strait_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsTrap_Floor_Hoverboard_Speed = K2Node_DynamicCast_AsTrap_Floor_Hoverboard_Speed;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Hoverboard_Strait_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Hoverboard_Strait_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Hoverboard_Strait_C::OnActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Hoverboard_Strait_C", "OnActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.ExecuteUbergraph_GCN_Hoverboard_Strait
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEmitterCameraLensEffectBase*CallFunc_SpawnCameraLensEffect_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Hoverboard_Strait_C::ExecuteUbergraph_GCN_Hoverboard_Strait(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AEmitterCameraLensEffectBase* CallFunc_SpawnCameraLensEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Hoverboard_Strait_C", "ExecuteUbergraph_GCN_Hoverboard_Strait");

	Params::AGCN_Hoverboard_Strait_C_ExecuteUbergraph_GCN_Hoverboard_Strait_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnCameraLensEffect_ReturnValue = CallFunc_SpawnCameraLensEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


