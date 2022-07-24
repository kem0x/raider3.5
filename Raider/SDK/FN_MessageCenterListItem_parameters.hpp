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

// Function MessageCenterListItem.MessageCenterListItem_C.GetListItemObject
struct UMessageCenterListItem_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.ShowText
struct UMessageCenterListItem_C_ShowText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.SetMessage
struct UMessageCenterListItem_C_SetMessage_Params
{
	class UFortUINotification*                         MESSAGE;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.BP_OnEntryReleased
struct UMessageCenterListItem_C_BP_OnEntryReleased_Params
{
};

// Function MessageCenterListItem.MessageCenterListItem_C.BP_OnItemExpansionChanged
struct UMessageCenterListItem_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.OnListItemObjectSet
struct UMessageCenterListItem_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.Construct
struct UMessageCenterListItem_C_Construct_Params
{
};

// Function MessageCenterListItem.MessageCenterListItem_C.BP_OnItemSelectionChanged
struct UMessageCenterListItem_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem
struct UMessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
