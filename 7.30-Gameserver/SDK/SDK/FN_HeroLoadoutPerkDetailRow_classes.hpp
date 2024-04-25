#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC4 (0x2F4 - 0x230)
// WidgetBlueprintGeneratedClass HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C
class UHeroLoadoutPerkDetailRow_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_PerkIcon;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLockPerk;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImagePerkIcon;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageTier;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 InfoSwitcher;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LargeInfo;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LargeName;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LevelTextNew;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PerkIconSizeBox;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichText_SmallDescription;                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SmallInfo;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SmallName;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IncludeName;                                       // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IncludeDescription;                                // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldDisplayAsIgnored;                            // 0x2A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38F4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                UnlockedDisplayNameTextStyle;                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LockedDisplayNameTextStyle;                        // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                IgnoredDisplayNameTextStyle;                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                UnlockedDescriptionTextStyle;                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LockedDescriptionTextStyle;                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                IgnoredDescriptionTextStyle;                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Icon_Size;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             Host_Hero;                                         // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EFortHeroLoadoutPerkType          Perk_Type_To_Represent;                            // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_38FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoverAlphaValue;                                   // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        HoverHorizontalOffset;                             // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHeroLoadoutPerkDetailRow_C* GetDefaultObj();

	void PlayUnhoverCue(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void PlayHoverCue(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetShouldDisplayAsIgnored(bool ShouldDisplayAsIgnored);
	void SetPerkTypeToRepresent(enum class EFortHeroLoadoutPerkType Perk_Type);
	bool IsPerkUnlocked(bool Temp_bool_Variable, enum class EFortHeroLoadoutPerkType Temp_byte_Variable, bool CallFunc_IsTeamLeadPerkUnlockedForHero_ReturnValue, bool CallFunc_IsCommanderPerkUnlockedForHero_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Select_Default);
	class UFortAbilityKit* GetPerkAbilityKit(enum class EFortHeroLoadoutPerkType Temp_byte_Variable, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortHeroType* K2Node_DynamicCast_AsFort_Hero_Type, bool K2Node_DynamicCast_bSuccess, class UFortAbilityKit* CallFunc_GetAbilityKitForHeroPerk_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKitForTeamLeadPerk_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKitForCommanderPerk_ReturnValue, class UFortAbilityKit* K2Node_Select_Default);
	void SetHero(class UFortHero* Hero);
	void UpdateTextStyles(float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Variable1, float Temp_float_Variable4, bool Temp_bool_Variable2, float Temp_float_Variable5, float Temp_float_Variable6, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue1, float K2Node_Select_Default, float K2Node_Select1_Default, bool Temp_bool_Variable5, float K2Node_Select2_Default, bool CallFunc_IsPerkUnlocked_ReturnValue2, float K2Node_Select3_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, class UClass* K2Node_Select4_Default, class UClass* K2Node_Select5_Default);
	void UpdateFromState(bool CallFunc_IsPerkUnlocked_ReturnValue, class UFortAbilityKit* CallFunc_GetPerkAbilityKit_ReturnValue, class UFortAbilityKit* CallFunc_GetPerkAbilityKit_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortAbilityKit* CallFunc_GetPerkAbilityKit_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_TextToUpper_ReturnValue, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush1, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select1_Default);
	void UpdateFromStyle(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, class UWidget* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default);
	void PreConstruct(bool IsDesignTime);
	void SetHoverAlphaValue(float NewValue);
	void SetHoverHorizontalOffset(float NewValue);
	void ExecuteUbergraph_HeroLoadoutPerkDetailRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_NewValue1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float K2Node_CustomEvent_NewValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


