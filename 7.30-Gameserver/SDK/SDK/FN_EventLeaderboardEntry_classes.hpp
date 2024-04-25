#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x52 (0xB82 - 0xB30)
// WidgetBlueprintGeneratedClass EventLeaderboardEntry.EventLeaderboardEntry_C
class UEventLeaderboardEntry_C : public UFortEventLeaderboardEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected;                                          // 0xB38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_IsPlayer;                             // 0xB40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_Zebra;                                // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_Rank;                         // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_NationalAffiliation;                         // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SelectedBG;                                  // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Rank;                                         // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Score;                                        // 0xB70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Team;                                         // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsZebra;                                           // 0xB80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPlayer;                                          // 0xB81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UEventLeaderboardEntry_C* GetDefaultObj();

	void SetEntryDetails(class UFortEventLeaderboardEntryData* EntryData, int32 Temp_int_Variable, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnSelected();
	void BP_OnDeselected();
	void EventStyleEntry();
	void EventColorize();
	void OnTeammateDisplayNameAdded(const class FString& TeammateDisplayName);
	void ExecuteUbergraph_EventLeaderboardEntry(int32 EntryPoint, const class FString& K2Node_Event_TeammateDisplayName, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable1, const struct FLinearColor& Temp_struct_Variable1, bool Temp_bool_Variable2, const struct FLinearColor& Temp_struct_Variable2, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, class UObject* K2Node_Event_ListItemObject, bool CallFunc_BooleanAND_ReturnValue, class UFortEventLeaderboardEntryData* K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, class UFortShowdownDetailView* K2Node_DynamicCast_AsFort_Showdown_Detail_View, bool K2Node_DynamicCast_bSuccess1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select_Default, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default);
};

}


