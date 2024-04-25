#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Cube_Area_Effect.GE_Cube_Area_Effect_C
// (None)

class UClass* UGE_Cube_Area_Effect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Cube_Area_Effect_C");

	return Clss;
}


// GE_Cube_Area_Effect_C GE_Cube_Area_Effect.Default__GE_Cube_Area_Effect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Cube_Area_Effect_C* UGE_Cube_Area_Effect_C::GetDefaultObj()
{
	static class UGE_Cube_Area_Effect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Cube_Area_Effect_C*>(UGE_Cube_Area_Effect_C::StaticClass()->DefaultObject);

	return Default;
}

}


