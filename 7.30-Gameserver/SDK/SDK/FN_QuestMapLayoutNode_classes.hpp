#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x268 - 0x250)
// WidgetBlueprintGeneratedClass QuestMapLayoutNode.QuestMapLayoutNode_C
class UQuestMapLayoutNode_C : public UFortLayoutQuestNode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Quest_Tile_Show_Bottom_Text;                       // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_31F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItemDefinition*              Quest_Tile_Item_Def;                               // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQuestMapLayoutNode_C* GetDefaultObj();

	void SetQuestTileProps(class UQuestMiniTile2_C* K2Node_DynamicCast_AsQuest_Mini_Tile_2, bool K2Node_DynamicCast_bSuccess);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_QuestMapLayoutNode(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


