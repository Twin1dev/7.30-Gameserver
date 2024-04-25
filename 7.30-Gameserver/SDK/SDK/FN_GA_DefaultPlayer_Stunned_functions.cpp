#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C
// (None)

class UClass* UGA_DefaultPlayer_Stunned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DefaultPlayer_Stunned_C");

	return Clss;
}


// GA_DefaultPlayer_Stunned_C GA_DefaultPlayer_Stunned.Default__GA_DefaultPlayer_Stunned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DefaultPlayer_Stunned_C* UGA_DefaultPlayer_Stunned_C::GetDefaultObj()
{
	static class UGA_DefaultPlayer_Stunned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DefaultPlayer_Stunned_C*>(UGA_DefaultPlayer_Stunned_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_Stunned_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.ExecuteUbergraph_GA_DefaultPlayer_Stunned
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DefaultPlayer_Stunned_C::ExecuteUbergraph_GA_DefaultPlayer_Stunned(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_Stunned_C", "ExecuteUbergraph_GA_DefaultPlayer_Stunned");

	Params::UGA_DefaultPlayer_Stunned_C_ExecuteUbergraph_GA_DefaultPlayer_Stunned_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


