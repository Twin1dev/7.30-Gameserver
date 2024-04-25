#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PG_Playspace_Props_S_Cubes.GA_PG_Playspace_Props_S_Cubes_C
// (None)

class UClass* UGA_PG_Playspace_Props_S_Cubes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PG_Playspace_Props_S_Cubes_C");

	return Clss;
}


// GA_PG_Playspace_Props_S_Cubes_C GA_PG_Playspace_Props_S_Cubes.Default__GA_PG_Playspace_Props_S_Cubes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PG_Playspace_Props_S_Cubes_C* UGA_PG_Playspace_Props_S_Cubes_C::GetDefaultObj()
{
	static class UGA_PG_Playspace_Props_S_Cubes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PG_Playspace_Props_S_Cubes_C*>(UGA_PG_Playspace_Props_S_Cubes_C::StaticClass()->DefaultObject);

	return Default;
}

}


