#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_GolfBall_Score_Elite.GCN_GolfBall_Score_Elite_C
// (None)

class UClass* UGCN_GolfBall_Score_Elite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_GolfBall_Score_Elite_C");

	return Clss;
}


// GCN_GolfBall_Score_Elite_C GCN_GolfBall_Score_Elite.Default__GCN_GolfBall_Score_Elite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_GolfBall_Score_Elite_C* UGCN_GolfBall_Score_Elite_C::GetDefaultObj()
{
	static class UGCN_GolfBall_Score_Elite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_GolfBall_Score_Elite_C*>(UGCN_GolfBall_Score_Elite_C::StaticClass()->DefaultObject);

	return Default;
}

}


