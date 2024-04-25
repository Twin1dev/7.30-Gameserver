#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x258 - 0x250)
// WidgetBlueprintGeneratedClass SocialSettingToggle.SocialSettingToggle_C
class USocialSettingToggle_C : public UFortSocialSettingToggle
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USocialSettingToggle_C* GetDefaultObj();

	void UpdateSize(const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, int32 Temp_int_Variable, bool Temp_bool_Variable, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue2, const struct FVector2D& K2Node_Select_Default, int32 Temp_int_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable2, int32 K2Node_Select1_Default, const struct FVector2D& K2Node_Select2_Default);
	void Construct();
	void ExecuteUbergraph_SocialSettingToggle(int32 EntryPoint);
};

}


