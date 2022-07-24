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

// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.OnActionCompleted
struct ACheckPlayerBanStatus_C_OnActionCompleted_Params
{
};

// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.ShowBan
struct ACheckPlayerBanStatus_C_ShowBan_Params
{
};

// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.UserConstructionScript
struct ACheckPlayerBanStatus_C_UserConstructionScript_Params
{
};

// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.Execute
struct ACheckPlayerBanStatus_C_Execute_Params
{
	struct FFortScriptedActionParams*                  Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CheckPlayerBanStatus.CheckPlayerBanStatus_C.ExecuteUbergraph_CheckPlayerBanStatus
struct ACheckPlayerBanStatus_C_ExecuteUbergraph_CheckPlayerBanStatus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
