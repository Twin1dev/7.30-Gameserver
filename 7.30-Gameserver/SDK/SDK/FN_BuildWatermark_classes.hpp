#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x278 - 0x258)
// WidgetBlueprintGeneratedClass BuildWatermark.BuildWatermark_C
class UBuildWatermark_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BuildText;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_CalendarOffset;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextMcpVersion;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuildWatermark_C* GetDefaultObj();

	void UpdateCalenderOffset(enum class ESubGame CallFunc_GetCurrentSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortSeasonalEventManager* CallFunc_GetSeasonalEventManager_ReturnValue, const class FString& CallFunc_GetCalendarOffsetString_OutString, bool CallFunc_GetCalendarOffsetString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetTextCollapseIfDefault(class UTextBlock* Text_Widget, const class FString& InputText, const class FString& DefaultText, bool CallFunc_EqualEqual_StriStri_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Update_Watermark(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetWatermark_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, const class FString& CallFunc_GetAppName_ReturnValue);
	void Construct();
	void HandlePartyJoined();
	void Destruct();
	void HandlePlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_BuildWatermark(int32 EntryPoint, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
};

}


