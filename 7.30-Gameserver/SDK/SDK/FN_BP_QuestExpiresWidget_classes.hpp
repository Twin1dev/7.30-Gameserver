#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x25A - 0x240)
// WidgetBlueprintGeneratedClass BP_QuestExpiresWidget.BP_QuestExpiresWidget_C
class UBP_QuestExpiresWidget_C : public UFortQuestExpiresWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      QuestExpires;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                Style;                                             // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bBreifText;                                        // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bTempDoesExpire;                                   // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_QuestExpiresWidget_C* GetDefaultObj();

	void GetFortPC(class AFortPlayerController** AsFort_Player_Controller, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Refresh_Expiration_Timer(class UFortQuestItem* Quest, bool Temp_bool_Variable, bool CallFunc_DoesQuestExpire_ReturnValue, class AFortPlayerController* CallFunc_GetFortPC_AsFort_Player_Controller, const struct FDateTime& CallFunc_GetMcpRelativeUtcNow_ReturnValue, const struct FTimespan& CallFunc_GetRemainingExpirationDuration_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, class FText K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void SetData(class UFortQuestItem* InItem);
	void OnQuestExpirationUpdated();
	void ExecuteUbergraph_BP_QuestExpiresWidget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_DoesQuestExpire_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool K2Node_Event_IsDesignTime, class UFortQuestItem* K2Node_Event_InItem, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


