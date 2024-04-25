#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ViewInfoButton_NoText.ViewInfoButton_NoText_C
// (None)

class UClass* UViewInfoButton_NoText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ViewInfoButton_NoText_C");

	return Clss;
}


// ViewInfoButton_NoText_C ViewInfoButton_NoText.Default__ViewInfoButton_NoText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UViewInfoButton_NoText_C* UViewInfoButton_NoText_C::GetDefaultObj()
{
	static class UViewInfoButton_NoText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UViewInfoButton_NoText_C*>(UViewInfoButton_NoText_C::StaticClass()->DefaultObject);

	return Default;
}

}


