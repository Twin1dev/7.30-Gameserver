#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C.AddListEntry
struct UItemInspectRefundItemQuantityList_C_AddListEntry_Params
{
public:
	class UFortItemQuantityListEntryBase*        ListEntry;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C.ExecuteUbergraph_ItemInspectRefundItemQuantityList
struct UItemInspectRefundItemQuantityList_C_ExecuteUbergraph_ItemInspectRefundItemQuantityList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_491E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemQuantityListEntryBase*        K2Node_Event_ListEntry;                            // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


