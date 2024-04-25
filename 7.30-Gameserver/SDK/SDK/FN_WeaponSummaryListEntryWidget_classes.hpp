#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xB80 - 0xB38)
// WidgetBlueprintGeneratedClass WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C
class UWeaponSummaryListEntryWidget_C : public UAthenaProfileStatListWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                RarityLineRule;                                    // 0xB40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RarityTextBlock;                                   // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USmallStatRowWidget_C*                 Stat1;                                             // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USmallStatRowWidget_C*                 Stat2;                                             // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USmallStatRowWidget_C*                 Stat3;                                             // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USmallStatRowWidget_C*                 Stat4;                                             // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                WeaponCard;                                        // 0xB70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WeaponName;                                        // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWeaponSummaryListEntryWidget_C* GetDefaultObj();

	void Update(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, class UAthenaWeaponStatView* K2Node_DynamicCast_AsAthena_Weapon_Stat_View, bool K2Node_DynamicCast_bSuccess, class UFortWeaponItemDefinition* CallFunc_GetWeaponDefinition_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_TextToUpper_ReturnValue1);
	void OnStatChanged();
	void ExecuteUbergraph_WeaponSummaryListEntryWidget(int32 EntryPoint);
};

}


