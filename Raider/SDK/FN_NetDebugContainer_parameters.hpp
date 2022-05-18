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

// Function NetDebugContainer.NetDebugContainer_C.OnVisibilitySetEvent
struct UNetDebugContainer_C_OnVisibilitySetEvent_Params
{
	ESlateVisibility*                                  InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NetDebugContainer.NetDebugContainer_C.ExecuteUbergraph_NetDebugContainer
struct UNetDebugContainer_C_ExecuteUbergraph_NetDebugContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
