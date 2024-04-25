#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-FreePass-40pc.TextStyle-Base-XS-B-FreePass-40pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusFreePassMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-FreePass-40pc_C");

	return Clss;
}


// TextStyle-Base-XS-B-FreePass-40pc_C TextStyle-Base-XS-B-FreePass-40pc.Default__TextStyle-Base-XS-B-FreePass-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusFreePassMinus40pc_C* UTextStyleMinusBaseMinusXSMinusBMinusFreePassMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusFreePassMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusFreePassMinus40pc_C*>(UTextStyleMinusBaseMinusXSMinusBMinusFreePassMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


