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

// 0x8 (0x8 - 0x0)
// Function EsportsCameraClient.EsportsCameraClient.SetDynamicMaterial
struct AEsportsCameraClient_SetDynamicMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              MaterialInstanceDynamic;                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EsportsCameraClient.EsportsCameraClient.IsPlayingWebMovie
struct AEsportsCameraClient_IsPlayingWebMovie_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EsportsCameraClient.EsportsCameraClient.IsPlatformEnabled
struct AEsportsCameraClient_IsPlatformEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EsportsCameraClient.EsportsCameraClient.HasDynamicMaterial
struct AEsportsCameraClient_HasDynamicMaterial_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EsportsCameraClient.EsportsCameraStatusBase.FollowedPlayerChanged
struct UEsportsCameraStatusBase_FollowedPlayerChanged_Params
{
public:
	class AEsportsCameraClient*                  InEsportsCameraClient;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


