#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SquadIcon.SquadIcon_C
// (None)

class UClass* USquadIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SquadIcon_C");

	return Clss;
}


// SquadIcon_C SquadIcon.Default__SquadIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USquadIcon_C* USquadIcon_C::GetDefaultObj()
{
	static class USquadIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USquadIcon_C*>(USquadIcon_C::StaticClass()->DefaultObject);

	return Default;
}

}


