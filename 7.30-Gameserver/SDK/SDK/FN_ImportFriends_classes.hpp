#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x510 - 0x3B0)
// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
class UImportFriends_C : public UFortSocialImportPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro_V2;                                          // 0x3B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ArrowPulse;                                        // 0x3C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x3C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      AddFriendsDescription;                             // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_AddFriendsDescription;                          // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_ChangeInSettingsText;                           // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_LimitedTimeHeader;                              // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_TakenToLauncher;                                // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                     ItemInfoWidget;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SBox_AddFriendButtonScaleBox;                      // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxDescription;                               // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxHeader;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFrontEndCamera                   DesiredFrontEndCamera;                             // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   PreviewItemDef;                                    // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeartbeatDelayIntroAnimation;                      // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        DebugSocialImportType;                             // 0x444(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasReward;                                        // 0x445(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A05[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FacebookHeader;                                    // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  VKHeader;                                          // 0x460(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SteamHeader;                                       // 0x478(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PlaystationHeader;                                 // 0x490(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  XboxHeader;                                        // 0x4A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ESocialImportPanelPlatform        SocialPlatform;                                    // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WrapHeaderAt;                                      // 0x4C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  XboxDescriptionText;                               // 0x4C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PSNDescriptionText;                                // 0x4E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SwitchDescriptionText;                             // 0x4F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UImportFriends_C* GetDefaultObj();

	void SetupNav(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void ScaleTextButton(int32 CharThreshold, class UScaleBox* ContainingScalebox, class UIconTextButton_C* Button, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_FClamp_ReturnValue);
	void ScaleTextboxWithWrappingWorkaround(class UScaleBox* ContainingScalebox, int32 CharLimitThreshold, class UCommonTextBlock* TargetText, int32 WrapAtHorrizontal, float ScaleCharThreshold, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, int32 CallFunc_Len_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnPanelTypeSet(enum class ESocialImportPanelType NewType);
	void HandleHeaderText();
	void HandleDescriptionText();
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void OnIncentivizedSet(bool bIncentivized);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void ExecuteUbergraph_ImportFriends(int32 EntryPoint, enum class EFrontEndCamera Temp_byte_Variable, enum class EFrontEndCamera Temp_byte_Variable1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class ESocialImportPanelPlatform Temp_byte_Variable2, class FText Temp_text_Variable, enum class ESocialImportPanelPlatform Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, enum class ESocialImportPanelPlatform Temp_byte_Variable10, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable13, enum class ESlateVisibility Temp_byte_Variable14, enum class ESlateVisibility Temp_byte_Variable15, enum class ESlateVisibility Temp_byte_Variable16, enum class ESocialImportPanelPlatform Temp_byte_Variable17, bool K2Node_Event_IsDesignTime, enum class ESocialImportPanelType K2Node_Event_NewType, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class EFrontEndCamera K2Node_Select_Default, enum class ESocialImportPanelPlatform CallFunc_GetSocialPlatform_OutPlatform, bool CallFunc_GetSocialPlatform_ReturnValue, bool K2Node_Event_bIncentivized, class FText K2Node_Select1_Default, class FText CallFunc_MakeLiteralText_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button1, bool K2Node_DynamicCast_bSuccess1, class UWidgetAnimation* K2Node_Event_Animation, enum class ESlateVisibility K2Node_Select3_Default, class FText K2Node_Select4_Default);
};

}


