#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xDA8 - 0xD90)
// BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C
class AParent_BuildingWall_C : public ABuildingWall
{
public:
	struct FVector                               BuildingBoundsMax;                                 // 0xD90(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               BuildingBoundsMin;                                 // 0xD9C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AParent_BuildingWall_C* GetDefaultObj();

	void UserConstructionScript();
};

}


