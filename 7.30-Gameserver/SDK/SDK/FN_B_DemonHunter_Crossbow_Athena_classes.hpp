#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xDE8 - 0xDD8)
// BlueprintGeneratedClass B_DemonHunter_Crossbow_Athena.B_DemonHunter_Crossbow_Athena_C
class AB_DemonHunter_Crossbow_Athena_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_DemonHunter_Crossbow_FireTipFlare;               // 0xDE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_DemonHunter_Crossbow_Athena_C* GetDefaultObj();

	void UserConstructionScript();
	void OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile);
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void ExecuteUbergraph_B_DemonHunter_Crossbow_Athena(int32 EntryPoint, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsActive_ReturnValue, class AFortProjectileBase* K2Node_Event_SpawnProjectile);
};

}


