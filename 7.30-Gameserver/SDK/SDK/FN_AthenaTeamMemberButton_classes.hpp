#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB40 - 0xB38)
// WidgetBlueprintGeneratedClass AthenaTeamMemberButton.AthenaTeamMemberButton_C
class UAthenaTeamMemberButton_C : public UAthenaTeamMemberButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAthenaTeamMemberButton_C* GetDefaultObj();

	void OnFriendshipStatusDetermined(enum class EFortFriendRequestStatus RequestStatus);
	void OpenSocialPanel();
	void ExecuteUbergraph_AthenaTeamMemberButton(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldShowExternalFriendsUI_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, enum class EFortFriendRequestStatus Temp_byte_Variable1, class USocialPanel_C* K2Node_DynamicCast_AsSocial_Panel, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess1, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, enum class EFortFriendRequestStatus K2Node_Event_RequestStatus, class FText K2Node_Select_Default, bool K2Node_Select1_Default);
};

}


