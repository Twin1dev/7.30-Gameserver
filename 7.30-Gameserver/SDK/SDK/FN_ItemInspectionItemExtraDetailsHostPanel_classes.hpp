#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x339 - 0x2A0)
// WidgetBlueprintGeneratedClass ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C
class UItemInspectionItemExtraDetailsHostPanel_C : public UFortItemDetailsHostPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Show_OptIn_Headers;                                // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_49B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   RarityData;                                        // 0x2B0(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              Border_Material;                                   // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysShowBorder;                                  // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UItemInspectionItemExtraDetailsHostPanel_C* GetDefaultObj();

	void Update_Border_Color(enum class EFortRarity CallFunc_GetRarity_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Update_Scrollbox_Layout();
	void Update_Header_Size(float HeaderWidth);
	void HandleDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel(int32 EntryPoint);
};

}


