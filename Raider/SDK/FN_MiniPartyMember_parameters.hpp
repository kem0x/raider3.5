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

// Function MiniPartyMember.MiniPartyMember_C.HandleMouseHoverVisualState
struct UMiniPartyMember_C_HandleMouseHoverVisualState_Params
{
	bool                                               Hover;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.OpenPartyFinder
struct UMiniPartyMember_C_OpenPartyFinder_Params
{
};

// Function MiniPartyMember.MiniPartyMember_C.GetLeaderVisibility
struct UMiniPartyMember_C_GetLeaderVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.UpdateMemberInfo
struct UMiniPartyMember_C_UpdateMemberInfo_Params
{
	struct FFortTeamMemberInfo                         NewMemberInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MiniPartyMember.MiniPartyMember_C.ShowOpen
struct UMiniPartyMember_C_ShowOpen_Params
{
};

// Function MiniPartyMember.MiniPartyMember_C.ShowConnected
struct UMiniPartyMember_C_ShowConnected_Params
{
};

// Function MiniPartyMember.MiniPartyMember_C.ShowConnecting
struct UMiniPartyMember_C_ShowConnecting_Params
{
};

// Function MiniPartyMember.MiniPartyMember_C.Destruct
struct UMiniPartyMember_C_Destruct_Params
{
};

// Function MiniPartyMember.MiniPartyMember_C.OnPlayerInfoChanged
struct UMiniPartyMember_C_OnPlayerInfoChanged_Params
{
	struct FFortTeamMemberInfo*                        NewInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
struct UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
struct UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
struct UMiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.PreConstruct
struct UMiniPartyMember_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniPartyMember.MiniPartyMember_C.ExecuteUbergraph_MiniPartyMember
struct UMiniPartyMember_C_ExecuteUbergraph_MiniPartyMember_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
