#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x270 - 0x228)
// WidgetBlueprintGeneratedClass QuestSpinner.QuestSpinner_C
class UQuestSpinner_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Spin;                                              // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDailyQuestWidget_C*                   PendingWidget;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestWidget_C*                   TopWidget;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_1;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        PendingQuestItem;                                  // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestItem*>                QuestItemPool;                                     // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        CurrentPoolIndex;                                  // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpinPeriod;                                        // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQuestSpinner_C* GetDefaultObj();

	void IncrementPoolIndex(int32* NewValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnSpinDelayTimerComplete(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_IncrementPoolIndex_NewValue, class UFortQuestItem* CallFunc_Array_Get_Item);
	void BeginSpinDelayTimer(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void SetQuests(TArray<class UFortQuestItem*>& Quests, float SpinPeriod, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, class UFortQuestItem* CallFunc_Array_Get_Item);
	void OnSpinComplete();
	void ExecuteUbergraph_QuestSpinner(int32 EntryPoint, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
};

}


