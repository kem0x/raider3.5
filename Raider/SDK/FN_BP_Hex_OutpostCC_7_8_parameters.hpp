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

// Function BP_Hex_OutpostCC_7_8.BP_Hex_OutpostCC_7_C.UserConstructionScript
struct ABP_Hex_OutpostCC_7_C_UserConstructionScript_Params
{
};

// Function BP_Hex_OutpostCC_7_8.BP_Hex_OutpostCC_7_C.ReceiveBeginPlay
struct ABP_Hex_OutpostCC_7_C_ReceiveBeginPlay_Params
{
};

// Function BP_Hex_OutpostCC_7_8.BP_Hex_OutpostCC_7_C.ActivateOutpost
struct ABP_Hex_OutpostCC_7_C_ActivateOutpost_Params
{
};

// Function BP_Hex_OutpostCC_7_8.BP_Hex_OutpostCC_7_C.HandleOnPlayerInfoChanged
struct ABP_Hex_OutpostCC_7_C_HandleOnPlayerInfoChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Hex_OutpostCC_7_8.BP_Hex_OutpostCC_7_C.ExecuteUbergraph_BP_Hex_OutpostCC_7_8
struct ABP_Hex_OutpostCC_7_C_ExecuteUbergraph_BP_Hex_OutpostCC_7_8_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
