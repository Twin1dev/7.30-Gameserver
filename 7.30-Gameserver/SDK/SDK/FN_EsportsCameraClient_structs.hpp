#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDisplayMode : uint8
{
	None                           = 0,
	WebCam                         = 1,
	M3U8MovieTest                  = 2,
	EDisplayMode_MAX               = 3,
};

enum class EM3U8StreamState : uint8
{
	RequestingM3U8                 = 0,
	M3U8Received                   = 1,
	M3U8Failed                     = 2,
	StartFirstBuffering            = 3,
	FirstBufferingComplete         = 4,
	PlayingTS                      = 5,
	TSFinished                     = 6,
	TSError                        = 7,
	EM3U8StreamState_MAX           = 8,
};

enum class EDecodeType : uint8
{
	DecodeNone                     = 0,
	DecodeWebCamLo                 = 1,
	EDecodeType_MAX                = 2,
};

enum class EWebCamMessageServiceSenderState : uint8
{
	None                           = 0,
	Connecting                     = 1,
	SentHello                      = 2,
	Connected                      = 3,
	EWebCamMessageServiceSenderState_MAX = 4,
};

enum class EWebCameraMessageType : uint8
{
	None                           = 0,
	SC_Welcome                     = 1,
	CS_WebCamReaderReady           = 2,
	CS_WebCamViewerReady           = 3,
	SC_RequestWebCamUpdates        = 4,
	CS_HereIsWebCamUpdate          = 5,
	SC_MakeReadyToReceiveWebCamUpdates = 6,
	SC_HereIsWebCamUpdate          = 7,
	CS_StillAlive                  = 8,
	CS_ChangeWebCamViewerPlayer    = 9,
	CS_EndConnection               = 10,
	EWebCameraMessageType_MAX      = 11,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


