#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CubeRollCamerShake.CubeRollCamerShake_C
// (None)

class UClass* UCubeRollCamerShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CubeRollCamerShake_C");

	return Clss;
}


// CubeRollCamerShake_C CubeRollCamerShake.Default__CubeRollCamerShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCubeRollCamerShake_C* UCubeRollCamerShake_C::GetDefaultObj()
{
	static class UCubeRollCamerShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCubeRollCamerShake_C*>(UCubeRollCamerShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


