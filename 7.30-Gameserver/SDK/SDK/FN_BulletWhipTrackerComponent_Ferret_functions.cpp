#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_Ferret.BulletWhipTrackerComponent_Ferret_C
// (None)

class UClass* UBulletWhipTrackerComponent_Ferret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_Ferret_C");

	return Clss;
}


// BulletWhipTrackerComponent_Ferret_C BulletWhipTrackerComponent_Ferret.Default__BulletWhipTrackerComponent_Ferret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_Ferret_C* UBulletWhipTrackerComponent_Ferret_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_Ferret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_Ferret_C*>(UBulletWhipTrackerComponent_Ferret_C::StaticClass()->DefaultObject);

	return Default;
}

}


