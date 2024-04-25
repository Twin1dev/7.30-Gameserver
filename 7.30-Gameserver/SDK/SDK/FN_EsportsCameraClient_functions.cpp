#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EsportsCameraClient.EsportsCameraClient
// (Actor)

class UClass* AEsportsCameraClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EsportsCameraClient");

	return Clss;
}


// EsportsCameraClient EsportsCameraClient.Default__EsportsCameraClient
// (Public, ClassDefaultObject, ArchetypeObject)

class AEsportsCameraClient* AEsportsCameraClient::GetDefaultObj()
{
	static class AEsportsCameraClient* Default = nullptr;

	if (!Default)
		Default = static_cast<AEsportsCameraClient*>(AEsportsCameraClient::StaticClass()->DefaultObject);

	return Default;
}


// Function EsportsCameraClient.EsportsCameraClient.SetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    MaterialInstanceDynamic                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEsportsCameraClient::SetDynamicMaterial(class UMaterialInstanceDynamic* MaterialInstanceDynamic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EsportsCameraClient", "SetDynamicMaterial");

	Params::AEsportsCameraClient_SetDynamicMaterial_Params Parms{};

	Parms.MaterialInstanceDynamic = MaterialInstanceDynamic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EsportsCameraClient.EsportsCameraClient.IsPlayingWebMovie
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AEsportsCameraClient::IsPlayingWebMovie()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EsportsCameraClient", "IsPlayingWebMovie");

	Params::AEsportsCameraClient_IsPlayingWebMovie_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EsportsCameraClient.EsportsCameraClient.IsPlatformEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AEsportsCameraClient::IsPlatformEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EsportsCameraClient", "IsPlatformEnabled");

	Params::AEsportsCameraClient_IsPlatformEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EsportsCameraClient.EsportsCameraClient.HasDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AEsportsCameraClient::HasDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EsportsCameraClient", "HasDynamicMaterial");

	Params::AEsportsCameraClient_HasDynamicMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EsportsCameraClient.EsportsCameraStatusBase
// (None)

class UClass* UEsportsCameraStatusBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EsportsCameraStatusBase");

	return Clss;
}


// EsportsCameraStatusBase EsportsCameraClient.Default__EsportsCameraStatusBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEsportsCameraStatusBase* UEsportsCameraStatusBase::GetDefaultObj()
{
	static class UEsportsCameraStatusBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEsportsCameraStatusBase*>(UEsportsCameraStatusBase::StaticClass()->DefaultObject);

	return Default;
}


// Function EsportsCameraClient.EsportsCameraStatusBase.FollowedPlayerChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEsportsCameraClient*        InEsportsCameraClient                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEsportsCameraStatusBase::FollowedPlayerChanged(class AEsportsCameraClient* InEsportsCameraClient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EsportsCameraStatusBase", "FollowedPlayerChanged");

	Params::UEsportsCameraStatusBase_FollowedPlayerChanged_Params Parms{};

	Parms.InEsportsCameraClient = InEsportsCameraClient;

	UObject::ProcessEvent(Func, &Parms);

}


// Class EsportsCameraClient.WebCamBase
// (Actor)

class UClass* AWebCamBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebCamBase");

	return Clss;
}


// WebCamBase EsportsCameraClient.Default__WebCamBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AWebCamBase* AWebCamBase::GetDefaultObj()
{
	static class AWebCamBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AWebCamBase*>(AWebCamBase::StaticClass()->DefaultObject);

	return Default;
}


// Class EsportsCameraClient.M3U8MovieViewer
// (Actor)

class UClass* AM3U8MovieViewer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M3U8MovieViewer");

	return Clss;
}


// M3U8MovieViewer EsportsCameraClient.Default__M3U8MovieViewer
// (Public, ClassDefaultObject, ArchetypeObject)

class AM3U8MovieViewer* AM3U8MovieViewer::GetDefaultObj()
{
	static class AM3U8MovieViewer* Default = nullptr;

	if (!Default)
		Default = static_cast<AM3U8MovieViewer*>(AM3U8MovieViewer::StaticClass()->DefaultObject);

	return Default;
}


// Class EsportsCameraClient.MySoundWave
// (None)

class UClass* UMySoundWave::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MySoundWave");

	return Clss;
}


// MySoundWave EsportsCameraClient.Default__MySoundWave
// (Public, ClassDefaultObject, ArchetypeObject)

class UMySoundWave* UMySoundWave::GetDefaultObj()
{
	static class UMySoundWave* Default = nullptr;

	if (!Default)
		Default = static_cast<UMySoundWave*>(UMySoundWave::StaticClass()->DefaultObject);

	return Default;
}


// Class EsportsCameraClient.WebCamReader
// (Actor)

class UClass* AWebCamReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebCamReader");

	return Clss;
}


// WebCamReader EsportsCameraClient.Default__WebCamReader
// (Public, ClassDefaultObject, ArchetypeObject)

class AWebCamReader* AWebCamReader::GetDefaultObj()
{
	static class AWebCamReader* Default = nullptr;

	if (!Default)
		Default = static_cast<AWebCamReader*>(AWebCamReader::StaticClass()->DefaultObject);

	return Default;
}


// Class EsportsCameraClient.WebCamViewer
// (Actor)

class UClass* AWebCamViewer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebCamViewer");

	return Clss;
}


// WebCamViewer EsportsCameraClient.Default__WebCamViewer
// (Public, ClassDefaultObject, ArchetypeObject)

class AWebCamViewer* AWebCamViewer::GetDefaultObj()
{
	static class AWebCamViewer* Default = nullptr;

	if (!Default)
		Default = static_cast<AWebCamViewer*>(AWebCamViewer::StaticClass()->DefaultObject);

	return Default;
}

}


