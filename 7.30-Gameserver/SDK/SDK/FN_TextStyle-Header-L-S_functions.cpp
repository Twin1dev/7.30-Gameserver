#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-S.TextStyle-Header-L-S_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-S_C");

	return Clss;
}


// TextStyle-Header-L-S_C TextStyle-Header-L-S.Default__TextStyle-Header-L-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusS_C* UTextStyleMinusHeaderMinusLMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusS_C*>(UTextStyleMinusHeaderMinusLMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


