#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x349 - 0x338)
// BlueprintGeneratedClass BP_SplineMesh.BP_SplineMesh_C
class ABP_SplineMesh_C : public ASplineMeshActor
{
public:
	class USplineComponent*                      Spline;                                            // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoSmoothTangent;                                 // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5018[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Tension;                                           // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseScaling;                                        // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_SplineMesh_C* GetDefaultObj();

	void UserConstructionScript(const struct FTransform& Temp_struct_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FVector& CallFunc_GetScaleAtSplinePoint_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetScaleAtSplinePoint_ReturnValue1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location1, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent1, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_VSize_ReturnValue1, const struct FVector& CallFunc_SelectVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_GetScaleAtSplinePoint_ReturnValue2, const struct FVector& CallFunc_SelectVector_ReturnValue1, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, const struct FVector& CallFunc_GetScaleAtSplinePoint_ReturnValue3, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location2, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Location3, const struct FVector& CallFunc_GetLocationAndTangentAtSplinePoint_Tangent3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue3, enum class ESplineMeshAxis CallFunc_GetForwardAxis_ReturnValue);
};

}


