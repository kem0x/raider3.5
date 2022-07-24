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

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnEndOfMovieReached
struct UHordeTierResultsWidget_C_OnEndOfMovieReached_Params
{
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.ChooseMediaToUse
struct UHordeTierResultsWidget_C_ChooseMediaToUse_Params
{
	class UMediaSource*                                MediaToUse;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.Initialize
struct UHordeTierResultsWidget_C_Initialize_Params
{
	EFortCompletionResult                              Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.InitializeMovie
struct UHordeTierResultsWidget_C_InitializeMovie_Params
{
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.Construct
struct UHordeTierResultsWidget_C_Construct_Params
{
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.Destruct
struct UHordeTierResultsWidget_C_Destruct_Params
{
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.ExecuteUbergraph_HordeTierResultsWidget
struct UHordeTierResultsWidget_C_ExecuteUbergraph_HordeTierResultsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnTierResultsWidgetComplete__DelegateSignature
struct UHordeTierResultsWidget_C_OnTierResultsWidgetComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
