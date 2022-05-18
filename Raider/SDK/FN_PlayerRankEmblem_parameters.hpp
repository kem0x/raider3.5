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

// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerInfo
struct UPlayerRankEmblem_C_SetBannerInfo_Params
{
	struct FPlayerBannerInfo                           Banner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerSurroundLevel
struct UPlayerRankEmblem_C_SetBannerSurroundLevel_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerOwner
struct UPlayerRankEmblem_C_SetBannerOwner_Params
{
	class AFortPlayerController*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRankEmblem.PlayerRankEmblem_C.Construct
struct UPlayerRankEmblem_C_Construct_Params
{
};

// Function PlayerRankEmblem.PlayerRankEmblem_C.PreConstruct
struct UPlayerRankEmblem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem
struct UPlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
