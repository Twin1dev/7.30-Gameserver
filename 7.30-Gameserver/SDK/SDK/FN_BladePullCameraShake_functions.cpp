#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BladePullCameraShake.BladePullCameraShake_C
// (None)

class UClass* UBladePullCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BladePullCameraShake_C");

	return Clss;
}


// BladePullCameraShake_C BladePullCameraShake.Default__BladePullCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBladePullCameraShake_C* UBladePullCameraShake_C::GetDefaultObj()
{
	static class UBladePullCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBladePullCameraShake_C*>(UBladePullCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


