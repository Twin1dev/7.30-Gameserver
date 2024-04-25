#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SignInAlternateWidget.SignInAlternateWidget_C
// (None)

class UClass* USignInAlternateWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SignInAlternateWidget_C");

	return Clss;
}


// SignInAlternateWidget_C SignInAlternateWidget.Default__SignInAlternateWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USignInAlternateWidget_C* USignInAlternateWidget_C::GetDefaultObj()
{
	static class USignInAlternateWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USignInAlternateWidget_C*>(USignInAlternateWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


