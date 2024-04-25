#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-BlueGray.TextStyle-Base-XS-BlueGray_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBlueGray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-BlueGray_C");

	return Clss;
}


// TextStyle-Base-XS-BlueGray_C TextStyle-Base-XS-BlueGray.Default__TextStyle-Base-XS-BlueGray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBlueGray_C* UTextStyleMinusBaseMinusXSMinusBlueGray_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBlueGray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBlueGray_C*>(UTextStyleMinusBaseMinusXSMinusBlueGray_C::StaticClass()->DefaultObject);

	return Default;
}

}


