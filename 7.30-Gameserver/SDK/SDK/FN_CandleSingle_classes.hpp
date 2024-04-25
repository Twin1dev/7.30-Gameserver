#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xDB8 - 0xDA8)
// BlueprintGeneratedClass CandleSingle.CandleSingle_C
class ACandleSingle_C : public AParent_BuildingPropActor_C
{
public:
	class UStaticMeshComponent*                  SM_FlameShape;                                     // 0xDA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0xDB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACandleSingle_C* GetDefaultObj();

	void UserConstructionScript();
};

}


