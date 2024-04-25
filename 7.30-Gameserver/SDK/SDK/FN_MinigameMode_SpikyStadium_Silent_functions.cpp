#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C
// (Actor)

class UClass* AMinigameMode_SpikyStadium_Silent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinigameMode_SpikyStadium_Silent_C");

	return Clss;
}


// MinigameMode_SpikyStadium_Silent_C MinigameMode_SpikyStadium_Silent.Default__MinigameMode_SpikyStadium_Silent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMinigameMode_SpikyStadium_Silent_C* AMinigameMode_SpikyStadium_Silent_C::GetDefaultObj()
{
	static class AMinigameMode_SpikyStadium_Silent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMinigameMode_SpikyStadium_Silent_C*>(AMinigameMode_SpikyStadium_Silent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameMode_SpikyStadium_Silent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameMode_SpikyStadium_Silent_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C.HandleMinigameStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_SpikyStadium_Silent_C::HandleMinigameStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameMode_SpikyStadium_Silent_C", "HandleMinigameStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C.HandleMinigameWarmup
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_SpikyStadium_Silent_C::HandleMinigameWarmup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameMode_SpikyStadium_Silent_C", "HandleMinigameWarmup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C.HandleMinigameEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameMode_SpikyStadium_Silent_C::HandleMinigameEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameMode_SpikyStadium_Silent_C", "HandleMinigameEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C.ExecuteUbergraph_MinigameMode_SpikyStadium_Silent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameMode_SpikyStadium_Silent_C::ExecuteUbergraph_MinigameMode_SpikyStadium_Silent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinigameMode_SpikyStadium_Silent_C", "ExecuteUbergraph_MinigameMode_SpikyStadium_Silent");

	Params::AMinigameMode_SpikyStadium_Silent_C_ExecuteUbergraph_MinigameMode_SpikyStadium_Silent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


