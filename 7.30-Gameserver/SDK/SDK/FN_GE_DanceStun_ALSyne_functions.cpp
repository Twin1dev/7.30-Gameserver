#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DanceStun_ALSyne.GE_DanceStun_ALSyne_C
// (None)

class UClass* UGE_DanceStun_ALSyne_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DanceStun_ALSyne_C");

	return Clss;
}


// GE_DanceStun_ALSyne_C GE_DanceStun_ALSyne.Default__GE_DanceStun_ALSyne_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DanceStun_ALSyne_C* UGE_DanceStun_ALSyne_C::GetDefaultObj()
{
	static class UGE_DanceStun_ALSyne_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DanceStun_ALSyne_C*>(UGE_DanceStun_ALSyne_C::StaticClass()->DefaultObject);

	return Default;
}

}


