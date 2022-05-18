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

// Function WebLogin.WebLogin_C.DisplayWidget
struct UWebLogin_C_DisplayWidget_Params
{
	class UWidget**                                    WebWidget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WebLogin.WebLogin_C.DismissWidget
struct UWebLogin_C_DismissWidget_Params
{
};

// Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin
struct UWebLogin_C_ExecuteUbergraph_WebLogin_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
