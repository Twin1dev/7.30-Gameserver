#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_RiftSpawnerPreCreate.GCN_RiftSpawnerPreCreate_C
// (None)

class UClass* UGCN_RiftSpawnerPreCreate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_RiftSpawnerPreCreate_C");

	return Clss;
}


// GCN_RiftSpawnerPreCreate_C GCN_RiftSpawnerPreCreate.Default__GCN_RiftSpawnerPreCreate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_RiftSpawnerPreCreate_C* UGCN_RiftSpawnerPreCreate_C::GetDefaultObj()
{
	static class UGCN_RiftSpawnerPreCreate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_RiftSpawnerPreCreate_C*>(UGCN_RiftSpawnerPreCreate_C::StaticClass()->DefaultObject);

	return Default;
}

}


