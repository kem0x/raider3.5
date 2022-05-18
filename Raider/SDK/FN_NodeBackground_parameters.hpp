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

// Function NodeBackground.NodeBackground_C.SetBackgroundColor
struct UNodeBackground_C_SetBackgroundColor_Params
{
};

// Function NodeBackground.NodeBackground_C.PreConstruct
struct UNodeBackground_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NodeBackground.NodeBackground_C.Construct
struct UNodeBackground_C_Construct_Params
{
};

// Function NodeBackground.NodeBackground_C.ExecuteUbergraph_NodeBackground
struct UNodeBackground_C_ExecuteUbergraph_NodeBackground_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
