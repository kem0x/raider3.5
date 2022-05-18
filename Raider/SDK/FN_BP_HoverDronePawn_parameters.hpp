#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HoverDronePawn.BP_HoverDronePawn_C.GetWindVolumeFromAltitude
struct ABP_HoverDronePawn_C_GetWindVolumeFromAltitude_Params
{
	float                                              Altitude;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverDronePawn.BP_HoverDronePawn_C.SetWindAudioEnabled
struct ABP_HoverDronePawn_C_SetWindAudioEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverDronePawn.BP_HoverDronePawn_C.UserConstructionScript
struct ABP_HoverDronePawn_C_UserConstructionScript_Params
{
};

// Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveBeginPlay
struct ABP_HoverDronePawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveTick
struct ABP_HoverDronePawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceivePossessed
struct ABP_HoverDronePawn_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveUnpossessed
struct ABP_HoverDronePawn_C_ReceiveUnpossessed_Params
{
	class AController**                                OldController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverDronePawn.BP_HoverDronePawn_C.Update Wind Audio
struct ABP_HoverDronePawn_C_Update_Wind_Audio_Params
{
};

// Function BP_HoverDronePawn.BP_HoverDronePawn_C.ExecuteUbergraph_BP_HoverDronePawn
struct ABP_HoverDronePawn_C_ExecuteUbergraph_BP_HoverDronePawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
