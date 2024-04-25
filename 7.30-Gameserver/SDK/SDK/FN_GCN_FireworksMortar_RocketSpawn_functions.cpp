#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_FireworksMortar_RocketSpawn.GCN_FireworksMortar_RocketSpawn_C
// (None)

class UClass* UGCN_FireworksMortar_RocketSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_FireworksMortar_RocketSpawn_C");

	return Clss;
}


// GCN_FireworksMortar_RocketSpawn_C GCN_FireworksMortar_RocketSpawn.Default__GCN_FireworksMortar_RocketSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_FireworksMortar_RocketSpawn_C* UGCN_FireworksMortar_RocketSpawn_C::GetDefaultObj()
{
	static class UGCN_FireworksMortar_RocketSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_FireworksMortar_RocketSpawn_C*>(UGCN_FireworksMortar_RocketSpawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


