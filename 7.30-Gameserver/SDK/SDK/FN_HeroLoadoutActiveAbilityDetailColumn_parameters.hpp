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
// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetAbilityKit
struct UHeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit_Params
{
public:
	class UFortAbilityKit*                       AbilityKit;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.IsAbilityUnlocked
struct UHeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.GetAbilityKit
struct UHeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit_Params
{
public:
	class UFortAbilityKit*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetHero
struct UHeroLoadoutActiveAbilityDetailColumn_C_SetHero_Params
{
public:
	class UFortHero*                             Hero;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B4 (0x1B4 - 0x0)
// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromState
struct UHeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState_Params
{
public:
	bool                                         CallFunc_IsAbilityUnlocked_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityKit*                       CallFunc_GetAbilityKit_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_NoResourceBrush_ReturnValue;              // 0x18(0x88)(None)
	struct FSlateBrush                           CallFunc_ResizeBrush_ResizedBrush;                 // 0xA0(0x88)(None)
	struct FSlateBrush                           CallFunc_ResizeBrush_ResizedBrush1;                // 0x128(0x88)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromStyle
struct UHeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle_Params
{
public:
	struct FVector2D                             CallFunc_GetStandardBrushSize_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.PreConstruct
struct UHeroLoadoutActiveAbilityDetailColumn_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn
struct UHeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


