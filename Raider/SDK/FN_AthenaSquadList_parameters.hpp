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

// Function AthenaSquadList.AthenaSquadList_C.ClearSquadMembers
struct UAthenaSquadList_C_ClearSquadMembers_Params
{
};

// Function AthenaSquadList.AthenaSquadList_C.RebuildSquadMembersList
struct UAthenaSquadList_C_RebuildSquadMembersList_Params
{
};

// Function AthenaSquadList.AthenaSquadList_C.AppendSquadMember
struct UAthenaSquadList_C_AppendSquadMember_Params
{
	class AFortPlayerStateAthena*                      PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSquadList.AthenaSquadList_C.Construct
struct UAthenaSquadList_C_Construct_Params
{
};

// Function AthenaSquadList.AthenaSquadList_C.PreConstruct
struct UAthenaSquadList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSquadList.AthenaSquadList_C.RolloutAddFriend
struct UAthenaSquadList_C_RolloutAddFriend_Params
{
};

// Function AthenaSquadList.AthenaSquadList_C.ExecuteUbergraph_AthenaSquadList
struct UAthenaSquadList_C_ExecuteUbergraph_AthenaSquadList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
