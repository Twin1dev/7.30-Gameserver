#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionRewardBoostBadgeTooltip.MissionRewardBoostBadgeTooltip_C
// (None)

class UClass* UMissionRewardBoostBadgeTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionRewardBoostBadgeTooltip_C");

	return Clss;
}


// MissionRewardBoostBadgeTooltip_C MissionRewardBoostBadgeTooltip.Default__MissionRewardBoostBadgeTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionRewardBoostBadgeTooltip_C* UMissionRewardBoostBadgeTooltip_C::GetDefaultObj()
{
	static class UMissionRewardBoostBadgeTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionRewardBoostBadgeTooltip_C*>(UMissionRewardBoostBadgeTooltip_C::StaticClass()->DefaultObject);

	return Default;
}

}


