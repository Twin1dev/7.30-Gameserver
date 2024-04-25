#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_RiftSpawnerCreate_Ice.GCN_RiftSpawnerCreate_Ice_C
// (None)

class UClass* UGCN_RiftSpawnerCreate_Ice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_RiftSpawnerCreate_Ice_C");

	return Clss;
}


// GCN_RiftSpawnerCreate_Ice_C GCN_RiftSpawnerCreate_Ice.Default__GCN_RiftSpawnerCreate_Ice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_RiftSpawnerCreate_Ice_C* UGCN_RiftSpawnerCreate_Ice_C::GetDefaultObj()
{
	static class UGCN_RiftSpawnerCreate_Ice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_RiftSpawnerCreate_Ice_C*>(UGCN_RiftSpawnerCreate_Ice_C::StaticClass()->DefaultObject);

	return Default;
}

}


