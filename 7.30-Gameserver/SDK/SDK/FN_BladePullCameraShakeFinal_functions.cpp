#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BladePullCameraShakeFinal.BladePullCameraShakeFinal_C
// (None)

class UClass* UBladePullCameraShakeFinal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BladePullCameraShakeFinal_C");

	return Clss;
}


// BladePullCameraShakeFinal_C BladePullCameraShakeFinal.Default__BladePullCameraShakeFinal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBladePullCameraShakeFinal_C* UBladePullCameraShakeFinal_C::GetDefaultObj()
{
	static class UBladePullCameraShakeFinal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBladePullCameraShakeFinal_C*>(UBladePullCameraShakeFinal_C::StaticClass()->DefaultObject);

	return Default;
}

}


