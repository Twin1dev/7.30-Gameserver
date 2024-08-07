#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x370 - 0x320)
// WidgetBlueprintGeneratedClass BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C
class UBP_FortExpeditionPickVehicleWidget_C : public UFortExpeditionPickVehicleWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTileView*                       CommonTileView_0;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ExpeditionSquadSlotsView_C*        ExpeditionSquadSlotsView;                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackInputAction;                                   // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UObject*>                       SquadOjbects;                                      // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnVehicleSelected;                                 // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_FortExpeditionPickVehicleWidget_C* GetDefaultObj();

	void Pre_Select_for_Console(class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Determine_Available_Expedition_Squads(struct FGameplayTagContainer& RequirementTags, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UVehicleObject_C* CallFunc_SpawnObject_ReturnValue, TArray<class FName>& CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds, bool CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsSquadOnExpedition_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Get_Expedition_Item_Definition(class UFortItem* ItemDef, class UFortExpeditionItemDefinition** AsFort_Expedition_Item_Definition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void SetData(class UFortExpeditionItem* InItem);
	void OnActivated();
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HandleVehicleSelected(class FName SquadId);
	void HACK_GetMeOutOfSelectContext();
	void HandleVehicleButtonHovered(class UCommonButton* Button);
	void HandleVehcileButtonUnhovered(class UCommonButton* Button);
	void ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget(int32 EntryPoint, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UBP_FortExpeditionVehicleTileItemWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_SquadId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HandleBack_Passthrough, bool CallFunc_Greater_IntInt_ReturnValue, class UFortExpeditionItem* K2Node_Event_InItem, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_AsFort_Expedition_Item_Definition, const struct FGameplayTagContainer& CallFunc_GetRequiredTags_ReturnValue, class UCommonButton* K2Node_CustomEvent_Button1, class UBP_FortExpeditionVehicleTileItemWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Vehicle_Tile_Item_Widget1, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonButton* K2Node_CustomEvent_Button, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
	void OnVehicleSelected__DelegateSignature(class FName SquadId);
};

}


