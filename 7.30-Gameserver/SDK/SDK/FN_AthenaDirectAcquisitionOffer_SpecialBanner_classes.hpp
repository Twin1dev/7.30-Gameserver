#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x290 - 0x228)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOffer_SpecialBanner.AthenaDirectAcquisitionOffer_SpecialBanner_C
class UAthenaDirectAcquisitionOffer_SpecialBanner_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         Border_SaleInfo;                                   // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_BattlePassStarsSupplemental;                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BattleStarSupplemental;                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_BattleStarInfoSupplemental;                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_SaleInfo;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Main;                               // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bShowBanner;                                       // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasBattlePassStars;                               // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5751[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SalesInfoText;                                     // 0x268(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        NumOfBattlePassStars;                              // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5752[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCatalogMessaging*                     CatalogMessaging;                                  // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaDirectAcquisitionOffer_SpecialBanner_C* GetDefaultObj();

	void SetupSpecialOfferBanner(bool bHasSale, class FText SaleText, const class FString& BannerOverrideTag, bool bHasBattlePassStars, int32 INumOfBattlePassStars);
	void ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner(int32 EntryPoint, class FText Temp_text_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, class FText Temp_text_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable3, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable4, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable5, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select2_Default, class FText K2Node_Select3_Default, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_CustomEvent_bHasSale, class FText K2Node_CustomEvent_SaleText, const class FString& K2Node_CustomEvent_BannerOverrideTag, bool K2Node_CustomEvent_bHasBattlePassStars, int32 K2Node_CustomEvent_iNumOfBattlePassStars, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select4_Default, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, float K2Node_Select5_Default, const struct FMargin& K2Node_MakeStruct_Margin);
};

}


