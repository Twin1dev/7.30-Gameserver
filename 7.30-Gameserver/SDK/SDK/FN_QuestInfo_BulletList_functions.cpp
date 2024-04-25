#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestInfo_BulletList.QuestInfo_BulletList_C
// (None)

class UClass* UQuestInfo_BulletList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestInfo_BulletList_C");

	return Clss;
}


// QuestInfo_BulletList_C QuestInfo_BulletList.Default__QuestInfo_BulletList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestInfo_BulletList_C* UQuestInfo_BulletList_C::GetDefaultObj()
{
	static class UQuestInfo_BulletList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestInfo_BulletList_C*>(UQuestInfo_BulletList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntryWithBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        EntryText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                 EntryIconBrush                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UQuestInfo_BulletListEntry_C*NewEntry                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestInfo_BulletListEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestInfo_BulletList_C::AddEntryWithBrush(class FText EntryText, const struct FSlateBrush& EntryIconBrush, class UQuestInfo_BulletListEntry_C* NewEntry, class UQuestInfo_BulletListEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "AddEntryWithBrush");

	Params::UQuestInfo_BulletList_C_AddEntryWithBrush_Params Parms{};

	Parms.EntryText = EntryText;
	Parms.EntryIconBrush = EntryIconBrush;
	Parms.NewEntry = NewEntry;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.InitDesignView
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestInfo_BulletList_C::InitDesignView(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "InitDesignView");

	Params::UQuestInfo_BulletList_C_InitDesignView_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.AddEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        EntryText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestInfo_BulletListEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestInfo_BulletList_C::AddEntry(class FText EntryText, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UQuestInfo_BulletListEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "AddEntry");

	Params::UQuestInfo_BulletList_C_AddEntry_Params Parms{};

	Parms.EntryText = EntryText;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestInfo_BulletList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "PreConstruct");

	Params::UQuestInfo_BulletList_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestInfo_BulletList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestInfo_BulletList.QuestInfo_BulletList_C.ExecuteUbergraph_QuestInfo_BulletList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestInfo_BulletList_C::ExecuteUbergraph_QuestInfo_BulletList(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestInfo_BulletList_C", "ExecuteUbergraph_QuestInfo_BulletList");

	Params::UQuestInfo_BulletList_C_ExecuteUbergraph_QuestInfo_BulletList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


