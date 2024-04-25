#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Playspace_Instance_ObstacleCourse4.GA_Athena_Playspace_Instance_ObstacleCourse4_C
// (None)

class UClass* UGA_Athena_Playspace_Instance_ObstacleCourse4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Playspace_Instance_ObstacleCourse4_C");

	return Clss;
}


// GA_Athena_Playspace_Instance_ObstacleCourse4_C GA_Athena_Playspace_Instance_ObstacleCourse4.Default__GA_Athena_Playspace_Instance_ObstacleCourse4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Playspace_Instance_ObstacleCourse4_C* UGA_Athena_Playspace_Instance_ObstacleCourse4_C::GetDefaultObj()
{
	static class UGA_Athena_Playspace_Instance_ObstacleCourse4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Playspace_Instance_ObstacleCourse4_C*>(UGA_Athena_Playspace_Instance_ObstacleCourse4_C::StaticClass()->DefaultObject);

	return Default;
}

}


