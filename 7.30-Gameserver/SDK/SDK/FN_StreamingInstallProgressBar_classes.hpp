#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x24C - 0x230)
// WidgetBlueprintGeneratedClass StreamingInstallProgressBar.StreamingInstallProgressBar_C
class UStreamingInstallProgressBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          StreamingInstallProgressBar;                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          RefreshTimer;                                      // 0x240(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        RefreshTime;                                       // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStreamingInstallProgressBar_C* GetDefaultObj();

	void RefreshTick(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, float CallFunc_ContentInstallationProgress_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void ToggleTimer(bool Enable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_StreamingInstallProgressBar(int32 EntryPoint);
};

}


