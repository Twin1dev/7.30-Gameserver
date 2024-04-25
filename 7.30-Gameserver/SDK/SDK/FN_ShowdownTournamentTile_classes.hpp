#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0xB89 - 0xB60)
// WidgetBlueprintGeneratedClass ShowdownTournamentTile.ShowdownTournamentTile_C
class UShowdownTournamentTile_C : public UFortShowdownTournamentTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SizeUp;                                            // 0xB68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ChangeFocus;                                       // 0xB70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_TileFade;                                    // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PosterSizeBox;                                     // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsFaded;                                           // 0xB88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UShowdownTournamentTile_C* GetDefaultObj();

	void BP_OnSelected();
	void BP_OnDeselected();
	void EventFade(bool FadeOut);
	void ExecuteUbergraph_ShowdownTournamentTile(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, float Temp_float_Variable2, bool Temp_bool_Variable2, float Temp_float_Variable3, bool K2Node_CustomEvent_fadeOut, float CallFunc_GetStartTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue1, float CallFunc_GetEndTime_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue2, float K2Node_Select_Default, float CallFunc_GetStartTime_ReturnValue3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue3, float K2Node_Select1_Default, float CallFunc_Add_FloatFloat_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue4, float CallFunc_PauseAnimation_ReturnValue5, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_PauseAnimation_ReturnValue6, float K2Node_Select2_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue5, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_PauseAnimation_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable3, float K2Node_Select3_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, class UShowdownScreen_C* K2Node_DynamicCast_AsShowdown_Screen, bool K2Node_DynamicCast_bSuccess);
};

}


