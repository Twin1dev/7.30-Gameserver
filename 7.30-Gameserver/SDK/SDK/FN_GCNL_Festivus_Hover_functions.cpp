#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Festivus_Hover.GCNL_Festivus_Hover_C
// (Actor)

class UClass* AGCNL_Festivus_Hover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Festivus_Hover_C");

	return Clss;
}


// GCNL_Festivus_Hover_C GCNL_Festivus_Hover.Default__GCNL_Festivus_Hover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Festivus_Hover_C* AGCNL_Festivus_Hover_C::GetDefaultObj()
{
	static class AGCNL_Festivus_Hover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Festivus_Hover_C*>(AGCNL_Festivus_Hover_C::StaticClass()->DefaultObject);

	return Default;
}

}


