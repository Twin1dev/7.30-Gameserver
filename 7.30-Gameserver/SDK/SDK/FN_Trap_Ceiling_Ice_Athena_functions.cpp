#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trap_Ceiling_Ice_Athena.Trap_Ceiling_Ice_Athena_C
// (Actor)

class UClass* ATrap_Ceiling_Ice_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trap_Ceiling_Ice_Athena_C");

	return Clss;
}


// Trap_Ceiling_Ice_Athena_C Trap_Ceiling_Ice_Athena.Default__Trap_Ceiling_Ice_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrap_Ceiling_Ice_Athena_C* ATrap_Ceiling_Ice_Athena_C::GetDefaultObj()
{
	static class ATrap_Ceiling_Ice_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrap_Ceiling_Ice_Athena_C*>(ATrap_Ceiling_Ice_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


