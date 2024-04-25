#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD6 (0x330 - 0x25A)
// WidgetBlueprintGeneratedClass ItemReceivedGenericRewardHeader.ItemReceivedGenericRewardHeader_C
class UItemReceivedGenericRewardHeader_C : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	uint8                                        Pad_536B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Body;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Header;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      Image;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemReceived_Subtitle;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SmallEpicLogo;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>             AssetBodyStrings;                                  // 0x290(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class FString, class FText>             AssetHeaderStrings;                                // 0x2E0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UItemReceivedGenericRewardHeader_C* GetDefaultObj();

	void InitFromGiftBoxItem_BP();
	void ExecuteUbergraph_ItemReceivedGenericRewardHeader(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, enum class ETextJustify Temp_byte_Variable2, enum class ETextJustify Temp_byte_Variable3, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, enum class ETextJustify K2Node_Select_Default, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_HasParam_ReturnValue, class FText CallFunc_FormatTextUsingParams_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue2, class FText K2Node_Select1_Default, class FText CallFunc_TextToUpper_ReturnValue1, int32 CallFunc_Len_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue1, bool CallFunc_HasParam_ReturnValue1, class FText CallFunc_FormatTextUsingParams_ReturnValue1, const class FString& CallFunc_Conv_TextToString_ReturnValue1, class FText CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2, class FText CallFunc_Map_Find_Value3, bool CallFunc_Map_Find_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_HasParam_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_FormatTextUsingParams_ReturnValue2, bool CallFunc_HasParam_ReturnValue3, const class FString& CallFunc_Conv_TextToString_ReturnValue2, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_FormatTextUsingParams_ReturnValue3, bool CallFunc_EqualEqual_StrStr_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_HasParam_ReturnValue4, class FText CallFunc_MakeLiteralText_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable4, class FText CallFunc_FormatTextUsingParams_ReturnValue4, bool CallFunc_HasParam_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue5, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_FormatTextUsingParams_ReturnValue5, class FText CallFunc_TextToUpper_ReturnValue3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select3_Default);
};

}


