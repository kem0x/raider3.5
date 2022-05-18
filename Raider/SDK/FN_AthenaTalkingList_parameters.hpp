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

// Function AthenaTalkingList.AthenaTalkingList_C.TalkingPlayersChanged
struct UAthenaTalkingList_C_TalkingPlayersChanged_Params
{
};

// Function AthenaTalkingList.AthenaTalkingList_C.Construct
struct UAthenaTalkingList_C_Construct_Params
{
};

// Function AthenaTalkingList.AthenaTalkingList_C.PreConstruct
struct UAthenaTalkingList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTalkingList.AthenaTalkingList_C.ExecuteUbergraph_AthenaTalkingList
struct UAthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
