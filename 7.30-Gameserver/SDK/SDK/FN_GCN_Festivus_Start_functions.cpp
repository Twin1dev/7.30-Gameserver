#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Festivus_Start.GCN_Festivus_Start_C
// (None)

class UClass* UGCN_Festivus_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Festivus_Start_C");

	return Clss;
}


// GCN_Festivus_Start_C GCN_Festivus_Start.Default__GCN_Festivus_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Festivus_Start_C* UGCN_Festivus_Start_C::GetDefaultObj()
{
	static class UGCN_Festivus_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Festivus_Start_C*>(UGCN_Festivus_Start_C::StaticClass()->DefaultObject);

	return Default;
}

}


