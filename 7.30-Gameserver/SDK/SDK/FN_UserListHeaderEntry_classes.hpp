#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xB70 - 0xB48)
// WidgetBlueprintGeneratedClass UserListHeaderEntry.UserListHeaderEntry_C
class UUserListHeaderEntry_C : public USocialUserListHeaderEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnExpansion;                                       // 0xB50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0xB58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ExpandDirectionTick;                               // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_EntryContent;                                   // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUserListHeaderEntry_C* GetDefaultObj();

	void BP_OnUnhovered();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnHovered();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Construct();
	void ExecuteUbergraph_UserListHeaderEntry(int32 EntryPoint, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable1, bool Temp_bool_Variable1, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable2, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool K2Node_Event_bIsExpanded, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_IsListItemExpanded_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, class UObject* K2Node_Event_ListItemObject, bool CallFunc_IsMobileGame_ReturnValue, float K2Node_Select1_Default, int32 K2Node_Select2_Default, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo1);
};

}


