#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_FortMaterialProgressBar.BP_FortMaterialProgressBar_C
// (None)

class UClass* UBP_FortMaterialProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FortMaterialProgressBar_C");

	return Clss;
}


// BP_FortMaterialProgressBar_C BP_FortMaterialProgressBar.Default__BP_FortMaterialProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FortMaterialProgressBar_C* UBP_FortMaterialProgressBar_C::GetDefaultObj()
{
	static class UBP_FortMaterialProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FortMaterialProgressBar_C*>(UBP_FortMaterialProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


