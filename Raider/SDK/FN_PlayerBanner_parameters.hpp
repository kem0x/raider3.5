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

// Function PlayerBanner.PlayerBanner_C.UnbindDelegates
struct UPlayerBanner_C_UnbindDelegates_Params
{
};

// Function PlayerBanner.PlayerBanner_C.SetupSurround
struct UPlayerBanner_C_SetupSurround_Params
{
};

// Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColorFromProfile
struct UPlayerBanner_C_SetBannerIconAndColorFromProfile_Params
{
};

// Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColor
struct UPlayerBanner_C_SetBannerIconAndColor_Params
{
	struct FName                                       IconId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.ToggleBannerMask
struct UPlayerBanner_C_ToggleBannerMask_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.RefreshSurround
struct UPlayerBanner_C_RefreshSurround_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.OnSurroundIconLoaded
struct UPlayerBanner_C_OnSurroundIconLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.EnableSurround
struct UPlayerBanner_C_EnableSurround_Params
{
};

// Function PlayerBanner.PlayerBanner_C.ClearBannerState
struct UPlayerBanner_C_ClearBannerState_Params
{
};

// Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded
struct UPlayerBanner_C_OnBannerIconLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.GetBannerMID
struct UPlayerBanner_C_GetBannerMID_Params
{
	class UMaterialInstanceDynamic*                    BannerMID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerOwner
struct UPlayerBanner_C_SetBannerOwner_Params
{
	struct FUniqueNetIdRepl                            OwnerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerColorId
struct UPlayerBanner_C_SetBannerColorId_Params
{
	struct FName                                       InBannerColorId;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerIconId
struct UPlayerBanner_C_SetBannerIconId_Params
{
	struct FName                                       InBannerIconId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.SetBannerImage
struct UPlayerBanner_C_SetBannerImage_Params
{
	struct FFortHomeBaseInfo                           Image_info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged
struct UPlayerBanner_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerBanner.PlayerBanner_C.Account Info Changed
struct UPlayerBanner_C_Account_Info_Changed_Params
{
	struct FFortPublicAccountInfo                      NewInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerBanner.PlayerBanner_C.Destruct
struct UPlayerBanner_C_Destruct_Params
{
};

// Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner
struct UPlayerBanner_C_ExecuteUbergraph_PlayerBanner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
