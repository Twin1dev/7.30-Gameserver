#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Horizon-Yellow.TextStyle-Header-L-Horizon-Yellow_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusHorizonMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Horizon-Yellow_C");

	return Clss;
}


// TextStyle-Header-L-Horizon-Yellow_C TextStyle-Header-L-Horizon-Yellow.Default__TextStyle-Header-L-Horizon-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusHorizonMinusYellow_C* UTextStyleMinusHeaderMinusLMinusHorizonMinusYellow_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusHorizonMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusHorizonMinusYellow_C*>(UTextStyleMinusHeaderMinusLMinusHorizonMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


