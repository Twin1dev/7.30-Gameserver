#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Generic_BotTurret_Impact.GCNS_Generic_BotTurret_Impact_C
// (None)

class UClass* UGCNS_Generic_BotTurret_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Generic_BotTurret_Impact_C");

	return Clss;
}


// GCNS_Generic_BotTurret_Impact_C GCNS_Generic_BotTurret_Impact.Default__GCNS_Generic_BotTurret_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Generic_BotTurret_Impact_C* UGCNS_Generic_BotTurret_Impact_C::GetDefaultObj()
{
	static class UGCNS_Generic_BotTurret_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Generic_BotTurret_Impact_C*>(UGCNS_Generic_BotTurret_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}


