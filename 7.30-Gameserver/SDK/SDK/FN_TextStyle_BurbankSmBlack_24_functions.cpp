#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbankSmBlack_24.TextStyle_BurbankSmBlack_24_C
// (None)

class UClass* UTextStyle_BurbankSmBlack_24_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbankSmBlack_24_C");

	return Clss;
}


// TextStyle_BurbankSmBlack_24_C TextStyle_BurbankSmBlack_24.Default__TextStyle_BurbankSmBlack_24_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbankSmBlack_24_C* UTextStyle_BurbankSmBlack_24_C::GetDefaultObj()
{
	static class UTextStyle_BurbankSmBlack_24_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbankSmBlack_24_C*>(UTextStyle_BurbankSmBlack_24_C::StaticClass()->DefaultObject);

	return Default;
}

}


