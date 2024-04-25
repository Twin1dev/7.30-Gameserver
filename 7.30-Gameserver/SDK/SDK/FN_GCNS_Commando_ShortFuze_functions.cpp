#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNS_Commando_ShortFuze.GCNS_Commando_ShortFuze_C
// (None)

class UClass* UGCNS_Commando_ShortFuze_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNS_Commando_ShortFuze_C");

	return Clss;
}


// GCNS_Commando_ShortFuze_C GCNS_Commando_ShortFuze.Default__GCNS_Commando_ShortFuze_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNS_Commando_ShortFuze_C* UGCNS_Commando_ShortFuze_C::GetDefaultObj()
{
	static class UGCNS_Commando_ShortFuze_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNS_Commando_ShortFuze_C*>(UGCNS_Commando_ShortFuze_C::StaticClass()->DefaultObject);

	return Default;
}

}


