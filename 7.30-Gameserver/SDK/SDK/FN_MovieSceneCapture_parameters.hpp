#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UMovieSceneCaptureProtocolBase_IsCapturing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UMovieSceneCaptureProtocolBase_GetState_Params
{
public:
	enum class EMovieSceneCaptureProtocolState   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
struct UMovieSceneCapture_SetImageCaptureProtocolType_Params
{
public:
	TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
struct UMovieSceneCapture_SetAudioCaptureProtocolType_Params
{
public:
	TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
struct UMovieSceneCapture_GetImageCaptureProtocol_Params
{
public:
	class UMovieSceneCaptureProtocolBase*        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
struct UMovieSceneCapture_GetAudioCaptureProtocol_Params
{
public:
	class UMovieSceneCaptureProtocolBase*        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
struct UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
struct UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
struct UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
struct UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params
{
public:
	class UMovieSceneImageCaptureProtocolBase*   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
struct UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params
{
public:
	class UMovieSceneAudioCaptureProtocolBase*   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
struct UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params
{
public:
	class FName                                  StreamName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
struct UUserDefinedCaptureProtocol_ResolveBuffer_Params
{
public:
	class UTexture*                              Buffer;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BufferName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Handler;                                           // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.PushBufferToStream
struct UUserDefinedCaptureProtocol_PushBufferToStream_Params
{
public:
	class UTexture*                              Buffer;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StreamName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
struct UUserDefinedCaptureProtocol_OnSetup_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
struct UUserDefinedCaptureProtocol_OnCanFinalize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
struct UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params
{
public:
	struct FFrameMetrics                         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
struct UUserDefinedCaptureProtocol_GenerateFilename_Params
{
public:
	struct FFrameMetrics                         InFrameMetrics;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.BindToStream
struct UUserDefinedCaptureProtocol_BindToStream_Params
{
public:
	class FName                                  StreamName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Handler;                                           // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
struct UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params
{
public:
	struct FCapturedPixels                       PixelData;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  StreamName;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameMetrics                         FrameMetrics;                                      // 0x18(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyImageData;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D98[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
struct UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
struct UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params
{
public:
	class UTexture*                              Buffer;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StreamName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


