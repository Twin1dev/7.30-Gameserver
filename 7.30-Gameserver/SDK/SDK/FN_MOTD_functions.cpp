#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MOTD.MOTD_C
// (None)

class UClass* UMOTD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MOTD_C");

	return Clss;
}


// MOTD_C MOTD.Default__MOTD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMOTD_C* UMOTD_C::GetDefaultObj()
{
	static class UMOTD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMOTD_C*>(UMOTD_C::StaticClass()->DefaultObject);

	return Default;
}

}


