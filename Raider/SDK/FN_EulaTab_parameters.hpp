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

// Function EulaTab.EulaTab_C.Activate Scroll Box
struct UEulaTab_C_Activate_Scroll_Box_Params
{
};

// Function EulaTab.EulaTab_C.Construct
struct UEulaTab_C_Construct_Params
{
};

// Function EulaTab.EulaTab_C.OnEulaDownloadComplete
struct UEulaTab_C_OnEulaDownloadComplete_Params
{
	bool                                               bSuccessful;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       EULAText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EulaTab.EulaTab_C.ExecuteUbergraph_EulaTab
struct UEulaTab_C_ExecuteUbergraph_EulaTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
