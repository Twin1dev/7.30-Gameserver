#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_Pistol_FC_SA.BP_Pistol_FC_SA_C
// (None)

class UClass* UBP_Pistol_FC_SA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pistol_FC_SA_C");

	return Clss;
}


// BP_Pistol_FC_SA_C BP_Pistol_FC_SA.Default__BP_Pistol_FC_SA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Pistol_FC_SA_C* UBP_Pistol_FC_SA_C::GetDefaultObj()
{
	static class UBP_Pistol_FC_SA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Pistol_FC_SA_C*>(UBP_Pistol_FC_SA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Pistol_FC_SA.BP_Pistol_FC_SA_C.ExecuteUbergraph_BP_Pistol_FC_SA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Pistol_FC_SA_C::ExecuteUbergraph_BP_Pistol_FC_SA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Pistol_FC_SA_C", "ExecuteUbergraph_BP_Pistol_FC_SA");

	Params::UBP_Pistol_FC_SA_C_ExecuteUbergraph_BP_Pistol_FC_SA_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


