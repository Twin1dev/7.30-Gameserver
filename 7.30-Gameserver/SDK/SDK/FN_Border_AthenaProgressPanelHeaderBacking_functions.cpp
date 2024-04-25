#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_AthenaProgressPanelHeaderBacking.Border_AthenaProgressPanelHeaderBacking_C
// (None)

class UClass* UBorder_AthenaProgressPanelHeaderBacking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_AthenaProgressPanelHeaderBacking_C");

	return Clss;
}


// Border_AthenaProgressPanelHeaderBacking_C Border_AthenaProgressPanelHeaderBacking.Default__Border_AthenaProgressPanelHeaderBacking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_AthenaProgressPanelHeaderBacking_C* UBorder_AthenaProgressPanelHeaderBacking_C::GetDefaultObj()
{
	static class UBorder_AthenaProgressPanelHeaderBacking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_AthenaProgressPanelHeaderBacking_C*>(UBorder_AthenaProgressPanelHeaderBacking_C::StaticClass()->DefaultObject);

	return Default;
}

}


