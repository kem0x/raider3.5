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

// Function HelpListItem.HelpListItem_C.SetupExpansion
struct UHelpListItem_C_SetupExpansion_Params
{
	bool                                               Expanded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HelpListItem.HelpListItem_C.InitializeItem
struct UHelpListItem_C_InitializeItem_Params
{
};

// Function HelpListItem.HelpListItem_C.ExpansionChanged
struct UHelpListItem_C_ExpansionChanged_Params
{
	bool*                                              bExpanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HelpListItem.HelpListItem_C.Construct
struct UHelpListItem_C_Construct_Params
{
};

// Function HelpListItem.HelpListItem_C.OnHelpItemSet
struct UHelpListItem_C_OnHelpItemSet_Params
{
};

// Function HelpListItem.HelpListItem_C.ExecuteUbergraph_HelpListItem
struct UHelpListItem_C_ExecuteUbergraph_HelpListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HelpListItem.HelpListItem_C.InviteJoinChanged__DelegateSignature
struct UHelpListItem_C_InviteJoinChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
