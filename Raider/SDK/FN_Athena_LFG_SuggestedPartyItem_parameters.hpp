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

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.OnFocusReceived
struct UAthena_LFG_SuggestedPartyItem_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.OnFocusLost
struct UAthena_LFG_SuggestedPartyItem_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.PreConstruct
struct UAthena_LFG_SuggestedPartyItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.UpdatePartyItemSelection
struct UAthena_LFG_SuggestedPartyItem_C_UpdatePartyItemSelection_Params
{
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.ExecuteUbergraph_Athena_LFG_SuggestedPartyItem
struct UAthena_LFG_SuggestedPartyItem_C_ExecuteUbergraph_Athena_LFG_SuggestedPartyItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_LFG_SuggestedPartyItem.Athena_LFG_SuggestedPartyItem_C.PartyFocused__DelegateSignature
struct UAthena_LFG_SuggestedPartyItem_C_PartyFocused__DelegateSignature_Params
{
	class UAthena_LFG_SuggestedPartyItem_C*            FocusedPartyItem;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
