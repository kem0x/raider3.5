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

// Function LargeStatWidget.LargeStatWidget_C.SetStatEntryNumber
struct ULargeStatWidget_C_SetStatEntryNumber_Params
{
	int                                                StatEntryNumber;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LargeStatWidget.LargeStatWidget_C.OnStatChanged
struct ULargeStatWidget_C_OnStatChanged_Params
{
};

// Function LargeStatWidget.LargeStatWidget_C.ExecuteUbergraph_LargeStatWidget
struct ULargeStatWidget_C_ExecuteUbergraph_LargeStatWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
