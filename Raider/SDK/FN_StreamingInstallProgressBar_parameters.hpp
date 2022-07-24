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

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.RefreshTick
struct UStreamingInstallProgressBar_C_RefreshTick_Params
{
};

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ToggleTimer
struct UStreamingInstallProgressBar_C_ToggleTimer_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Construct
struct UStreamingInstallProgressBar_C_Construct_Params
{
};

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Destruct
struct UStreamingInstallProgressBar_C_Destruct_Params
{
};

// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ExecuteUbergraph_StreamingInstallProgressBar
struct UStreamingInstallProgressBar_C_ExecuteUbergraph_StreamingInstallProgressBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
