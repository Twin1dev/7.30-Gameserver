#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0xA18 - 0x8D8)
// BlueprintGeneratedClass B_Athena_VendingMachine.B_Athena_VendingMachine_C
class AB_Athena_VendingMachine_C : public ABuildingItemCollectorActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x8E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*               ForceFeedbackFail;                                 // 0x8E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*               ForceFeedbackSuccess;                              // 0x8F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VendingMachine_Ambient;                            // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Loot_Effect_Vending;                             // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_VendingMachineQuest;                            // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x910(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        VendWobble_Flash_70FB301E43A001CE1340FE8051EE86B5; // 0x918(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VendWobble_WobbleTime_70FB301E43A001CE1340FE8051EE86B5; // 0x91C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                VendWobble__Direction_70FB301E43A001CE1340FE8051EE86B5; // 0x920(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    VendWobble;                                        // 0x928(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwitchHitch_Slide_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x930(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwitchHitch_Flash_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x934(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwitchHitch_Wobble_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x938(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SwitchHitch__Direction_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x93C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SwitchHitch;                                       // 0x940(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MontiorMat;                                        // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MetalMat;                                          // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentCaptureCount;                               // 0x958(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Vend_String;                                       // 0x960(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            SearchSound;                                       // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VendFailedSound;                                   // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CycleSound;                                        // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CostAmount;                                        // 0x990(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              MaterialType;                                      // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Vend_Succeeded_Sound;                              // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VendSuccess;                                       // 0x9A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasHit;                                            // 0x9A9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BA5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CycleSoundVolume;                                  // 0x9AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                  TossOnGroundSetting;                               // 0x9B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  Wood_String;                                       // 0x9C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Stone_String;                                      // 0x9D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Metal_String;                                      // 0x9F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EFortRarity                       OverrideVendingMachineRarity;                      // 0xA08(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Ambient_SoundCue;                                  // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Athena_VendingMachine_C* GetDefaultObj();

	bool GetOverrideRarity(enum class EFortRarity* Rarity, bool bHasOverride, enum class EFortRarity NewRarity, enum class EFortRarity CallFunc_GetOverrideRarity_Rarity, bool CallFunc_GetOverrideRarity_ReturnValue);
	void SetRarityColors(const struct FLinearColor& Color);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UserConstructionScript();
	void SwitchHitch__FinishedFunc();
	void SwitchHitch__UpdateFunc();
	void VendWobble__FinishedFunc();
	void VendWobble__UpdateFunc();
	void VendWobble__Start_FF_Time__EventFunc();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void BlueprintOnBeginInteract();
	void PlayVendFX();
	void UpdateCollectorsActiveItem(int32 StartingSeedValue, class UFortWorldItemDefinition* InputItem, class UTexture* InputTexture, int32 CurrentGoal, int32 CurrentCollectedAmount, int32 CurrentCaptureCount, class UTexture* OutputTexture);
	void PlayVendFailFX();
	void OnForcedCycle();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Athena_VendingMachine(int32 EntryPoint, bool Temp_bool_Variable, const struct FRotator& CallFunc_RLerp_ReturnValue, class FName Temp_name_Variable, class FName Temp_name_Variable1, bool Temp_bool_Variable1, class AFortPawn* K2Node_Event_InteractingPawn, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, int32 K2Node_Event_StartingSeedValue, class UFortWorldItemDefinition* K2Node_Event_InputItem, class UTexture* K2Node_Event_InputTexture, int32 K2Node_Event_CurrentGoal, int32 K2Node_Event_CurrentCollectedAmount, int32 K2Node_Event_CurrentCaptureCount, class UTexture* K2Node_Event_OutputTexture, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class FName K2Node_Select_Default, float CallFunc_SelectFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, float CallFunc_SelectFloat_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult1, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY1, bool CallFunc_EvaluateCurveTableRow_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, enum class EFortRarity CallFunc_GetOverrideRarity_Rarity, bool CallFunc_GetOverrideRarity_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 K2Node_Select1_Default, bool K2Node_SwitchInteger_CmpSuccess);
};

}


