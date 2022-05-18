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

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.Get Badge And Count For Player
struct UBadgesEarnedPanelContent_C_Get_Badge_And_Count_For_Player_Params
{
	class AFortPlayerController*                       InFortPC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEarnedBadgeEntry                           EarnedBadgeEntry;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerController*                       FortPC;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UFortBadgeItemDefinition*                    Badge;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandleMissionsUpdated
struct UBadgesEarnedPanelContent_C_HandleMissionsUpdated_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.UpdatePotentialBadges
struct UBadgesEarnedPanelContent_C_UpdatePotentialBadges_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandlePotentialBadgesChanged
struct UBadgesEarnedPanelContent_C_HandlePotentialBadgesChanged_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.UpdateBadgeWidgets
struct UBadgesEarnedPanelContent_C_UpdateBadgeWidgets_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandleEarnedBadgesChanged
struct UBadgesEarnedPanelContent_C_HandleEarnedBadgesChanged_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.Construct
struct UBadgesEarnedPanelContent_C_Construct_Params
{
};

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.ExecuteUbergraph_BadgesEarnedPanelContent
struct UBadgesEarnedPanelContent_C_ExecuteUbergraph_BadgesEarnedPanelContent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
