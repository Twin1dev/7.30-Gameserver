#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FounderBadgeTooltip.FounderBadgeTooltip_C
// (None)

class UClass* UFounderBadgeTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FounderBadgeTooltip_C");

	return Clss;
}


// FounderBadgeTooltip_C FounderBadgeTooltip.Default__FounderBadgeTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFounderBadgeTooltip_C* UFounderBadgeTooltip_C::GetDefaultObj()
{
	static class UFounderBadgeTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFounderBadgeTooltip_C*>(UFounderBadgeTooltip_C::StaticClass()->DefaultObject);

	return Default;
}

}


