#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xDE8 - 0xDD8)
// BlueprintGeneratedClass B_GrenadeLauncher_Generic_Athena.B_GrenadeLauncher_Generic_Athena_C
class AB_GrenadeLauncher_Generic_Athena_C : public AB_Ranged_Generic_C
{
public:
	class UStaticMeshComponent*                  Reload_MagazineReload;                             // 0xDD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Reload_Ammo;                                       // 0xDE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_GrenadeLauncher_Generic_Athena_C* GetDefaultObj();

	void UserConstructionScript();
};

}


