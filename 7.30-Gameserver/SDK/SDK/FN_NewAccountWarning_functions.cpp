#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NewAccountWarning.NewAccountWarning_C
// (None)

class UClass* UNewAccountWarning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewAccountWarning_C");

	return Clss;
}


// NewAccountWarning_C NewAccountWarning.Default__NewAccountWarning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNewAccountWarning_C* UNewAccountWarning_C::GetDefaultObj()
{
	static class UNewAccountWarning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewAccountWarning_C*>(UNewAccountWarning_C::StaticClass()->DefaultObject);

	return Default;
}

}


