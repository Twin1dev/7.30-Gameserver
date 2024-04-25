#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x360 - 0x350)
// WidgetBlueprintGeneratedClass PlayerNameDropdown.PlayerNameDropdown_C
class UPlayerNameDropdown_C : public UFortPlayerNameDropdown
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            MainButtonScrollBox;                               // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerNameDropdown_C* GetDefaultObj();

	void Destruct();
	void Construct();
	void ExecuteUbergraph_PlayerNameDropdown(int32 EntryPoint, class UIconTextButton_C* CallFunc_Create_ReturnValue, class UFortGameFeedbackBase* K2Node_DynamicCast_AsFort_Game_Feedback_Base, bool K2Node_DynamicCast_bSuccess, const struct FPlayerNameInfoContainer& CallFunc_GetPlayerNameInfoContainer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FPlayerNameInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


