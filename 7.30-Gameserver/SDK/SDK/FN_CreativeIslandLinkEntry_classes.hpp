#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xB80 - 0xB30)
// WidgetBlueprintGeneratedClass CreativeIslandLinkEntry.CreativeIslandLinkEntry_C
class UCreativeIslandLinkEntry_C : public UFortCreativeIslandLinkEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Text;                                       // 0xB38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0xB40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SelectedBG;                                  // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimplePipButton_C*                    SimplePipButton;                                   // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_CreatorName;                                  // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_IslandDescription;                            // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_IslandName;                                   // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                Mnemonic;                                          // 0xB70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCreativeIslandLinkEntry_C* GetDefaultObj();

	void BP_OnSelected();
	void BP_OnDeselected();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BndEvt__SimplePipButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_CreativeIslandLinkEntry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UObject* K2Node_Event_ListItemObject, class UFortCreativeIslandLink* K2Node_DynamicCast_AsFort_Creative_Island_Link, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue2, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, class UCreativeIslandLinkScreen_C* K2Node_DynamicCast_AsCreative_Island_Link_Screen, bool K2Node_DynamicCast_bSuccess1);
};

}


