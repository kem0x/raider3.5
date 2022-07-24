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

// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.UserConstructionScript
struct AGCL_Carmine_Jump_Trails_C_UserConstructionScript_Params
{
};

// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ReceiveBeginPlay
struct AGCL_Carmine_Jump_Trails_C_ReceiveBeginPlay_Params
{
};

// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ReceiveEndPlay
struct AGCL_Carmine_Jump_Trails_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ExecuteUbergraph_GCL_Carmine_Jump_Trails
struct AGCL_Carmine_Jump_Trails_C_ExecuteUbergraph_GCL_Carmine_Jump_Trails_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
