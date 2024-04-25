#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x938 - 0x930)
// BlueprintGeneratedClass GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C
class AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C : public AGC_Outlander_Phaseshift_AppliedFX_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x930(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash(int32 EntryPoint);
};

}


