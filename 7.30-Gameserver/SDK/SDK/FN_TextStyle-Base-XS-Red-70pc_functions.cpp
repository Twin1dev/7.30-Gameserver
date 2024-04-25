#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-Red-70pc.TextStyle-Base-XS-Red-70pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusRedMinus70pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-Red-70pc_C");

	return Clss;
}


// TextStyle-Base-XS-Red-70pc_C TextStyle-Base-XS-Red-70pc.Default__TextStyle-Base-XS-Red-70pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusRedMinus70pc_C* UTextStyleMinusBaseMinusXSMinusRedMinus70pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusRedMinus70pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusRedMinus70pc_C*>(UTextStyleMinusBaseMinusXSMinusRedMinus70pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


