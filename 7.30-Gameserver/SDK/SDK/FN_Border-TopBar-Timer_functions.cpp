#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-TopBar-Timer.Border-TopBar-Timer_C
// (None)

class UClass* UBorderMinusTopBarMinusTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-TopBar-Timer_C");

	return Clss;
}


// Border-TopBar-Timer_C Border-TopBar-Timer.Default__Border-TopBar-Timer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusTopBarMinusTimer_C* UBorderMinusTopBarMinusTimer_C::GetDefaultObj()
{
	static class UBorderMinusTopBarMinusTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusTopBarMinusTimer_C*>(UBorderMinusTopBarMinusTimer_C::StaticClass()->DefaultObject);

	return Default;
}

}


