#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x340 - 0x330)
// BlueprintGeneratedClass FlyingVehicleBoundarySpline.FlyingVehicleBoundarySpline_C
class AFlyingVehicleBoundarySpline_C : public AActor
{
public:
	class USplineComponent*                      Spline;                                            // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFlyingVehicleBoundarySpline_C* GetDefaultObj();

	void UserConstructionScript();
};

}


