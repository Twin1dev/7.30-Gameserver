#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SubsystemNameDisplay.SubsystemNameDisplay_C
// (None)

class UClass* USubsystemNameDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubsystemNameDisplay_C");

	return Clss;
}


// SubsystemNameDisplay_C SubsystemNameDisplay.Default__SubsystemNameDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubsystemNameDisplay_C* USubsystemNameDisplay_C::GetDefaultObj()
{
	static class USubsystemNameDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubsystemNameDisplay_C*>(USubsystemNameDisplay_C::StaticClass()->DefaultObject);

	return Default;
}

}


