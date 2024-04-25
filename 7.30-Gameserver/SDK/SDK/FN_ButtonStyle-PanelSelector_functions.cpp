#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-PanelSelector.ButtonStyle-PanelSelector_C
// (None)

class UClass* UButtonStyleMinusPanelSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-PanelSelector_C");

	return Clss;
}


// ButtonStyle-PanelSelector_C ButtonStyle-PanelSelector.Default__ButtonStyle-PanelSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPanelSelector_C* UButtonStyleMinusPanelSelector_C::GetDefaultObj()
{
	static class UButtonStyleMinusPanelSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPanelSelector_C*>(UButtonStyleMinusPanelSelector_C::StaticClass()->DefaultObject);

	return Default;
}

}


