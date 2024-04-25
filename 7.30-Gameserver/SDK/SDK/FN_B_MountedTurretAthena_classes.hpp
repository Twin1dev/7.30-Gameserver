#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE78 - 0xE70)
// BlueprintGeneratedClass B_MountedTurretAthena.B_MountedTurretAthena_C
class AB_MountedTurretAthena_C : public AB_Ranged_Dual_Generic_MountedTurret_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE70(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_MountedTurretAthena_C* GetDefaultObj();

	void UserConstructionScript();
	void OnHostVehicleSetup();
	void ExecuteUbergraph_B_MountedTurretAthena(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AAthena_Player_SneakySnowman_C* K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Array_Add_ReturnValue);
};

}


