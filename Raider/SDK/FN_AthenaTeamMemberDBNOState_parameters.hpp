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

// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.RefreshVisuals
struct UAthenaTeamMemberDBNOState_C_RefreshVisuals_Params
{
};

// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set Reviving
struct UAthenaTeamMemberDBNOState_C_Set_Reviving_Params
{
	bool                                               Is_Reviving;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set DBNO
struct UAthenaTeamMemberDBNOState_C_Set_DBNO_Params
{
	bool                                               Is_DBNO;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Construct
struct UAthenaTeamMemberDBNOState_C_Construct_Params
{
};

// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.ExecuteUbergraph_AthenaTeamMemberDBNOState
struct UAthenaTeamMemberDBNOState_C_ExecuteUbergraph_AthenaTeamMemberDBNOState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
