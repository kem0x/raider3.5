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

// Function HelpListItem.HelpListItem_C.SetupExpansion
struct UHelpListItem_C_SetupExpansion_Params
{
	bool                                               Expanded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HelpListItem.HelpListItem_C.InitializeItem
struct UHelpListItem_C_InitializeItem_Params
{
};

// Function HelpListItem.HelpListItem_C.OnListItemObjectSet
struct UHelpListItem_C_OnListItemObjectSet_Params
{
	class UObject**                                    ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HelpListItem.HelpListItem_C.BP_OnItemExpansionChanged
struct UHelpListItem_C_BP_OnItemExpansionChanged_Params
{
	bool*                                              bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
