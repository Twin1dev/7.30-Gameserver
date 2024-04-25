#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x3FC - 0x340)
// WidgetBlueprintGeneratedClass ModalTutorialOverlay.ModalTutorialOverlay_C
class UModalTutorialOverlay_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Exit;                                              // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Backing;                                           // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonContinue;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderShell;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        DisplayText;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      ImageNPC;                                          // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Title;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_Content;                                      // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         SoftTop;                                           // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_14B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DIM_Backing;                                       // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          Title;                                             // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<class FText>                          Description;                                       // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<TSoftObjectPtr<class UTexture2D>>     Image;                                             // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	enum class EScreenPositionEnum               Position;                                          // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_14B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PositionOffset;                                    // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMargin                               CustomPosition;                                    // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	int32                                        Index;                                             // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UModalTutorialOverlay_C* GetDefaultObj();

	void Start();
	void SetIndex(int32 InIndex);
	void SetPosition(enum class EScreenPositionEnum InPosition, float Offset);
	void SetupData(TArray<class FText>& InTitle, TArray<class FText>& InDescription, TArray<TSoftObjectPtr<class UTexture2D>>& InTexture2D);
	void UpdatePosition(enum class EScreenPositionEnum InPosition, enum class EScreenPositionEnum Temp_byte_Variable, enum class EScreenPositionEnum Temp_byte_Variable1, enum class EVerticalAlignment Temp_byte_Variable2, enum class EVerticalAlignment Temp_byte_Variable3, enum class EVerticalAlignment Temp_byte_Variable4, enum class EVerticalAlignment Temp_byte_Variable5, enum class EVerticalAlignment Temp_byte_Variable6, enum class EVerticalAlignment Temp_byte_Variable7, enum class EScreenPositionEnum Temp_byte_Variable8, enum class EHorizontalAlignment Temp_byte_Variable9, enum class EHorizontalAlignment Temp_byte_Variable10, enum class EHorizontalAlignment Temp_byte_Variable11, enum class EHorizontalAlignment Temp_byte_Variable12, enum class EHorizontalAlignment Temp_byte_Variable13, enum class EHorizontalAlignment Temp_byte_Variable14, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin1, const struct FMargin& K2Node_MakeStruct_Margin2, const struct FMargin& K2Node_MakeStruct_Margin3, const struct FMargin& K2Node_MakeStruct_Margin4, const struct FMargin& K2Node_Select_Default, enum class EVerticalAlignment K2Node_Select1_Default, enum class EHorizontalAlignment K2Node_Select2_Default, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void ShowNext(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item, bool Temp_bool_Variable, class FText CallFunc_Array_Get_Item1, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item2, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Array_Get_Item3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnActivated();
	void ExecuteUbergraph_ModalTutorialOverlay(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_GetEndTime_ReturnValue1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


