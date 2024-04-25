#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XL-Purple.TextStyle-Header-XL-Purple_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXLMinusPurple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XL-Purple_C");

	return Clss;
}


// TextStyle-Header-XL-Purple_C TextStyle-Header-XL-Purple.Default__TextStyle-Header-XL-Purple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXLMinusPurple_C* UTextStyleMinusHeaderMinusXLMinusPurple_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXLMinusPurple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXLMinusPurple_C*>(UTextStyleMinusHeaderMinusXLMinusPurple_C::StaticClass()->DefaultObject);

	return Default;
}

}


