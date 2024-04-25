#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Niagara.MovieSceneNiagaraTrack
// (None)

class UClass* UMovieSceneNiagaraTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraTrack");

	return Clss;
}


// MovieSceneNiagaraTrack Niagara.Default__MovieSceneNiagaraTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraTrack* UMovieSceneNiagaraTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraTrack*>(UMovieSceneNiagaraTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraParameterTrack
// (None)

class UClass* UMovieSceneNiagaraParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraParameterTrack");

	return Clss;
}


// MovieSceneNiagaraParameterTrack Niagara.Default__MovieSceneNiagaraParameterTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraParameterTrack* UMovieSceneNiagaraParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraParameterTrack*>(UMovieSceneNiagaraParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// (None)

class UClass* UMovieSceneNiagaraBoolParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraBoolParameterTrack");

	return Clss;
}


// MovieSceneNiagaraBoolParameterTrack Niagara.Default__MovieSceneNiagaraBoolParameterTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraBoolParameterTrack* UMovieSceneNiagaraBoolParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraBoolParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraBoolParameterTrack*>(UMovieSceneNiagaraBoolParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// (None)

class UClass* UMovieSceneNiagaraColorParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraColorParameterTrack");

	return Clss;
}


// MovieSceneNiagaraColorParameterTrack Niagara.Default__MovieSceneNiagaraColorParameterTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraColorParameterTrack* UMovieSceneNiagaraColorParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraColorParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraColorParameterTrack*>(UMovieSceneNiagaraColorParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// (None)

class UClass* UMovieSceneNiagaraFloatParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraFloatParameterTrack");

	return Clss;
}


// MovieSceneNiagaraFloatParameterTrack Niagara.Default__MovieSceneNiagaraFloatParameterTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraFloatParameterTrack* UMovieSceneNiagaraFloatParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraFloatParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraFloatParameterTrack*>(UMovieSceneNiagaraFloatParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// (None)

class UClass* UMovieSceneNiagaraIntegerParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraIntegerParameterTrack");

	return Clss;
}


// MovieSceneNiagaraIntegerParameterTrack Niagara.Default__MovieSceneNiagaraIntegerParameterTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraIntegerParameterTrack* UMovieSceneNiagaraIntegerParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraIntegerParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraIntegerParameterTrack*>(UMovieSceneNiagaraIntegerParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// (None)

class UClass* UMovieSceneNiagaraSystemSpawnSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraSystemSpawnSection");

	return Clss;
}


// MovieSceneNiagaraSystemSpawnSection Niagara.Default__MovieSceneNiagaraSystemSpawnSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraSystemSpawnSection* UMovieSceneNiagaraSystemSpawnSection::GetDefaultObj()
{
	static class UMovieSceneNiagaraSystemSpawnSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraSystemSpawnSection*>(UMovieSceneNiagaraSystemSpawnSection::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraSystemTrack
// (None)

class UClass* UMovieSceneNiagaraSystemTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraSystemTrack");

	return Clss;
}


// MovieSceneNiagaraSystemTrack Niagara.Default__MovieSceneNiagaraSystemTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraSystemTrack* UMovieSceneNiagaraSystemTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraSystemTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraSystemTrack*>(UMovieSceneNiagaraSystemTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// (None)

class UClass* UMovieSceneNiagaraVectorParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneNiagaraVectorParameterTrack");

	return Clss;
}


// MovieSceneNiagaraVectorParameterTrack Niagara.Default__MovieSceneNiagaraVectorParameterTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneNiagaraVectorParameterTrack* UMovieSceneNiagaraVectorParameterTrack::GetDefaultObj()
{
	static class UMovieSceneNiagaraVectorParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneNiagaraVectorParameterTrack*>(UMovieSceneNiagaraVectorParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraActor
// (Actor)

class UClass* ANiagaraActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraActor");

	return Clss;
}


// NiagaraActor Niagara.Default__NiagaraActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ANiagaraActor* ANiagaraActor::GetDefaultObj()
{
	static class ANiagaraActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ANiagaraActor*>(ANiagaraActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNiagaraComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraComponent");

	return Clss;
}


// NiagaraComponent Niagara.Default__NiagaraComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraComponent* UNiagaraComponent::GetDefaultObj()
{
	static class UNiagaraComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraComponent*>(UNiagaraComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraComponent.SetSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSeekDelta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetSeekDelta");

	Params::UNiagaraComponent_SetSeekDelta_Params Parms{};

	Parms.InSeekDelta = InSeekDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInRenderingEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetRenderingEnabled");

	Params::UNiagaraComponent_SetRenderingEnabled_Params Parms{};

	Parms.bInRenderingEnabled = bInRenderingEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInPaused                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetPaused(bool bInPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetPaused");

	Params::UNiagaraComponent_SetPaused_Params Parms{};

	Parms.bInPaused = bInPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec4(const class FString& InVariableName, struct FVector4& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec4");

	Params::UNiagaraComponent_SetNiagaraVariableVec4_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec3");

	Params::UNiagaraComponent_SetNiagaraVariableVec3_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec2");

	Params::UNiagaraComponent_SetNiagaraVariableVec2_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableQuat(const class FString& InVariableName, struct FQuat& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableQuat");

	Params::UNiagaraComponent_SetNiagaraVariableQuat_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableLinearColor(const class FString& InVariableName, struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableLinearColor");

	Params::UNiagaraComponent_SetNiagaraVariableLinearColor_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableInt(const class FString& InVariableName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableInt");

	Params::UNiagaraComponent_SetNiagaraVariableInt_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableFloat(const class FString& InVariableName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableFloat");

	Params::UNiagaraComponent_SetNiagaraVariableFloat_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableBool(const class FString& InVariableName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableBool");

	Params::UNiagaraComponent_SetNiagaraVariableBool_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableActor");

	Params::UNiagaraComponent_SetNiagaraVariableActor_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetMaxSimTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetMaxSimTime");

	Params::UNiagaraComponent_SetMaxSimTime_Params Parms{};

	Parms.InMaxTime = InMaxTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetForceSolo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInForceSolo                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetForceSolo");

	Params::UNiagaraComponent_SetForceSolo_Params Parms{};

	Parms.bInForceSolo = bInForceSolo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDesiredAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetDesiredAge");

	Params::UNiagaraComponent_SetDesiredAge_Params Parms{};

	Parms.InDesiredAge = InDesiredAge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanRenderWhileSeeking                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetCanRenderWhileSeeking");

	Params::UNiagaraComponent_SetCanRenderWhileSeeking_Params Parms{};

	Parms.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetAutoDestroy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAutoDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAutoDestroy");

	Params::UNiagaraComponent_SetAutoDestroy_Params Parms{};

	Parms.bInAutoDestroy = bInAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetAutoAttachmentParameters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             Parent                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachmentRule         LocationRule                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachmentRule         RotationRule                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachmentRule         ScaleRule                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAutoAttachmentParameters(class USceneComponent* Parent, class FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAutoAttachmentParameters");

	Params::UNiagaraComponent_SetAutoAttachmentParameters_Params Parms{};

	Parms.Parent = Parent;
	Parms.SocketName = SocketName;
	Parms.LocationRule = LocationRule;
	Parms.RotationRule = RotationRule;
	Parms.ScaleRule = ScaleRule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              InAsset                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAsset");

	Params::UNiagaraComponent_SetAsset_Params Parms{};

	Parms.InAsset = InAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENiagaraAgeUpdateMode   InAgeUpdateMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAgeUpdateMode");

	Params::UNiagaraComponent_SetAgeUpdateMode_Params Parms{};

	Parms.InAgeUpdateMode = InAgeUpdateMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.SeekToDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDesiredAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SeekToDesiredAge");

	Params::UNiagaraComponent_SeekToDesiredAge_Params Parms{};

	Parms.InDesiredAge = InDesiredAge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.ResetSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::ResetSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ResetSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.ReinitializeSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::ReinitializeSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ReinitializeSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "IsPaused");

	Params::UNiagaraComponent_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetSeekDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetSeekDelta");

	Params::UNiagaraComponent_GetSeekDelta_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValueName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticleValueVec3_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params Parms{};

	Parms.InEmitterName = InEmitterName;
	Parms.InValueName = InValueName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValueName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticleValues_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params Parms{};

	Parms.InEmitterName = InEmitterName;
	Parms.InValueName = InValueName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticlePositions_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params Parms{};

	Parms.InEmitterName = InEmitterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetMaxSimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetMaxSimTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetMaxSimTime");

	Params::UNiagaraComponent_GetMaxSimTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetForceSolo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::GetForceSolo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetForceSolo");

	Params::UNiagaraComponent_GetForceSolo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetDesiredAge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetDesiredAge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetDesiredAge");

	Params::UNiagaraComponent_GetDesiredAge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraSystem*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraSystem* UNiagaraComponent::GetAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetAsset");

	Params::UNiagaraComponent_GetAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENiagaraAgeUpdateMode   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetAgeUpdateMode");

	Params::UNiagaraComponent_GetAgeUpdateMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SimulateTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TickDeltaSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "AdvanceSimulationByTime");

	Params::UNiagaraComponent_AdvanceSimulationByTime_Params Parms{};

	Parms.SimulateTime = SimulateTime;
	Parms.TickDeltaSeconds = TickDeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraComponent.AdvanceSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TickCount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TickDeltaSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::AdvanceSimulation(int32 TickCount, float TickDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "AdvanceSimulation");

	Params::UNiagaraComponent_AdvanceSimulation_Params Parms{};

	Parms.TickCount = TickCount;
	Parms.TickDeltaSeconds = TickDeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Niagara.NiagaraDataInterface
// (None)

class UClass* UNiagaraDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterface");

	return Clss;
}


// NiagaraDataInterface Niagara.Default__NiagaraDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterface* UNiagaraDataInterface::GetDefaultObj()
{
	static class UNiagaraDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterface*>(UNiagaraDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCurveBase
// (None)

class UClass* UNiagaraDataInterfaceCurveBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCurveBase");

	return Clss;
}


// NiagaraDataInterfaceCurveBase Niagara.Default__NiagaraDataInterfaceCurveBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCurveBase* UNiagaraDataInterfaceCurveBase::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCurveBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCurveBase*>(UNiagaraDataInterfaceCurveBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// (None)

class UClass* UNiagaraDataInterfaceCollisionQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCollisionQuery");

	return Clss;
}


// NiagaraDataInterfaceCollisionQuery Niagara.Default__NiagaraDataInterfaceCollisionQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCollisionQuery* UNiagaraDataInterfaceCollisionQuery::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCollisionQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCollisionQuery*>(UNiagaraDataInterfaceCollisionQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceColorCurve
// (None)

class UClass* UNiagaraDataInterfaceColorCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceColorCurve");

	return Clss;
}


// NiagaraDataInterfaceColorCurve Niagara.Default__NiagaraDataInterfaceColorCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceColorCurve* UNiagaraDataInterfaceColorCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceColorCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceColorCurve*>(UNiagaraDataInterfaceColorCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCurlNoise
// (None)

class UClass* UNiagaraDataInterfaceCurlNoise::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCurlNoise");

	return Clss;
}


// NiagaraDataInterfaceCurlNoise Niagara.Default__NiagaraDataInterfaceCurlNoise
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCurlNoise* UNiagaraDataInterfaceCurlNoise::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCurlNoise* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCurlNoise*>(UNiagaraDataInterfaceCurlNoise::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCurve
// (None)

class UClass* UNiagaraDataInterfaceCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCurve");

	return Clss;
}


// NiagaraDataInterfaceCurve Niagara.Default__NiagaraDataInterfaceCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCurve* UNiagaraDataInterfaceCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCurve*>(UNiagaraDataInterfaceCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// (None)

class UClass* UNiagaraDataInterfaceSimpleCounter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceSimpleCounter");

	return Clss;
}


// NiagaraDataInterfaceSimpleCounter Niagara.Default__NiagaraDataInterfaceSimpleCounter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceSimpleCounter* UNiagaraDataInterfaceSimpleCounter::GetDefaultObj()
{
	static class UNiagaraDataInterfaceSimpleCounter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceSimpleCounter*>(UNiagaraDataInterfaceSimpleCounter::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// (None)

class UClass* UNiagaraDataInterfaceSkeletalMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceSkeletalMesh");

	return Clss;
}


// NiagaraDataInterfaceSkeletalMesh Niagara.Default__NiagaraDataInterfaceSkeletalMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceSkeletalMesh* UNiagaraDataInterfaceSkeletalMesh::GetDefaultObj()
{
	static class UNiagaraDataInterfaceSkeletalMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceSkeletalMesh*>(UNiagaraDataInterfaceSkeletalMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceSpline
// (None)

class UClass* UNiagaraDataInterfaceSpline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceSpline");

	return Clss;
}


// NiagaraDataInterfaceSpline Niagara.Default__NiagaraDataInterfaceSpline
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceSpline* UNiagaraDataInterfaceSpline::GetDefaultObj()
{
	static class UNiagaraDataInterfaceSpline* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceSpline*>(UNiagaraDataInterfaceSpline::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceStaticMesh
// (None)

class UClass* UNiagaraDataInterfaceStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceStaticMesh");

	return Clss;
}


// NiagaraDataInterfaceStaticMesh Niagara.Default__NiagaraDataInterfaceStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceStaticMesh* UNiagaraDataInterfaceStaticMesh::GetDefaultObj()
{
	static class UNiagaraDataInterfaceStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceStaticMesh*>(UNiagaraDataInterfaceStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceTexture
// (None)

class UClass* UNiagaraDataInterfaceTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceTexture");

	return Clss;
}


// NiagaraDataInterfaceTexture Niagara.Default__NiagaraDataInterfaceTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceTexture* UNiagaraDataInterfaceTexture::GetDefaultObj()
{
	static class UNiagaraDataInterfaceTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceTexture*>(UNiagaraDataInterfaceTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// (None)

class UClass* UNiagaraDataInterfaceVector2DCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVector2DCurve");

	return Clss;
}


// NiagaraDataInterfaceVector2DCurve Niagara.Default__NiagaraDataInterfaceVector2DCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVector2DCurve* UNiagaraDataInterfaceVector2DCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVector2DCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVector2DCurve*>(UNiagaraDataInterfaceVector2DCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVector4Curve
// (None)

class UClass* UNiagaraDataInterfaceVector4Curve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVector4Curve");

	return Clss;
}


// NiagaraDataInterfaceVector4Curve Niagara.Default__NiagaraDataInterfaceVector4Curve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVector4Curve* UNiagaraDataInterfaceVector4Curve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVector4Curve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVector4Curve*>(UNiagaraDataInterfaceVector4Curve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVectorCurve
// (None)

class UClass* UNiagaraDataInterfaceVectorCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVectorCurve");

	return Clss;
}


// NiagaraDataInterfaceVectorCurve Niagara.Default__NiagaraDataInterfaceVectorCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVectorCurve* UNiagaraDataInterfaceVectorCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVectorCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVectorCurve*>(UNiagaraDataInterfaceVectorCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVectorField
// (None)

class UClass* UNiagaraDataInterfaceVectorField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVectorField");

	return Clss;
}


// NiagaraDataInterfaceVectorField Niagara.Default__NiagaraDataInterfaceVectorField
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVectorField* UNiagaraDataInterfaceVectorField::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVectorField* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVectorField*>(UNiagaraDataInterfaceVectorField::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEditorDataBase
// (None)

class UClass* UNiagaraEditorDataBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEditorDataBase");

	return Clss;
}


// NiagaraEditorDataBase Niagara.Default__NiagaraEditorDataBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEditorDataBase* UNiagaraEditorDataBase::GetDefaultObj()
{
	static class UNiagaraEditorDataBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEditorDataBase*>(UNiagaraEditorDataBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEmitter
// (None)

class UClass* UNiagaraEmitter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEmitter");

	return Clss;
}


// NiagaraEmitter Niagara.Default__NiagaraEmitter
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEmitter* UNiagaraEmitter::GetDefaultObj()
{
	static class UNiagaraEmitter* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEmitter*>(UNiagaraEmitter::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEventReceiverEmitterAction
// (None)

class UClass* UNiagaraEventReceiverEmitterAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction");

	return Clss;
}


// NiagaraEventReceiverEmitterAction Niagara.Default__NiagaraEventReceiverEmitterAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEventReceiverEmitterAction* UNiagaraEventReceiverEmitterAction::GetDefaultObj()
{
	static class UNiagaraEventReceiverEmitterAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEventReceiverEmitterAction*>(UNiagaraEventReceiverEmitterAction::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// (None)

class UClass* UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction_SpawnParticles");

	return Clss;
}


// NiagaraEventReceiverEmitterAction_SpawnParticles Niagara.Default__NiagaraEventReceiverEmitterAction_SpawnParticles
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEventReceiverEmitterAction_SpawnParticles* UNiagaraEventReceiverEmitterAction_SpawnParticles::GetDefaultObj()
{
	static class UNiagaraEventReceiverEmitterAction_SpawnParticles* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEventReceiverEmitterAction_SpawnParticles*>(UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraFunctionLibrary
// (None)

class UClass* UNiagaraFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraFunctionLibrary");

	return Clss;
}


// NiagaraFunctionLibrary Niagara.Default__NiagaraFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraFunctionLibrary* UNiagaraFunctionLibrary::GetDefaultObj()
{
	static class UNiagaraFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraFunctionLibrary*>(UNiagaraFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              SystemTemplate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAttached");

	Params::UNiagaraFunctionLibrary_SpawnSystemAttached_Params Parms{};

	Parms.SystemTemplate = SystemTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.LocationType = LocationType;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraSystem*              SystemTemplate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAtLocation");

	Params::UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SystemTemplate = SystemTemplate;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollection* Collection                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollectionInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "GetNiagaraParameterCollection");

	Params::UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Collection = Collection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraRendererProperties
// (None)

class UClass* UNiagaraRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraRendererProperties");

	return Clss;
}


// NiagaraRendererProperties Niagara.Default__NiagaraRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraRendererProperties* UNiagaraRendererProperties::GetDefaultObj()
{
	static class UNiagaraRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraRendererProperties*>(UNiagaraRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraLightRendererProperties
// (None)

class UClass* UNiagaraLightRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraLightRendererProperties");

	return Clss;
}


// NiagaraLightRendererProperties Niagara.Default__NiagaraLightRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraLightRendererProperties* UNiagaraLightRendererProperties::GetDefaultObj()
{
	static class UNiagaraLightRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraLightRendererProperties*>(UNiagaraLightRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraMeshRendererProperties
// (None)

class UClass* UNiagaraMeshRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraMeshRendererProperties");

	return Clss;
}


// NiagaraMeshRendererProperties Niagara.Default__NiagaraMeshRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraMeshRendererProperties* UNiagaraMeshRendererProperties::GetDefaultObj()
{
	static class UNiagaraMeshRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraMeshRendererProperties*>(UNiagaraMeshRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraParameterCollectionInstance
// (None)

class UClass* UNiagaraParameterCollectionInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraParameterCollectionInstance");

	return Clss;
}


// NiagaraParameterCollectionInstance Niagara.Default__NiagaraParameterCollectionInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraParameterCollectionInstance* UNiagaraParameterCollectionInstance::GetDefaultObj()
{
	static class UNiagaraParameterCollectionInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraParameterCollectionInstance*>(UNiagaraParameterCollectionInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVectorParameter");

	Params::UNiagaraParameterCollectionInstance_SetVectorParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVector4Parameter(const class FString& InVariableName, struct FVector4& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVector4Parameter");

	Params::UNiagaraParameterCollectionInstance_SetVector4Parameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVector2DParameter");

	Params::UNiagaraParameterCollectionInstance_SetVector2DParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetQuatParameter(const class FString& InVariableName, struct FQuat& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetQuatParameter");

	Params::UNiagaraParameterCollectionInstance_SetQuatParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetIntParameter(const class FString& InVariableName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetIntParameter");

	Params::UNiagaraParameterCollectionInstance_SetIntParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetFloatParameter(const class FString& InVariableName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetFloatParameter");

	Params::UNiagaraParameterCollectionInstance_SetFloatParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetColorParameter");

	Params::UNiagaraParameterCollectionInstance_SetColorParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetBoolParameter(const class FString& InVariableName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetBoolParameter");

	Params::UNiagaraParameterCollectionInstance_SetBoolParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVectorParameter");

	Params::UNiagaraParameterCollectionInstance_GetVectorParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVector4Parameter");

	Params::UNiagaraParameterCollectionInstance_GetVector4Parameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVector2DParameter");

	Params::UNiagaraParameterCollectionInstance_GetVector2DParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetQuatParameter");

	Params::UNiagaraParameterCollectionInstance_GetQuatParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraParameterCollectionInstance::GetIntParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetIntParameter");

	Params::UNiagaraParameterCollectionInstance_GetIntParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraParameterCollectionInstance::GetFloatParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetFloatParameter");

	Params::UNiagaraParameterCollectionInstance_GetFloatParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetColorParameter");

	Params::UNiagaraParameterCollectionInstance_GetColorParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraParameterCollectionInstance::GetBoolParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetBoolParameter");

	Params::UNiagaraParameterCollectionInstance_GetBoolParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraParameterCollection
// (None)

class UClass* UNiagaraParameterCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraParameterCollection");

	return Clss;
}


// NiagaraParameterCollection Niagara.Default__NiagaraParameterCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraParameterCollection* UNiagaraParameterCollection::GetDefaultObj()
{
	static class UNiagaraParameterCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraParameterCollection*>(UNiagaraParameterCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraRibbonRendererProperties
// (None)

class UClass* UNiagaraRibbonRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraRibbonRendererProperties");

	return Clss;
}


// NiagaraRibbonRendererProperties Niagara.Default__NiagaraRibbonRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraRibbonRendererProperties* UNiagaraRibbonRendererProperties::GetDefaultObj()
{
	static class UNiagaraRibbonRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraRibbonRendererProperties*>(UNiagaraRibbonRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraScript
// (None)

class UClass* UNiagaraScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraScript");

	return Clss;
}


// NiagaraScript Niagara.Default__NiagaraScript
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraScript* UNiagaraScript::GetDefaultObj()
{
	static class UNiagaraScript* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraScript*>(UNiagaraScript::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraScript.OnCompilationComplete
// (Final, Native, Public)
// Parameters:

void UNiagaraScript::OnCompilationComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraScript", "OnCompilationComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Niagara.NiagaraScriptSourceBase
// (None)

class UClass* UNiagaraScriptSourceBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraScriptSourceBase");

	return Clss;
}


// NiagaraScriptSourceBase Niagara.Default__NiagaraScriptSourceBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraScriptSourceBase* UNiagaraScriptSourceBase::GetDefaultObj()
{
	static class UNiagaraScriptSourceBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraScriptSourceBase*>(UNiagaraScriptSourceBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSettings
// (None)

class UClass* UNiagaraSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSettings");

	return Clss;
}


// NiagaraSettings Niagara.Default__NiagaraSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSettings* UNiagaraSettings::GetDefaultObj()
{
	static class UNiagaraSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSettings*>(UNiagaraSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSpriteRendererProperties
// (None)

class UClass* UNiagaraSpriteRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSpriteRendererProperties");

	return Clss;
}


// NiagaraSpriteRendererProperties Niagara.Default__NiagaraSpriteRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSpriteRendererProperties* UNiagaraSpriteRendererProperties::GetDefaultObj()
{
	static class UNiagaraSpriteRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSpriteRendererProperties*>(UNiagaraSpriteRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSystem
// (None)

class UClass* UNiagaraSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSystem");

	return Clss;
}


// NiagaraSystem Niagara.Default__NiagaraSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSystem* UNiagaraSystem::GetDefaultObj()
{
	static class UNiagaraSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSystem*>(UNiagaraSystem::StaticClass()->DefaultObject);

	return Default;
}

}


