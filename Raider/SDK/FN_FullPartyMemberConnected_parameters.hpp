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

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateDimensions
struct UFullPartyMemberConnected_C_UpdateDimensions_Params
{
	struct FVector2D                                   NewDimensions;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.UpdateMemberInfo
struct UFullPartyMemberConnected_C_UpdateMemberInfo_Params
{
	struct FFortTeamMemberInfo                         NewMemberInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.PreConstruct
struct UFullPartyMemberConnected_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.Construct
struct UFullPartyMemberConnected_C_Construct_Params
{
};

// Function FullPartyMemberConnected.FullPartyMemberConnected_C.ExecuteUbergraph_FullPartyMemberConnected
struct UFullPartyMemberConnected_C_ExecuteUbergraph_FullPartyMemberConnected_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
