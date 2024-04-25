#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Football_score.GCN_Football_Score_C
// (None)

class UClass* UGCN_Football_Score_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Football_Score_C");

	return Clss;
}


// GCN_Football_Score_C GCN_Football_score.Default__GCN_Football_Score_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Football_Score_C* UGCN_Football_Score_C::GetDefaultObj()
{
	static class UGCN_Football_Score_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Football_Score_C*>(UGCN_Football_Score_C::StaticClass()->DefaultObject);

	return Default;
}

}


