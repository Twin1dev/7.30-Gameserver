#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PG_Playspace_Obstacle_Gallery.GA_PG_Playspace_Obstacle_Gallery_c
// (None)

class UClass* UGA_PG_Playspace_Obstacle_Gallery_c::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PG_Playspace_Obstacle_Gallery_c");

	return Clss;
}


// GA_PG_Playspace_Obstacle_Gallery_c GA_PG_Playspace_Obstacle_Gallery.Default__GA_PG_Playspace_Obstacle_Gallery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PG_Playspace_Obstacle_Gallery_c* UGA_PG_Playspace_Obstacle_Gallery_c::GetDefaultObj()
{
	static class UGA_PG_Playspace_Obstacle_Gallery_c* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PG_Playspace_Obstacle_Gallery_c*>(UGA_PG_Playspace_Obstacle_Gallery_c::StaticClass()->DefaultObject);

	return Default;
}

}


