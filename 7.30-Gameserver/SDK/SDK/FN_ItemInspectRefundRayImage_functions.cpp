#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectRefundRayImage.ItemInspectRefundRayImage_C
// (None)

class UClass* UItemInspectRefundRayImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectRefundRayImage_C");

	return Clss;
}


// ItemInspectRefundRayImage_C ItemInspectRefundRayImage.Default__ItemInspectRefundRayImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectRefundRayImage_C* UItemInspectRefundRayImage_C::GetDefaultObj()
{
	static class UItemInspectRefundRayImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectRefundRayImage_C*>(UItemInspectRefundRayImage_C::StaticClass()->DefaultObject);

	return Default;
}

}


