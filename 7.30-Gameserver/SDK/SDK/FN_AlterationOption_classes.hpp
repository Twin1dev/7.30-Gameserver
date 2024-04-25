#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5D (0xBCD - 0xB70)
// WidgetBlueprintGeneratedClass AlterationOption.AlterationOption_C
class UAlterationOption_C : public UFortAlterationOption
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PerkLoad;                                          // 0xB78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLoadGuard*                      CommonLoadGuard_0;                                 // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Description;                                       // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageAlteration;                                   // 0xB90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageBackground;                                   // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLockPerk;                                     // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PipsBackground;                                    // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxIcon;                                      // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Spacer;                                            // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UpgradePips;                                       // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        MaxPipCount;                                       // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EFortBrushSize                    IconSize;                                          // 0xBCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAlterationOption_C* GetDefaultObj();

	void SetWidgetSettings(enum class EFortBrushSize InIconSize);
	struct FSlateBrush GetValidBrush(class UFortAlterationItemDefinition* CallFunc_GetAlterationDefinition_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue);
	void HasValidBrush(bool* ValidBrush, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void InitIcon(bool CallFunc_HasValidBrush_ValidBrush, const struct FSlateBrush& CallFunc_GetValidBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush);
	void IntroPlay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void IntroReset(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetupPips(class UMaterialInstanceDynamic* Mid, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefinition_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, float CallFunc_GetNextPipCount_ReturnValue, float CallFunc_GetCurrentPipCount_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void OnSetup();
	void HandleInputMethodChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_AlterationOption(int32 EntryPoint, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefinition_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


