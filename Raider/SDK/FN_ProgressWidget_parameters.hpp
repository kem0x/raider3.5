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

// Function ProgressWidget.ProgressWidget_C.SetIcon
struct UProgressWidget_C_SetIcon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ProgressWidget.ProgressWidget_C.SetDescription
struct UProgressWidget_C_SetDescription_Params
{
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ProgressWidget.ProgressWidget_C.SetTitle
struct UProgressWidget_C_SetTitle_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
