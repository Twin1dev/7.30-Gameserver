#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_AthenaEvent1_SneakySilencers.MissionGen_AthenaEvent1_SneakySilencers_C
// (None)

class UClass* UMissionGen_AthenaEvent1_SneakySilencers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_AthenaEvent1_SneakySilencers_C");

	return Clss;
}


// MissionGen_AthenaEvent1_SneakySilencers_C MissionGen_AthenaEvent1_SneakySilencers.Default__MissionGen_AthenaEvent1_SneakySilencers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_AthenaEvent1_SneakySilencers_C* UMissionGen_AthenaEvent1_SneakySilencers_C::GetDefaultObj()
{
	static class UMissionGen_AthenaEvent1_SneakySilencers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_AthenaEvent1_SneakySilencers_C*>(UMissionGen_AthenaEvent1_SneakySilencers_C::StaticClass()->DefaultObject);

	return Default;
}

}


