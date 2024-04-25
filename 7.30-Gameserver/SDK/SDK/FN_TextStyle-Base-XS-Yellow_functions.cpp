#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-Yellow.TextStyle-Base-XS-Yellow_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-Yellow_C");

	return Clss;
}


// TextStyle-Base-XS-Yellow_C TextStyle-Base-XS-Yellow.Default__TextStyle-Base-XS-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusYellow_C* UTextStyleMinusBaseMinusXSMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusYellow_C*>(UTextStyleMinusBaseMinusXSMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


