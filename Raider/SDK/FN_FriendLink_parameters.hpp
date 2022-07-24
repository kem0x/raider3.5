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

// Function FriendLink.FriendLink_C.GetStartingShareText
struct UFriendLink_C_GetStartingShareText_Params
{
	struct FText                                       Button_Text;                                              // (Parm, OutParm)
};

// Function FriendLink.FriendLink_C.OnCopiedToClipboard
struct UFriendLink_C_OnCopiedToClipboard_Params
{
};

// Function FriendLink.FriendLink_C.OnShareButtonTypeSet
struct UFriendLink_C_OnShareButtonTypeSet_Params
{
	EShareButtonType*                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendLink.FriendLink_C.PreConstruct
struct UFriendLink_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendLink.FriendLink_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature
struct UFriendLink_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_826_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FriendLink.FriendLink_C.OnActivated
struct UFriendLink_C_OnActivated_Params
{
};

// Function FriendLink.FriendLink_C.ExecuteUbergraph_FriendLink
struct UFriendLink_C_ExecuteUbergraph_FriendLink_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
