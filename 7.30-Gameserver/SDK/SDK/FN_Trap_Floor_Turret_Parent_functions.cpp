#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trap_Floor_Turret_Parent.Trap_Floor_Turret_Parent_C
// (Actor)

class UClass* ATrap_Floor_Turret_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trap_Floor_Turret_Parent_C");

	return Clss;
}


// Trap_Floor_Turret_Parent_C Trap_Floor_Turret_Parent.Default__Trap_Floor_Turret_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrap_Floor_Turret_Parent_C* ATrap_Floor_Turret_Parent_C::GetDefaultObj()
{
	static class ATrap_Floor_Turret_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrap_Floor_Turret_Parent_C*>(ATrap_Floor_Turret_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Trap_Floor_Turret_Parent.Trap_Floor_Turret_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Floor_Turret_Parent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Trap_Floor_Turret_Parent_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


