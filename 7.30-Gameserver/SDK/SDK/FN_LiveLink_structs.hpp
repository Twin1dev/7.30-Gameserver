#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x38 - 0x10)
// ScriptStruct LiveLink.AnimNode_LiveLinkPose
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
public:
	class FName                                  SubjectName;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRetargetAsset>    RetargetAsset;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_685[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLink.SubjectFrameHandle
struct FSubjectFrameHandle
{
public:
	uint8                                        Pad_687[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LiveLink.LiveLinkTransform
struct FLiveLinkTransform
{
public:
	uint8                                        Pad_689[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct LiveLink.CachedSubjectFrame
struct FCachedSubjectFrame
{
public:
	uint8                                        Pad_689[0x140];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LiveLink.SubjectMetadata
struct FSubjectMetadata
{
public:
	TMap<class FName, class FString>             StringMetadata;                                    // 0x0(0x50)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimecode                             SceneTimecode;                                     // 0x50(0x14)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            SceneFramerate;                                    // 0x64(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x6D0 - 0x690)
// ScriptStruct LiveLink.LiveLinkInstanceProxy
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_68C[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LiveLink.ProviderPollResult
struct FProviderPollResult
{
public:
	uint8                                        Pad_68D[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MachineName;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
struct FLiveLinkRetargetAssetReference
{
public:
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LiveLink.LiveLinkVirtualSubject
struct FLiveLinkVirtualSubject
{
public:
	TArray<class FName>                          Subjects;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_68F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Source;                                            // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_690[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct LiveLink.MovieSceneLiveLinkTemplateData
struct FMovieSceneLiveLinkTemplateData
{
public:
	TArray<struct FMovieSceneFloatChannel>       FloatChannels;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameData                    TemplateToPush;                                    // 0x10(0x90)(NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0xA0(0x20)(NativeAccessSpecifierPublic)
	class FName                                  SubjectName;                                       // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0x110 - 0x48)
// ScriptStruct LiveLink.MovieSceneLiveLinkSectionTemplate
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneLiveLinkTemplateData       TemplateData;                                      // 0x48(0xC8)(NativeAccessSpecifierPublic)
};

}


