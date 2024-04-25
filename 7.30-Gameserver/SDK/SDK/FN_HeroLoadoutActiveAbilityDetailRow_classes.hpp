#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2C8 - 0x230)
// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C
class UHeroLoadoutActiveAbilityDetailRow_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         Border_Body;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLockPerk;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImagePerkIcon;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 InfoSwitcher;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LargeInfo;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LargeName;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PerkIconSizeBox;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SmallDescription;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SmallInfo;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SmallName;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IncludeName;                                       // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IncludeDescription;                                // 0x289(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseVerboseDescription;                             // 0x28A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_482F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                UnlockedDisplayNameTextStyle;                      // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LockedDisplayNameTextStyle;                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                UnlockedDescriptionTextStyle;                      // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LockedDescriptionTextStyle;                        // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Icon_Size;                                         // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4830[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             Host_Hero;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFortAbilityKit*                       AbilityKit;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHeroLoadoutActiveAbilityDetailRow_C* GetDefaultObj();

	void SetDisplayState(bool ShowName, bool ShowDescription, bool UseVerboseDescription);
	void SetAbilityKit(class UFortAbilityKit* AbilityKit);
	bool IsAbilityUnlocked();
	class UFortAbilityKit* GetAbilityKit();
	void SetHero(class UFortHero* Hero);
	void UpdateTextStyles(bool Temp_bool_Variable, bool CallFunc_IsAbilityUnlocked_ReturnValue, bool CallFunc_IsAbilityUnlocked_ReturnValue1, bool Temp_bool_Variable1, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default);
	void UpdateFromState(bool CallFunc_IsAbilityUnlocked_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKit_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKit_ReturnValue1, TArray<class UFortGadgetItemDefinition*>& CallFunc_BP_GetGadgets_GadgetItemDefinitions, class UFortGadgetItemDefinition* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortAbilityKit* CallFunc_GetAbilityKit_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush1, bool Temp_bool_Variable, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select1_Default, class FText Temp_text_Variable, class FText K2Node_Select2_Default);
	void UpdateFromStyle(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class ESlateBrushDrawType Temp_byte_Variable2, const struct FVector2D& CallFunc_GetStandardBrushSize_ReturnValue, enum class ESlateBrushDrawType Temp_byte_Variable3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool Temp_bool_Variable2, enum class ESlateBrushDrawType K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UWidget* K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


