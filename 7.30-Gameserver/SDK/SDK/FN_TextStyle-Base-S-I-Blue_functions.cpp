#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-I-Blue.TextStyle-Base-S-I-Blue_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusIMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-I-Blue_C");

	return Clss;
}


// TextStyle-Base-S-I-Blue_C TextStyle-Base-S-I-Blue.Default__TextStyle-Base-S-I-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusIMinusBlue_C* UTextStyleMinusBaseMinusSMinusIMinusBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusIMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusIMinusBlue_C*>(UTextStyleMinusBaseMinusSMinusIMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


