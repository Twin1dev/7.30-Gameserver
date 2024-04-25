#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xDEC - 0xDD8)
// BlueprintGeneratedClass B_Pistol_Scoped_Athena.B_Pistol_Scoped_Athena_C
class AB_Pistol_Scoped_Athena_C : public AB_Pistol_Generic_C
{
public:
	class UStaticMeshComponent*                  Reload_QuickReload;                                // 0xDD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Reload_Ammo;                                       // 0xDE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        BlendInTime;                                       // 0xDE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Pistol_Scoped_Athena_C* GetDefaultObj();

	void UserConstructionScript();
};

}


