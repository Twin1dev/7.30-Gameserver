#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LiveViolator.LiveViolator_C
// (None)

class UClass* ULiveViolator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveViolator_C");

	return Clss;
}


// LiveViolator_C LiveViolator.Default__LiveViolator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiveViolator_C* ULiveViolator_C::GetDefaultObj()
{
	static class ULiveViolator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveViolator_C*>(ULiveViolator_C::StaticClass()->DefaultObject);

	return Default;
}

}


