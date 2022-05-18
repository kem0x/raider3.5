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

// Function PartyFinder_LFG.PartyFinder_LFG_C.HandleLFGFeatureStatus
struct UPartyFinder_LFG_C_HandleLFGFeatureStatus_Params
{
};

// Function PartyFinder_LFG.PartyFinder_LFG_C.OnFocusReceived
struct UPartyFinder_LFG_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PartyFinder_LFG.PartyFinder_LFG_C.OnLFGChanged
struct UPartyFinder_LFG_C_OnLFGChanged_Params
{
	bool                                               IsLFG;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartyFinder_LFG.PartyFinder_LFG_C.BindContextEvents
struct UPartyFinder_LFG_C_BindContextEvents_Params
{
};

// Function PartyFinder_LFG.PartyFinder_LFG_C.Construct
struct UPartyFinder_LFG_C_Construct_Params
{
};

// Function PartyFinder_LFG.PartyFinder_LFG_C.BndEvt__LFGButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
struct UPartyFinder_LFG_C_BndEvt__LFGButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PartyFinder_LFG.PartyFinder_LFG_C.LFGSoftReminder
struct UPartyFinder_LFG_C_LFGSoftReminder_Params
{
};

// Function PartyFinder_LFG.PartyFinder_LFG_C.ExecuteUbergraph_PartyFinder_LFG
struct UPartyFinder_LFG_C_ExecuteUbergraph_PartyFinder_LFG_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
