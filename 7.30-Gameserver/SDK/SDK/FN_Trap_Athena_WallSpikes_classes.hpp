#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xEE8 - 0xED9)
// BlueprintGeneratedClass Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C
class ATrap_Athena_WallSpikes_C : public ATrap_Athena_Spikes_C
{
public:
	uint8                                        Pad_543A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ATrap_Athena_WallSpikes_C* GetDefaultObj();

	void UserConstructionScript();
	void SetSpikePosition(float NewSpikePosition);
	void ExecuteUbergraph_Trap_Athena_WallSpikes(int32 EntryPoint, float K2Node_Event_NewSpikePosition, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


