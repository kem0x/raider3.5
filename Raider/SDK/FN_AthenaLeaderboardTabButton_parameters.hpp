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

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText
struct UAthenaLeaderboardTabButton_C_ShowText_Params
{
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon
struct UAthenaLeaderboardTabButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text
struct UAthenaLeaderboardTabButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct
struct UAthenaLeaderboardTabButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged
struct UAthenaLeaderboardTabButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo
struct UAthenaLeaderboardTabButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnSelected
struct UAthenaLeaderboardTabButton_C_BP_OnSelected_Params
{
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnDeselected
struct UAthenaLeaderboardTabButton_C_BP_OnDeselected_Params
{
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct
struct UAthenaLeaderboardTabButton_C_Construct_Params
{
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnHovered
struct UAthenaLeaderboardTabButton_C_BP_OnHovered_Params
{
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnUnhovered
struct UAthenaLeaderboardTabButton_C_BP_OnUnhovered_Params
{
};

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton
struct UAthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
