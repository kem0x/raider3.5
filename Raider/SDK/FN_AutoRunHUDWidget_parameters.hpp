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

// Function AutoRunHUDWidget.AutoRunHUDWidget_C.Destruct
struct UAutoRunHUDWidget_C_Destruct_Params
{
};

// Function AutoRunHUDWidget.AutoRunHUDWidget_C.Construct
struct UAutoRunHUDWidget_C_Construct_Params
{
};

// Function AutoRunHUDWidget.AutoRunHUDWidget_C.OnAutoRunEnabled_Bind
struct UAutoRunHUDWidget_C_OnAutoRunEnabled_Bind_Params
{
	bool                                               bAutoRunEnabled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRunHUDWidget.AutoRunHUDWidget_C.ExecuteUbergraph_AutoRunHUDWidget
struct UAutoRunHUDWidget_C_ExecuteUbergraph_AutoRunHUDWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
