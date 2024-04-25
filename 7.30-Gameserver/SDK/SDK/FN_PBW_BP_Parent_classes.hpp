#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xDA8 - 0xD90)
// BlueprintGeneratedClass PBW_BP_Parent.PBW_BP_Parent_C
class APBW_BP_Parent_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UStaticMesh*>                   StaticMeshAlternateArray;                          // 0xD98(0x10)(Edit, BlueprintVisible, ZeroConstructor)

	static class UClass* StaticClass();
	static class APBW_BP_Parent_C* GetDefaultObj();

	void OnRep_Random_Chance();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBW_BP_Parent(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item);
};

}


