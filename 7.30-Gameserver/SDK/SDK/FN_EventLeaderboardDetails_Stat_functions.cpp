#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C
// (None)

class UClass* UEventLeaderboardDetails_Stat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventLeaderboardDetails_Stat_C");

	return Clss;
}


// EventLeaderboardDetails_Stat_C EventLeaderboardDetails_Stat.Default__EventLeaderboardDetails_Stat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventLeaderboardDetails_Stat_C* UEventLeaderboardDetails_Stat_C::GetDefaultObj()
{
	static class UEventLeaderboardDetails_Stat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventLeaderboardDetails_Stat_C*>(UEventLeaderboardDetails_Stat_C::StaticClass()->DefaultObject);

	return Default;
}

}


