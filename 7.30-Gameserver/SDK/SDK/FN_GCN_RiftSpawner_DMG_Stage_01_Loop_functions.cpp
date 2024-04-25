#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_RiftSpawner_DMG_Stage_01_Loop.GCN_RiftSpawner_DMG_Stage_01_Loop_C
// (Actor)

class UClass* AGCN_RiftSpawner_DMG_Stage_01_Loop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_RiftSpawner_DMG_Stage_01_Loop_C");

	return Clss;
}


// GCN_RiftSpawner_DMG_Stage_01_Loop_C GCN_RiftSpawner_DMG_Stage_01_Loop.Default__GCN_RiftSpawner_DMG_Stage_01_Loop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_RiftSpawner_DMG_Stage_01_Loop_C* AGCN_RiftSpawner_DMG_Stage_01_Loop_C::GetDefaultObj()
{
	static class AGCN_RiftSpawner_DMG_Stage_01_Loop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_RiftSpawner_DMG_Stage_01_Loop_C*>(AGCN_RiftSpawner_DMG_Stage_01_Loop_C::StaticClass()->DefaultObject);

	return Default;
}

}


