#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3D8 - 0x3D0)
// BlueprintGeneratedClass BP_AmbientSplineActor.BP_AmbientSplineActor_C
class ABP_AmbientSplineActor_C : public AFortSplineAudioActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_AmbientSplineActor_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Check_Closest_Point();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AmbientSplineActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


