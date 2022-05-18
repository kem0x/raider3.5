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

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.UserConstructionScript
struct ABP_Hex_OutpostCC_C_UserConstructionScript_Params
{
};

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ReceiveBeginPlay
struct ABP_Hex_OutpostCC_C_ReceiveBeginPlay_Params
{
};

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ActivateOutpost
struct ABP_Hex_OutpostCC_C_ActivateOutpost_Params
{
};

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.HandleOnPlayerInfoChanged
struct ABP_Hex_OutpostCC_C_HandleOnPlayerInfoChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ExecuteUbergraph_BP_Hex_OutpostCC
struct ABP_Hex_OutpostCC_C_ExecuteUbergraph_BP_Hex_OutpostCC_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
