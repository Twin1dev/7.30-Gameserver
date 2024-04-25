#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortniteDefaultBackgroundBlurWidget.FortniteDefaultBackgroundBlurWidget_C
// (None)

class UClass* UFortniteDefaultBackgroundBlurWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortniteDefaultBackgroundBlurWidget_C");

	return Clss;
}


// FortniteDefaultBackgroundBlurWidget_C FortniteDefaultBackgroundBlurWidget.Default__FortniteDefaultBackgroundBlurWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortniteDefaultBackgroundBlurWidget_C* UFortniteDefaultBackgroundBlurWidget_C::GetDefaultObj()
{
	static class UFortniteDefaultBackgroundBlurWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortniteDefaultBackgroundBlurWidget_C*>(UFortniteDefaultBackgroundBlurWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


