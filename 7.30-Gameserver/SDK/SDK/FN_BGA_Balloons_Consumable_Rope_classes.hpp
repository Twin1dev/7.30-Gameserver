#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x7A0 - 0x790)
// BlueprintGeneratedClass BGA_Balloons_Consumable_Rope.BGA_Balloons_Consumable_Rope_C
class ABGA_Balloons_Consumable_Rope_C : public ABuildingGameplayActorBalloonRope
{
public:
	class USkeletalMeshComponentBudgeted*        Balloon_SKBudgeted;                                // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABGA_Balloons_Consumable_Rope_C* GetDefaultObj();

	void UserConstructionScript();
};

}


