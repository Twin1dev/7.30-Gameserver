#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-ManageListHeader.Border-ManageListHeader_C
// (None)

class UClass* UBorderMinusManageListHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-ManageListHeader_C");

	return Clss;
}


// Border-ManageListHeader_C Border-ManageListHeader.Default__Border-ManageListHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusManageListHeader_C* UBorderMinusManageListHeader_C::GetDefaultObj()
{
	static class UBorderMinusManageListHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusManageListHeader_C*>(UBorderMinusManageListHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


