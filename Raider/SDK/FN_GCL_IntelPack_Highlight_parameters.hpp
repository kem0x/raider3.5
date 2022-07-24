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

// Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.UserConstructionScript
struct AGCL_IntelPack_Highlight_C_UserConstructionScript_Params
{
};

// Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.ReceiveBeginPlay
struct AGCL_IntelPack_Highlight_C_ReceiveBeginPlay_Params
{
};

// Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.ReceiveEndPlay
struct AGCL_IntelPack_Highlight_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.Set Pawn Location
struct AGCL_IntelPack_Highlight_C_Set_Pawn_Location_Params
{
};

// Function GCL_IntelPack_Highlight.GCL_IntelPack_Highlight_C.ExecuteUbergraph_GCL_IntelPack_Highlight
struct AGCL_IntelPack_Highlight_C_ExecuteUbergraph_GCL_IntelPack_Highlight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
