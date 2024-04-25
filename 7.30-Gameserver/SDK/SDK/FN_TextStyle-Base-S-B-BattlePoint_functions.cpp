#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-BattlePoint.TextStyle-Base-S-B-BattlePoint_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusBattlePoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-BattlePoint_C");

	return Clss;
}


// TextStyle-Base-S-B-BattlePoint_C TextStyle-Base-S-B-BattlePoint.Default__TextStyle-Base-S-B-BattlePoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusBattlePoint_C* UTextStyleMinusBaseMinusSMinusBMinusBattlePoint_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusBattlePoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusBattlePoint_C*>(UTextStyleMinusBaseMinusSMinusBMinusBattlePoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


