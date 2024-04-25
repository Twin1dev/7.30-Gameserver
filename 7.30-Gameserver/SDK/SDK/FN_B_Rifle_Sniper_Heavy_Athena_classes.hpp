#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xDE0 - 0xDD8)
// BlueprintGeneratedClass B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C
class AB_Rifle_Sniper_Heavy_Athena_C : public AB_Rifle_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_Rifle_Sniper_Heavy_Athena_C* GetDefaultObj();

	void CalculateTraceDistance(struct FVector* StartPoint, struct FVector* EndPoint, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue5);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


