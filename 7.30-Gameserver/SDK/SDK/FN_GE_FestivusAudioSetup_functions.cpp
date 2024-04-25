#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FestivusAudioSetup.GE_FestivusAudioSetup_C
// (None)

class UClass* UGE_FestivusAudioSetup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FestivusAudioSetup_C");

	return Clss;
}


// GE_FestivusAudioSetup_C GE_FestivusAudioSetup.Default__GE_FestivusAudioSetup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FestivusAudioSetup_C* UGE_FestivusAudioSetup_C::GetDefaultObj()
{
	static class UGE_FestivusAudioSetup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FestivusAudioSetup_C*>(UGE_FestivusAudioSetup_C::StaticClass()->DefaultObject);

	return Default;
}

}


