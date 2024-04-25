#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MIDIDevice.MIDIDeviceController
// (None)

class UClass* UMIDIDeviceController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MIDIDeviceController");

	return Clss;
}


// MIDIDeviceController MIDIDevice.Default__MIDIDeviceController
// (Public, ClassDefaultObject, ArchetypeObject)

class UMIDIDeviceController* UMIDIDeviceController::GetDefaultObj()
{
	static class UMIDIDeviceController* Default = nullptr;

	if (!Default)
		Default = static_cast<UMIDIDeviceController*>(UMIDIDeviceController::StaticClass()->DefaultObject);

	return Default;
}


// Class MIDIDevice.MIDIDeviceManager
// (None)

class UClass* UMIDIDeviceManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MIDIDeviceManager");

	return Clss;
}


// MIDIDeviceManager MIDIDevice.Default__MIDIDeviceManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UMIDIDeviceManager* UMIDIDeviceManager::GetDefaultObj()
{
	static class UMIDIDeviceManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UMIDIDeviceManager*>(UMIDIDeviceManager::StaticClass()->DefaultObject);

	return Default;
}


// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFoundMIDIDevice>    OutMIDIDevices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MIDIDeviceManager", "FindMIDIDevices");

	Params::UMIDIDeviceManager_FindMIDIDevices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMIDIDevices != nullptr)
		*OutMIDIDevices = std::move(Parms.OutMIDIDevices);

}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              DeviceID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MIDIBufferSize                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceController*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMIDIDeviceController* UMIDIDeviceManager::CreateMIDIDeviceController(int32 DeviceID, int32 MIDIBufferSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MIDIDeviceManager", "CreateMIDIDeviceController");

	Params::UMIDIDeviceManager_CreateMIDIDeviceController_Params Parms{};

	Parms.DeviceID = DeviceID;
	Parms.MIDIBufferSize = MIDIBufferSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


