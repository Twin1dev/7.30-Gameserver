#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C
// (None)

class UClass* UGA_Perk_H_FrozenCastle_FreezeOnHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Perk_H_FrozenCastle_FreezeOnHit_C");

	return Clss;
}


// GA_Perk_H_FrozenCastle_FreezeOnHit_C GA_Perk_H_FrozenCastle_FreezeOnHit.Default__GA_Perk_H_FrozenCastle_FreezeOnHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Perk_H_FrozenCastle_FreezeOnHit_C* UGA_Perk_H_FrozenCastle_FreezeOnHit_C::GetDefaultObj()
{
	static class UGA_Perk_H_FrozenCastle_FreezeOnHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Perk_H_FrozenCastle_FreezeOnHit_C*>(UGA_Perk_H_FrozenCastle_FreezeOnHit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyTags_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Perk_H_FrozenCastle_FreezeOnHit_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Perk_H_FrozenCastle_FreezeOnHit_C", "K2_ShouldAbilityRespondToEvent");

	Params::UGA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue1 = CallFunc_HasAnyTags_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Perk_H_FrozenCastle_FreezeOnHit_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Perk_H_FrozenCastle_FreezeOnHit_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1              (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue          (ZeroConstructor, ReferenceParm)

void UGA_Perk_H_FrozenCastle_FreezeOnHit_C::ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_HasTag_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasTag_ReturnValue1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Perk_H_FrozenCastle_FreezeOnHit_C", "ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit");

	Params::UGA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue1 = CallFunc_GetValueAtLevel_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue1 = CallFunc_HasTag_ReturnValue1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


