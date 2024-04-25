#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_ProjectileTrajectory_Athena_FireworkRockets.B_ProjectileTrajectory_Athena_FireworkRockets_C
// (Actor)

class UClass* AB_ProjectileTrajectory_Athena_FireworkRockets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_ProjectileTrajectory_Athena_FireworkRockets_C");

	return Clss;
}


// B_ProjectileTrajectory_Athena_FireworkRockets_C B_ProjectileTrajectory_Athena_FireworkRockets.Default__B_ProjectileTrajectory_Athena_FireworkRockets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_ProjectileTrajectory_Athena_FireworkRockets_C* AB_ProjectileTrajectory_Athena_FireworkRockets_C::GetDefaultObj()
{
	static class AB_ProjectileTrajectory_Athena_FireworkRockets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_ProjectileTrajectory_Athena_FireworkRockets_C*>(AB_ProjectileTrajectory_Athena_FireworkRockets_C::StaticClass()->DefaultObject);

	return Default;
}

}


