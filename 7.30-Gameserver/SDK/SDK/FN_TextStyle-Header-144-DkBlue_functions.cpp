#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-144-DkBlue.TextStyle-Header-144-DkBlue_C
// (None)

class UClass* UTextStyleMinusHeaderMinus144MinusDkBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-144-DkBlue_C");

	return Clss;
}


// TextStyle-Header-144-DkBlue_C TextStyle-Header-144-DkBlue.Default__TextStyle-Header-144-DkBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinus144MinusDkBlue_C* UTextStyleMinusHeaderMinus144MinusDkBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinus144MinusDkBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinus144MinusDkBlue_C*>(UTextStyleMinusHeaderMinus144MinusDkBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


