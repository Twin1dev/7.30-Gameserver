#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Trap_Ice_Freeze_Deimos.GA_Trap_Ice_Freeze_Deimos_C
// (None)

class UClass* UGA_Trap_Ice_Freeze_Deimos_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Trap_Ice_Freeze_Deimos_C");

	return Clss;
}


// GA_Trap_Ice_Freeze_Deimos_C GA_Trap_Ice_Freeze_Deimos.Default__GA_Trap_Ice_Freeze_Deimos_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Trap_Ice_Freeze_Deimos_C* UGA_Trap_Ice_Freeze_Deimos_C::GetDefaultObj()
{
	static class UGA_Trap_Ice_Freeze_Deimos_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Trap_Ice_Freeze_Deimos_C*>(UGA_Trap_Ice_Freeze_Deimos_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Trap_Ice_Freeze_Deimos.GA_Trap_Ice_Freeze_Deimos_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Trap_Ice_Freeze_Deimos_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Trap_Ice_Freeze_Deimos_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Trap_Ice_Freeze_Deimos.GA_Trap_Ice_Freeze_Deimos_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Trap_Ice_Freeze_Deimos_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Trap_Ice_Freeze_Deimos_C", "K2_OnEndAbility");

	Params::UGA_Trap_Ice_Freeze_Deimos_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Trap_Ice_Freeze_Deimos.GA_Trap_Ice_Freeze_Deimos_C.ExecuteUbergraph_GA_Trap_Ice_Freeze_Deimos
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Trap_Ice_Freeze_Deimos_C::ExecuteUbergraph_GA_Trap_Ice_Freeze_Deimos(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn1, bool K2Node_DynamicCast_bSuccess1, class AAIController* CallFunc_GetAIController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Trap_Ice_Freeze_Deimos_C", "ExecuteUbergraph_GA_Trap_Ice_Freeze_Deimos");

	Params::UGA_Trap_Ice_Freeze_Deimos_C_ExecuteUbergraph_GA_Trap_Ice_Freeze_Deimos_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_AIPawn1 = K2Node_DynamicCast_AsFort_AIPawn1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


