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

// 0x170 (0x170 - 0x0)
// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventColorize
struct UEventLeaderboardEntryDetails_C_EventColorize_Params
{
public:
	struct FFortTournamentDisplayInfo            TournamentDisplayInfo;                             // 0x0(0x170)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x248 (0x248 - 0x0)
// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ExecuteUbergraph_EventLeaderboardEntryDetails
struct UEventLeaderboardEntryDetails_C_ExecuteUbergraph_EventLeaderboardEntryDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5718[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTournamentDisplayInfo            K2Node_CustomEvent_TournamentDisplayInfo;          // 0x18(0x170)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x188(0x28)(None)
	struct FFontOutlineSettings                  K2Node_MakeStruct_FontOutlineSettings;             // 0x1B0(0x20)(NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x1D0(0x50)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor1;                     // 0x220(0x28)(None)
};

}
}


