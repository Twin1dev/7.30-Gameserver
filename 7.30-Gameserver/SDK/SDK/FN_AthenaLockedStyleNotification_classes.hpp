#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x238 - 0x228)
// WidgetBlueprintGeneratedClass AthenaLockedStyleNotification.AthenaLockedStyleNotification_C
class UAthenaLockedStyleNotification_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      DescriptionText;                                   // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaLockedStyleNotification_C* GetDefaultObj();

	void SetLockedStyleDescription(class FText LockedStyleDescription);
	void Construct();
	void ExecuteUbergraph_AthenaLockedStyleNotification(int32 EntryPoint);
};

}


