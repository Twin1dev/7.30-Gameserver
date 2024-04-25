#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectionMainItemDetailsHostPanel.ItemInspectionMainItemDetailsHostPanel_C
// (None)

class UClass* UItemInspectionMainItemDetailsHostPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectionMainItemDetailsHostPanel_C");

	return Clss;
}


// ItemInspectionMainItemDetailsHostPanel_C ItemInspectionMainItemDetailsHostPanel.Default__ItemInspectionMainItemDetailsHostPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectionMainItemDetailsHostPanel_C* UItemInspectionMainItemDetailsHostPanel_C::GetDefaultObj()
{
	static class UItemInspectionMainItemDetailsHostPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectionMainItemDetailsHostPanel_C*>(UItemInspectionMainItemDetailsHostPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


