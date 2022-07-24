#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.UserConstructionScript
struct ABP_Med_Pack_OverlapVolume_C_UserConstructionScript_Params
{
};

// Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.ReceiveActorBeginOverlap
struct ABP_Med_Pack_OverlapVolume_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.ReceiveTick
struct ABP_Med_Pack_OverlapVolume_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.ExecuteUbergraph_BP_Med_Pack_OverlapVolume
struct ABP_Med_Pack_OverlapVolume_C_ExecuteUbergraph_BP_Med_Pack_OverlapVolume_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
