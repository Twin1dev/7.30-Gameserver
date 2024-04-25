#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_Balloons_Consumable_Rope.BGA_Balloons_Consumable_Rope_C
// (Actor)

class UClass* ABGA_Balloons_Consumable_Rope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_Balloons_Consumable_Rope_C");

	return Clss;
}


// BGA_Balloons_Consumable_Rope_C BGA_Balloons_Consumable_Rope.Default__BGA_Balloons_Consumable_Rope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_Balloons_Consumable_Rope_C* ABGA_Balloons_Consumable_Rope_C::GetDefaultObj()
{
	static class ABGA_Balloons_Consumable_Rope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_Balloons_Consumable_Rope_C*>(ABGA_Balloons_Consumable_Rope_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BGA_Balloons_Consumable_Rope.BGA_Balloons_Consumable_Rope_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Balloons_Consumable_Rope_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Balloons_Consumable_Rope_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


