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

// Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.OnAccountInfoChanged
struct UItemReceivedAccountWidget_C_OnAccountInfoChanged_Params
{
	struct FFortPublicAccountInfo*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.ExecuteUbergraph_ItemReceivedAccountWidget
struct UItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
