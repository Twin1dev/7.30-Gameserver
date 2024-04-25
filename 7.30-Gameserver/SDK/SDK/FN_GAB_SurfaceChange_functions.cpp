#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C
// (None)

class UClass* UGAB_SurfaceChange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_SurfaceChange_C");

	return Clss;
}


// GAB_SurfaceChange_C GAB_SurfaceChange.Default__GAB_SurfaceChange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_SurfaceChange_C* UGAB_SurfaceChange_C::GetDefaultObj()
{
	static class UGAB_SurfaceChange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_SurfaceChange_C*>(UGAB_SurfaceChange_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.HotfixableGEApplication
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat              Input                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                      GameplayEffectAppliedOnTrue                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      GameplayEffectAppliedOnFalse                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1              (NoDestructor, HasGetValueTypeHash)

void UGAB_SurfaceChange_C::HotfixableGEApplication(struct FScalableFloat& Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse, float CallFunc_GetValueAtLevel_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "HotfixableGEApplication");

	Params::UGAB_SurfaceChange_C_HotfixableGEApplication_Params Parms{};

	Parms.Input = Input;
	Parms.GameplayEffectAppliedOnTrue = GameplayEffectAppliedOnTrue;
	Parms.GameplayEffectAppliedOnFalse = GameplayEffectAppliedOnFalse;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.RemoveGameplayEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurfaceChange_C::RemoveGameplayEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "RemoveGameplayEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurfaceChange_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_SurfaceChange_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.ExecuteUbergraph_GAB_SurfaceChange
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SurfaceChange_C::ExecuteUbergraph_GAB_SurfaceChange(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess, float CallFunc_GetValueAtLevel_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_SurfaceChange_C", "ExecuteUbergraph_GAB_SurfaceChange");

	Params::UGAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess;
	Parms.CallFunc_GetValueAtLevel_ReturnValue1 = CallFunc_GetValueAtLevel_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


