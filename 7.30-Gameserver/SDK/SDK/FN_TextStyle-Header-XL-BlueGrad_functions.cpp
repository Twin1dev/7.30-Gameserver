#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XL-BlueGrad.TextStyle-Header-XL-BlueGrad_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXLMinusBlueGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XL-BlueGrad_C");

	return Clss;
}


// TextStyle-Header-XL-BlueGrad_C TextStyle-Header-XL-BlueGrad.Default__TextStyle-Header-XL-BlueGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXLMinusBlueGrad_C* UTextStyleMinusHeaderMinusXLMinusBlueGrad_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXLMinusBlueGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXLMinusBlueGrad_C*>(UTextStyleMinusHeaderMinusXLMinusBlueGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


