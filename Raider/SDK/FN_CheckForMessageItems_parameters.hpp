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

// Function CheckForMessageItems.CheckForMessageItems_C.Closed
struct ACheckForMessageItems_C_Closed_Params
{
	class UCommonActivatablePanel*                     Closed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CheckForMessageItems.CheckForMessageItems_C.ShowMessage
struct ACheckForMessageItems_C_ShowMessage_Params
{
};

// Function CheckForMessageItems.CheckForMessageItems_C.UserConstructionScript
struct ACheckForMessageItems_C_UserConstructionScript_Params
{
};

// Function CheckForMessageItems.CheckForMessageItems_C.Execute
struct ACheckForMessageItems_C_Execute_Params
{
	struct FFortScriptedActionParams*                  Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CheckForMessageItems.CheckForMessageItems_C.ExecuteUbergraph_CheckForMessageItems
struct ACheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
