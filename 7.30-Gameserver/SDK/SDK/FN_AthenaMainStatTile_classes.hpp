#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x278 - 0x230)
// WidgetBlueprintGeneratedClass AthenaMainStatTile.AthenaMainStatTile_C
class UAthenaMainStatTile_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Glow;                                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NameTextBlock;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ValueTextBlock;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  StatName;                                          // 0x250(0x18)(Edit, BlueprintVisible)
	class FString                                BaseTagName;                                       // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaMainStatTile_C* GetDefaultObj();

	void SetStatValue(class FText StatValueAsText, class FText CallFunc_TextToUpper_ReturnValue);
	void SetTagAndDisplayName(const class FString& Tag, class FText DisplayName, class FText CallFunc_TextToUpper_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaMainStatTile(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}


