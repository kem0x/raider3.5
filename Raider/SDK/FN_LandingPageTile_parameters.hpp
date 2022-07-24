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

// Function LandingPageTile.LandingPageTile_C.PlayIntroOrOutro
struct ULandingPageTile_C_PlayIntroOrOutro_Params
{
	bool                                               PlayIntro;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LandingPageTile.LandingPageTile_C.UpdateTileAvailability
struct ULandingPageTile_C_UpdateTileAvailability_Params
{
	bool                                               Available;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LandingPageTile.LandingPageTile_C.BP_OnHovered
struct ULandingPageTile_C_BP_OnHovered_Params
{
};

// Function LandingPageTile.LandingPageTile_C.BP_OnUnhovered
struct ULandingPageTile_C_BP_OnUnhovered_Params
{
};

// Function LandingPageTile.LandingPageTile_C.Construct
struct ULandingPageTile_C_Construct_Params
{
};

// Function LandingPageTile.LandingPageTile_C.PreConstruct
struct ULandingPageTile_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LandingPageTile.LandingPageTile_C.ExecuteUbergraph_LandingPageTile
struct ULandingPageTile_C_ExecuteUbergraph_LandingPageTile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
