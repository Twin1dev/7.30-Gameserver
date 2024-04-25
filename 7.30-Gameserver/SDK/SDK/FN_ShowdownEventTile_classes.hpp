#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xBB8 - 0xB28)
// WidgetBlueprintGeneratedClass ShowdownEventTile.ShowdownEventTile_C
class UShowdownEventTile_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Focus_Violator;                                    // 0xB30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0xB38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Focus;                                             // 0xB40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TransitionSize;                                    // 0xB48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0xB50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_BG;                                          // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Ended;                                       // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Focus;                                       // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Hover;                                       // 0xB70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Tail;                                        // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownEventTileInfo_C*              ShowdownEventTileInfo;                             // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownEventTileViolator_C*          Violator;                                          // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                EventId;                                           // 0xB90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsEnded;                                           // 0xBA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsLive;                                            // 0xBA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56EC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnWindowSelected;                                  // 0xBA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UShowdownEventTile_C* GetDefaultObj();

	void SetData(const class FString& TournamentInfo, const class FString& EventInfo);
	void Construct();
	void BP_OnClicked();
	void EventIntro(int32 Index);
	void EventResize(bool Out);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void EventSetState(enum class EFortShowdownEventState EventState);
	void EventColorize(const struct FFortTournamentDisplayInfo& DisplayInfo);
	void EventColorizeDispatch(const struct FFortTournamentDisplayInfo& DisplayInfo);
	void ExecuteUbergraph_ShowdownEventTile(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable1, float Temp_float_Variable, float Temp_float_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable2, bool Temp_bool_Variable2, int32 K2Node_CustomEvent_Index, float CallFunc_Multiply_IntFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_Out, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetStartTime_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue2, float CallFunc_PauseAnimation_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue4, float CallFunc_PauseAnimation_ReturnValue5, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, float CallFunc_GetEndTime_ReturnValue2, float CallFunc_GetStartTime_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4, float CallFunc_GetEndTime_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue2, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue5, float Temp_float_Variable3, const struct FFocusEvent& K2Node_Event_InFocusEvent1, float CallFunc_PauseAnimation_ReturnValue6, float CallFunc_GetStartTime_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue7, bool CallFunc_LessEqual_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_GetEndTime_ReturnValue4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue6, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue8, float CallFunc_GetStartTime_ReturnValue4, float CallFunc_PauseAnimation_ReturnValue9, bool CallFunc_LessEqual_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_GetEndTime_ReturnValue5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue7, float CallFunc_Subtract_FloatFloat_ReturnValue4, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class EFortShowdownEventState K2Node_CustomEvent_EventState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, float Temp_float_Variable4, bool Temp_bool_Variable3, float K2Node_Select1_Default, float CallFunc_PauseAnimation_ReturnValue10, float CallFunc_GetStartTime_ReturnValue5, float CallFunc_PauseAnimation_ReturnValue11, bool CallFunc_LessEqual_FloatFloat_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue8, float CallFunc_GetEndTime_ReturnValue6, float CallFunc_Subtract_FloatFloat_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float K2Node_Select2_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue9, bool Temp_bool_Variable4, float K2Node_Select3_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue10, float Temp_float_Variable5, bool Temp_bool_Variable5, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_DisplayInfo1, float K2Node_Select4_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue11, float Temp_float_Variable6, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_DisplayInfo, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable6, float Temp_float_Variable7, float K2Node_Select5_Default, float K2Node_Select6_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue12, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue13);
	void OnWindowSelected__DelegateSignature();
};

}


