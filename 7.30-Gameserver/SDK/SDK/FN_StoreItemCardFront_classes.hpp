#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x278 - 0x228)
// WidgetBlueprintGeneratedClass StoreItemCardFront.StoreItemCardFront_C
class UStoreItemCardFront_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                             Card_ScaleBox;                                     // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCard;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Mask;                                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCard                                 CardData;                                          // 0x248(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EFortRarity                       CurrentRarity;                                     // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FE5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SpacingText;                                       // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStoreItemCardFront_C* GetDefaultObj();

	void Get_Type_Text(class FText* OutText, enum class EFortInventoryFilter Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, class FText K2Node_Select_Default);
	class FText Get_Card_Name_Text(class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, class FText Temp_text_Variable18, bool Temp_bool_Variable, enum class EFortInventoryFilter Temp_byte_Variable, class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select1_Default);
	void Draw_Card(const struct FFortRarityItemData& RarityData, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void Initialize_Card(const struct FCard& InCard, enum class EFortRarity CallFunc_GetRarity_ReturnValue);
	void Construct();
	void OnFortStoreStateChanged(enum class EFortStoreState NewStoreState);
	void InitFromObject(class UObject* InitObject);
	void ExecuteUbergraph_StoreItemCardFront(int32 EntryPoint, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue1, enum class EFortStoreState K2Node_CustomEvent_NewStoreState, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UObject* K2Node_Event_InitObject, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_CardFrontRevealComplete_ReturnValue);
};

}


