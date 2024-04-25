#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SquadSlotItemDetailsHostPanel.SquadSlotItemDetailsHostPanel_C
// (None)

class UClass* USquadSlotItemDetailsHostPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SquadSlotItemDetailsHostPanel_C");

	return Clss;
}


// SquadSlotItemDetailsHostPanel_C SquadSlotItemDetailsHostPanel.Default__SquadSlotItemDetailsHostPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USquadSlotItemDetailsHostPanel_C* USquadSlotItemDetailsHostPanel_C::GetDefaultObj()
{
	static class USquadSlotItemDetailsHostPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USquadSlotItemDetailsHostPanel_C*>(USquadSlotItemDetailsHostPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


