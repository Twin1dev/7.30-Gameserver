#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Green-20pc.TextStyle-Header-L-Green-20pc_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusGreenMinus20pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Green-20pc_C");

	return Clss;
}


// TextStyle-Header-L-Green-20pc_C TextStyle-Header-L-Green-20pc.Default__TextStyle-Header-L-Green-20pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusGreenMinus20pc_C* UTextStyleMinusHeaderMinusLMinusGreenMinus20pc_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusGreenMinus20pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusGreenMinus20pc_C*>(UTextStyleMinusHeaderMinusLMinusGreenMinus20pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


