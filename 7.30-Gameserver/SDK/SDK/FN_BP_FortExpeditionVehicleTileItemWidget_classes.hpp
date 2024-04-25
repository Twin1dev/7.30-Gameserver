#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xB70 - 0xB38)
// WidgetBlueprintGeneratedClass BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C
class UBP_FortExpeditionVehicleTileItemWidget_C : public UFortExpeditionVehicleTileItemWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasicRatingWidget_C*                  BasicRatingWidget;                                 // 0xB40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Name;                                              // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VehicleIcon;                                       // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  SquadIdName;                                       // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnVehicleSelected;                                 // 0xB60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_FortExpeditionVehicleTileItemWidget_C* GetDefaultObj();

	void Set_Name(class FName SquadId, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue);
	void Set_Rating(class FName& SquadId, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetExpeditionSquadPower_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void Set_Icon(class FName& SquadId, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, const struct FFortMultiSizeBrush& CallFunc_GetSquadIcon_ReturnValue);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnClicked();
	void ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, class UVehicleObject_C* K2Node_DynamicCast_AsVehicle_Object, bool K2Node_DynamicCast_bSuccess);
	void OnVehicleSelected__DelegateSignature(class FName SquadId);
};

}


