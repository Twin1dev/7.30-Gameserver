#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ferret_Grant_ExitHoldEvent.GE_Ferret_Grant_ExitHoldEvent_C
// (None)

class UClass* UGE_Ferret_Grant_ExitHoldEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ferret_Grant_ExitHoldEvent_C");

	return Clss;
}


// GE_Ferret_Grant_ExitHoldEvent_C GE_Ferret_Grant_ExitHoldEvent.Default__GE_Ferret_Grant_ExitHoldEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ferret_Grant_ExitHoldEvent_C* UGE_Ferret_Grant_ExitHoldEvent_C::GetDefaultObj()
{
	static class UGE_Ferret_Grant_ExitHoldEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ferret_Grant_ExitHoldEvent_C*>(UGE_Ferret_Grant_ExitHoldEvent_C::StaticClass()->DefaultObject);

	return Default;
}

}


