#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C
// (Actor)

class UClass* ATrap_Floor_Hoverboard_Speed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trap_Floor_Hoverboard_Speed_C");

	return Clss;
}


// Trap_Floor_Hoverboard_Speed_C Trap_Floor_Hoverboard_Speed.Default__Trap_Floor_Hoverboard_Speed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrap_Floor_Hoverboard_Speed_C* ATrap_Floor_Hoverboard_Speed_C::GetDefaultObj()
{
	static class ATrap_Floor_Hoverboard_Speed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrap_Floor_Hoverboard_Speed_C*>(ATrap_Floor_Hoverboard_Speed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.BP_ShouldTrigger
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              TouchingActors                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Touching                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// bool                               bTouchingIsAlreadyLaunched                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

bool ATrap_Floor_Hoverboard_Speed_C::BP_ShouldTrigger(TArray<class AActor*>& TouchingActors, const TArray<class AActor*>& Touching, bool bTouchingIsAlreadyLaunched)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "BP_ShouldTrigger");

	Params::ATrap_Floor_Hoverboard_Speed_C_BP_ShouldTrigger_Params Parms{};

	Parms.TouchingActors = TouchingActors;
	Parms.Touching = Touching;
	Parms.bTouchingIsAlreadyLaunched = bTouchingIsAlreadyLaunched;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Floor_Hoverboard_Speed_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnPlaced
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_Hoverboard_Speed_C::OnPlaced()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnPlaced");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_Hoverboard_Speed_C::OnOutOfDurability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnOutOfDurability");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_Hoverboard_Speed_C::OnFinishedBuilding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnFinishedBuilding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnWorldReady
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_Hoverboard_Speed_C::OnWorldReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnWorldReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.ExecuteUbergraph_Trap_Floor_Hoverboard_Speed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TriggerIfAppropriate_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Floor_Hoverboard_Speed_C::ExecuteUbergraph_Trap_Floor_Hoverboard_Speed(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool CallFunc_TriggerIfAppropriate_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "ExecuteUbergraph_Trap_Floor_Hoverboard_Speed");

	Params::ATrap_Floor_Hoverboard_Speed_C_ExecuteUbergraph_Trap_Floor_Hoverboard_Speed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_TriggerIfAppropriate_ReturnValue = CallFunc_TriggerIfAppropriate_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue1 = CallFunc_IsDedicatedServer_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


