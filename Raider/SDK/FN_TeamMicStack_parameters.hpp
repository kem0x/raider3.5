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

// Function TeamMicStack.TeamMicStack_C.ClearContents
struct UTeamMicStack_C_ClearContents_Params
{
};

// Function TeamMicStack.TeamMicStack_C.AppendTeamMember
struct UTeamMicStack_C_AppendTeamMember_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TeamMicStack.TeamMicStack_C.ShiftTeamMembers
struct UTeamMicStack_C_ShiftTeamMembers_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberChanged
struct UTeamMicStack_C_HandleTeamMemberChanged_Params
{
	struct FFortTeamMemberInfo                         Member_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberRemoved
struct UTeamMicStack_C_HandleTeamMemberRemoved_Params
{
	int                                                Member_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMicStack.TeamMicStack_C.Construct
struct UTeamMicStack_C_Construct_Params
{
};

// Function TeamMicStack.TeamMicStack_C.HandlePartyLeft
struct UTeamMicStack_C_HandlePartyLeft_Params
{
};

// Function TeamMicStack.TeamMicStack_C.ExecuteUbergraph_TeamMicStack
struct UTeamMicStack_C_ExecuteUbergraph_TeamMicStack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
