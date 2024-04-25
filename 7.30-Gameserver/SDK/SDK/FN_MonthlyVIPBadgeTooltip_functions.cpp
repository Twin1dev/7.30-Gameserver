#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MonthlyVIPBadgeTooltip.MonthlyVIPBadgeTooltip_C
// (None)

class UClass* UMonthlyVIPBadgeTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonthlyVIPBadgeTooltip_C");

	return Clss;
}


// MonthlyVIPBadgeTooltip_C MonthlyVIPBadgeTooltip.Default__MonthlyVIPBadgeTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonthlyVIPBadgeTooltip_C* UMonthlyVIPBadgeTooltip_C::GetDefaultObj()
{
	static class UMonthlyVIPBadgeTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonthlyVIPBadgeTooltip_C*>(UMonthlyVIPBadgeTooltip_C::StaticClass()->DefaultObject);

	return Default;
}

}


