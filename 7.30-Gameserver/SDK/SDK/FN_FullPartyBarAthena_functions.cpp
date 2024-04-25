#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FullPartyBarAthena.FullPartyBarAthena_C
// (None)

class UClass* UFullPartyBarAthena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullPartyBarAthena_C");

	return Clss;
}


// FullPartyBarAthena_C FullPartyBarAthena.Default__FullPartyBarAthena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullPartyBarAthena_C* UFullPartyBarAthena_C::GetDefaultObj()
{
	static class UFullPartyBarAthena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullPartyBarAthena_C*>(UFullPartyBarAthena_C::StaticClass()->DefaultObject);

	return Default;
}

}


