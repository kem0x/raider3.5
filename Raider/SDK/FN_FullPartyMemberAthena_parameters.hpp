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

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.SetBannerIconAndColor
struct UFullPartyMemberAthena_C_SetBannerIconAndColor_Params
{
	struct FString*                                    IconId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OpenPartyFinder
struct UFullPartyMemberAthena_C_OpenPartyFinder_Params
{
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnFriendshipStatusDetermined
struct UFullPartyMemberAthena_C_OnFriendshipStatusDetermined_Params
{
	EFortFriendRequestStatus*                          RequestStatus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ExecuteUbergraph_FullPartyMemberAthena
struct UFullPartyMemberAthena_C_ExecuteUbergraph_FullPartyMemberAthena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
