#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoginResultWIdget.LoginResultWIdget_C
// (None)

class UClass* ULoginResultWIdget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginResultWIdget_C");

	return Clss;
}


// LoginResultWIdget_C LoginResultWIdget.Default__LoginResultWIdget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoginResultWIdget_C* ULoginResultWIdget_C::GetDefaultObj()
{
	static class ULoginResultWIdget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginResultWIdget_C*>(ULoginResultWIdget_C::StaticClass()->DefaultObject);

	return Default;
}

}


