#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x988 - 0x980)
// BlueprintGeneratedClass B_TNT_Athena.B_TNT_Athena_C
class AB_TNT_Athena_C : public AB_ConsumableSmall_Athena_C
{
public:
	class USplineComponent*                      Spline;                                            // 0x980(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_TNT_Athena_C* GetDefaultObj();

	void Spline_Point_Locations(TArray<struct FVector>* Array, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue3, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue2, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue3, TArray<struct FVector>& K2Node_MakeArray_Array);
	void UserConstructionScript();
};

}


