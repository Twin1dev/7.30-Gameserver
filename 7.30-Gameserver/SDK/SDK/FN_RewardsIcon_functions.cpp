#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RewardsIcon.RewardsIcon_C
// (None)

class UClass* URewardsIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RewardsIcon_C");

	return Clss;
}


// RewardsIcon_C RewardsIcon.Default__RewardsIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URewardsIcon_C* URewardsIcon_C::GetDefaultObj()
{
	static class URewardsIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URewardsIcon_C*>(URewardsIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RewardsIcon.RewardsIcon_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply URewardsIcon_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "OnMouseButtonDown");

	Params::URewardsIcon_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromItemCacheData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardItemCacheData*    K2Node_DynamicCast_AsFort_Reward_Item_Cache_Data                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardsIcon_C::PopulateFromItemCacheData(class UFortRewardItemCacheData* K2Node_DynamicCast_AsFort_Reward_Item_Cache_Data, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromItemCacheData");

	Params::URewardsIcon_C_PopulateFromItemCacheData_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Reward_Item_Cache_Data = K2Node_DynamicCast_AsFort_Reward_Item_Cache_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromGiftBoxData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardGiftBoxData*      K2Node_DynamicCast_AsFort_Reward_Gift_Box_Data                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGiftBoxItemDefinition*  CallFunc_GetGiftBoxDefinition_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardsIcon_C::PopulateFromGiftBoxData(class UFortRewardGiftBoxData* K2Node_DynamicCast_AsFort_Reward_Gift_Box_Data, bool K2Node_DynamicCast_bSuccess, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromGiftBoxData");

	Params::URewardsIcon_C_PopulateFromGiftBoxData_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Reward_Gift_Box_Data = K2Node_DynamicCast_AsFort_Reward_Gift_Box_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGiftBoxDefinition_ReturnValue = CallFunc_GetGiftBoxDefinition_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromDifficultyIncreaseRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardDifficultyIncrease*K2Node_DynamicCast_AsFort_Reward_Difficulty_Increase             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardsIcon_C::PopulateFromDifficultyIncreaseRewards(class UFortRewardDifficultyIncrease* K2Node_DynamicCast_AsFort_Reward_Difficulty_Increase, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromDifficultyIncreaseRewards");

	Params::URewardsIcon_C_PopulateFromDifficultyIncreaseRewards_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Reward_Difficulty_Increase = K2Node_DynamicCast_AsFort_Reward_Difficulty_Increase;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromMissionAlertRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardMissionAlertData* K2Node_DynamicCast_AsFort_Reward_Mission_Alert_Data              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardsIcon_C::PopulateFromMissionAlertRewards(class UFortRewardMissionAlertData* K2Node_DynamicCast_AsFort_Reward_Mission_Alert_Data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromMissionAlertRewards");

	Params::URewardsIcon_C_PopulateFromMissionAlertRewards_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Reward_Mission_Alert_Data = K2Node_DynamicCast_AsFort_Reward_Mission_Alert_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.Play Show Animation Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndRewardType     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::Play_Show_Animation_Sound(enum class EFrontEndRewardType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, class USoundBase* Temp_object_Variable7, class USoundBase* Temp_object_Variable8, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "Play Show Animation Sound");

	Params::URewardsIcon_C_Play_Show_Animation_Sound_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.Play Hide Animation Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFrontEndRewardType     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::Play_Hide_Animation_Sound(enum class EFrontEndRewardType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, class USoundBase* Temp_object_Variable7, class USoundBase* Temp_object_Variable8, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "Play Hide Animation Sound");

	Params::URewardsIcon_C_Play_Hide_Animation_Sound_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.PlayShowAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::PlayShowAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PlayShowAnimation");

	Params::URewardsIcon_C_PlayShowAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.RandomizeDesignView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  CallFunc_PopulateFromRandomLootLevel_Texture                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::RandomizeDesignView(class UTexture2D* CallFunc_PopulateFromRandomLootLevel_Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "RandomizeDesignView");

	Params::URewardsIcon_C_RandomizeDesignView_Params Parms{};

	Parms.CallFunc_PopulateFromRandomLootLevel_Texture = CallFunc_PopulateFromRandomLootLevel_Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromRandomLootLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_PopulateFromLootLevel_Texture                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::PopulateFromRandomLootLevel(class UTexture2D** Texture, int32 CallFunc_RandomInteger_ReturnValue, class UTexture2D* CallFunc_PopulateFromLootLevel_Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromRandomLootLevel");

	Params::URewardsIcon_C_PopulateFromRandomLootLevel_Params Parms{};

	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_PopulateFromLootLevel_Texture = CallFunc_PopulateFromLootLevel_Texture;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromCollectionBookRewards
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardCollectionBookData*K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardsIcon_C::PopulateFromCollectionBookRewards(class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromCollectionBookRewards");

	Params::URewardsIcon_C_PopulateFromCollectionBookRewards_Params Parms{};

	Parms.K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data = K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromExpedition
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsIcon_C::PopulateFromExpedition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromExpedition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromNewQuest
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsIcon_C::PopulateFromNewQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromNewQuest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromQuestRewards
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsIcon_C::PopulateFromQuestRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromQuestRewards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromMissionRewards
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIRewardReport*         CallFunc_GetLastMissionRewardReport_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRewardMissionData*      K2Node_DynamicCast_AsFort_Reward_Mission_Data                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRewardedChestIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_PopulateFromLootLevel_Texture                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::PopulateFromMissionRewards(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIRewardReport* CallFunc_GetLastMissionRewardReport_ReturnValue, class UFortRewardMissionData* K2Node_DynamicCast_AsFort_Reward_Mission_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetRewardedChestIndex_ReturnValue, class UTexture2D* CallFunc_PopulateFromLootLevel_Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromMissionRewards");

	Params::URewardsIcon_C_PopulateFromMissionRewards_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLastMissionRewardReport_ReturnValue = CallFunc_GetLastMissionRewardReport_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Reward_Mission_Data = K2Node_DynamicCast_AsFort_Reward_Mission_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRewardedChestIndex_ReturnValue = CallFunc_GetRewardedChestIndex_ReturnValue;
	Parms.CallFunc_PopulateFromLootLevel_Texture = CallFunc_PopulateFromLootLevel_Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.GetScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::GetScale(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "GetScale");

	Params::URewardsIcon_C_GetScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function RewardsIcon.RewardsIcon_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::SetScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "SetScale");

	Params::URewardsIcon_C_SetScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromLootLevel
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LootLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  ChestTexture                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardsIcon_C::PopulateFromLootLevel(int32 LootLevel, class UTexture2D** Texture, class UTexture2D* ChestTexture, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromLootLevel");

	Params::URewardsIcon_C_PopulateFromLootLevel_Params Parms{};

	Parms.LootLevel = LootLevel;
	Parms.ChestTexture = ChestTexture;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function RewardsIcon.RewardsIcon_C.PlaySlideAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetTranslation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::PlaySlideAnimation(float TargetTranslation, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PlaySlideAnimation");

	Params::URewardsIcon_C_PlaySlideAnimation_Params Parms{};

	Parms.TargetTranslation = TargetTranslation;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.TickSlideAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::TickSlideAnimation(float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "TickSlideAnimation");

	Params::URewardsIcon_C_TickSlideAnimation_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.HandleSlideAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TranslatedDist                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::HandleSlideAnimationFinished(float TranslatedDist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "HandleSlideAnimationFinished");

	Params::URewardsIcon_C_HandleSlideAnimationFinished_Params Parms{};

	Parms.TranslatedDist = TranslatedDist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.HandleShowAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsIcon_C::HandleShowAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "HandleShowAnimationFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsIcon.RewardsIcon_C.HandleHideAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsIcon_C::HandleHideAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "HandleHideAnimationFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsIcon.RewardsIcon_C.PopulateFromReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* InRewardItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TintColor                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_PopulateFromRandomLootLevel_Texture                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardsIcon_C::PopulateFromReward(class UFortRewardNotificationData* InRewardItem, const struct FLinearColor& TintColor, class UTexture2D* CallFunc_PopulateFromRandomLootLevel_Texture, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PopulateFromReward");

	Params::URewardsIcon_C_PopulateFromReward_Params Parms{};

	Parms.InRewardItem = InRewardItem;
	Parms.TintColor = TintColor;
	Parms.CallFunc_PopulateFromRandomLootLevel_Texture = CallFunc_PopulateFromRandomLootLevel_Texture;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsIcon_C::Cleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "Cleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsIcon.RewardsIcon_C.PlayHideAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardsIcon_C::PlayHideAnimation(const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PlayHideAnimation");

	Params::URewardsIcon_C_PlayHideAnimation_Params Parms{};

	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URewardsIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsIcon.RewardsIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardsIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "PreConstruct");

	Params::URewardsIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.whiteFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::WhiteFadeOut(float Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "whiteFadeOut");

	Params::URewardsIcon_C_WhiteFadeOut_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URewardsIcon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsIcon.RewardsIcon_C.ExecuteUbergraph_RewardsIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::ExecuteUbergraph_RewardsIcon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_percent, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "ExecuteUbergraph_RewardsIcon");

	Params::URewardsIcon_C_ExecuteUbergraph_RewardsIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_percent = K2Node_CustomEvent_percent;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.OnImageClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsIcon_C::OnImageClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "OnImageClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardsIcon.RewardsIcon_C.OnMaterializeAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*              Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::OnMaterializeAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "OnMaterializeAnimationFinished__DelegateSignature");

	Params::URewardsIcon_C_OnMaterializeAnimationFinished__DelegateSignature_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.OnDisperseAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*              Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::OnDisperseAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "OnDisperseAnimationFinished__DelegateSignature");

	Params::URewardsIcon_C_OnDisperseAnimationFinished__DelegateSignature_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsIcon.RewardsIcon_C.OnSlideAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsIcon_C*              Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsIcon_C::OnSlideAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardsIcon_C", "OnSlideAnimationFinished__DelegateSignature");

	Params::URewardsIcon_C_OnSlideAnimationFinished__DelegateSignature_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}

}


