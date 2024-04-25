#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xDF8 - 0xDD8)
// BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C
class AB_Assault_LMG_SAW_Athena_C : public AB_Assault_Bulletswarm_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               LaserScaleUntargeted;                              // 0xDE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LaserScaleTargeted;                                // 0xDEC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Assault_LMG_SAW_Athena_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSetTargeting(bool bNewIsTargeting);
	void ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int32 EntryPoint, bool K2Node_Event_bNewIsTargeting);
};

}


