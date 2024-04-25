#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Trap_BouncePad_Athena_BounceCountTracker.GE_Trap_BouncePad_Athena_BounceCountTracker_C
// (None)

class UClass* UGE_Trap_BouncePad_Athena_BounceCountTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Trap_BouncePad_Athena_BounceCountTracker_C");

	return Clss;
}


// GE_Trap_BouncePad_Athena_BounceCountTracker_C GE_Trap_BouncePad_Athena_BounceCountTracker.Default__GE_Trap_BouncePad_Athena_BounceCountTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Trap_BouncePad_Athena_BounceCountTracker_C* UGE_Trap_BouncePad_Athena_BounceCountTracker_C::GetDefaultObj()
{
	static class UGE_Trap_BouncePad_Athena_BounceCountTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Trap_BouncePad_Athena_BounceCountTracker_C*>(UGE_Trap_BouncePad_Athena_BounceCountTracker_C::StaticClass()->DefaultObject);

	return Default;
}

}


