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

// 0xA8 (0xA8 - 0x0)
// Function GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C.K2_ActivateAbilityFromEvent
struct UGA_Athena_Balloons_Consumable_Triggered_Release_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C.ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release
struct UGA_Athena_Balloons_Consumable_Triggered_Release_C_ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1300[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xA8)(ConstParm)
};

}
}


