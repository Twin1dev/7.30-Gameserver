#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_NPC_Lightning.GCN_NPC_Lightning_C
// (Actor)

class UClass* AGCN_NPC_Lightning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_NPC_Lightning_C");

	return Clss;
}


// GCN_NPC_Lightning_C GCN_NPC_Lightning.Default__GCN_NPC_Lightning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_NPC_Lightning_C* AGCN_NPC_Lightning_C::GetDefaultObj()
{
	static class AGCN_NPC_Lightning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_NPC_Lightning_C*>(AGCN_NPC_Lightning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_NPC_Lightning.GCN_NPC_Lightning_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn_Flinger*           K2Node_DynamicCast_AsFort_Pawn_Flinger                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCN_NPC_Lightning_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsDedicatedServer_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AFortPawn_Flinger* K2Node_DynamicCast_AsFort_Pawn_Flinger, bool K2Node_DynamicCast_bSuccess1, bool Temp_bool_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_NPC_Lightning_C", "OnActive");

	Params::AGCN_NPC_Lightning_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn_Flinger = K2Node_DynamicCast_AsFort_Pawn_Flinger;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_NPC_Lightning.GCN_NPC_Lightning_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_NPC_Lightning_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_NPC_Lightning_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


