#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Building_Actor_Destroyed.BPI_Building_Actor_Destroyed_C
// (None)

class UClass* IBPI_Building_Actor_Destroyed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Building_Actor_Destroyed_C");

	return Clss;
}


// BPI_Building_Actor_Destroyed_C BPI_Building_Actor_Destroyed.Default__BPI_Building_Actor_Destroyed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Building_Actor_Destroyed_C* IBPI_Building_Actor_Destroyed_C::GetDefaultObj()
{
	static class IBPI_Building_Actor_Destroyed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Building_Actor_Destroyed_C*>(IBPI_Building_Actor_Destroyed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Building_Actor_Destroyed.BPI_Building_Actor_Destroyed_C.Event_Building_Actor_Destroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Building_Actor_Destroyed_C::Event_Building_Actor_Destroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Building_Actor_Destroyed_C", "Event_Building_Actor_Destroyed");



	UObject::ProcessEvent(Func, nullptr);

}

}


