#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-BattlePoint-40pc.TextStyle-Base-S-B-BattlePoint-40pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusBattlePointMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-BattlePoint-40pc_C");

	return Clss;
}


// TextStyle-Base-S-B-BattlePoint-40pc_C TextStyle-Base-S-B-BattlePoint-40pc.Default__TextStyle-Base-S-B-BattlePoint-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusBattlePointMinus40pc_C* UTextStyleMinusBaseMinusSMinusBMinusBattlePointMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusBattlePointMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusBattlePointMinus40pc_C*>(UTextStyleMinusBaseMinusSMinusBMinusBattlePointMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


