#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB78 - 0xB68)
// WidgetBlueprintGeneratedClass TextRotator.TextRotator_C
class UTextRotator_C : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         MainBorder;                                        // 0xB70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTextRotator_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_TextRotator(int32 EntryPoint);
};

}


