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

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.UpdateLocalPlayerInfo
struct UAthenaPlayerInfo_C_UpdateLocalPlayerInfo_Params
{
	struct FFortTeamMemberInfo                         Player_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.Construct
struct UAthenaPlayerInfo_C_Construct_Params
{
};

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.HandlePlayerStateChanged
struct UAthenaPlayerInfo_C_HandlePlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.Destruct
struct UAthenaPlayerInfo_C_Destruct_Params
{
};

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.ExecuteUbergraph_AthenaPlayerInfo
struct UAthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
