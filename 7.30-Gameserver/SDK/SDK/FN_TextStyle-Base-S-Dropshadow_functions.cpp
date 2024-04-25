#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-Dropshadow.TextStyle-Base-S-DropShadow_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusDropShadow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-DropShadow_C");

	return Clss;
}


// TextStyle-Base-S-DropShadow_C TextStyle-Base-S-Dropshadow.Default__TextStyle-Base-S-DropShadow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusDropShadow_C* UTextStyleMinusBaseMinusSMinusDropShadow_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusDropShadow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusDropShadow_C*>(UTextStyleMinusBaseMinusSMinusDropShadow_C::StaticClass()->DefaultObject);

	return Default;
}

}


