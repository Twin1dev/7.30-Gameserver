#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Blue.TextStyle-Header-L-Blue_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Blue_C");

	return Clss;
}


// TextStyle-Header-L-Blue_C TextStyle-Header-L-Blue.Default__TextStyle-Header-L-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusBlue_C* UTextStyleMinusHeaderMinusLMinusBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusBlue_C*>(UTextStyleMinusHeaderMinusLMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


