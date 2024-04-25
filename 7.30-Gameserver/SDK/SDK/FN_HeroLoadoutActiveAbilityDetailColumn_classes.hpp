#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x268 - 0x230)
// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C
class UHeroLoadoutActiveAbilityDetailColumn_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ImageLockPerk;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImagePerkIcon;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PerkIconSizeBox;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortBrushSize                    Icon_Size;                                         // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             Host_Hero;                                         // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFortAbilityKit*                       AbilityKit;                                        // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHeroLoadoutActiveAbilityDetailColumn_C* GetDefaultObj();

	void SetAbilityKit(class UFortAbilityKit* AbilityKit);
	bool IsAbilityUnlocked();
	class UFortAbilityKit* GetAbilityKit();
	void SetHero(class UFortHero* Hero);
	void UpdateFromState(bool CallFunc_IsAbilityUnlocked_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKit_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateFromStyle(const struct FVector2D& CallFunc_GetStandardBrushSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


