#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Perk_H_CorruptedAura_Impact.GCN_Perk_H_CorruptedAura_Impact_C
// (None)

class UClass* UGCN_Perk_H_CorruptedAura_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Perk_H_CorruptedAura_Impact_C");

	return Clss;
}


// GCN_Perk_H_CorruptedAura_Impact_C GCN_Perk_H_CorruptedAura_Impact.Default__GCN_Perk_H_CorruptedAura_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Perk_H_CorruptedAura_Impact_C* UGCN_Perk_H_CorruptedAura_Impact_C::GetDefaultObj()
{
	static class UGCN_Perk_H_CorruptedAura_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Perk_H_CorruptedAura_Impact_C*>(UGCN_Perk_H_CorruptedAura_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}


