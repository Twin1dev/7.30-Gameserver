#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x260 - 0x230)
// WidgetBlueprintGeneratedClass QuestInfo_BulletList.QuestInfo_BulletList_C
class UQuestInfo_BulletList_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      TextBlockTitle;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxBulletList;                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TitleText;                                         // 0x248(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UQuestInfo_BulletList_C* GetDefaultObj();

	void AddEntryWithBrush(class FText EntryText, const struct FSlateBrush& EntryIconBrush, class UQuestInfo_BulletListEntry_C* NewEntry, class UQuestInfo_BulletListEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void InitDesignView(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void AddEntry(class FText EntryText, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UQuestInfo_BulletListEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_QuestInfo_BulletList(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


