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

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnHandleAction
struct UHordeTierResultsWidget_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (Parm, OutParm)
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

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

// Function HordeTierResultsWidget.HordeTierResultsWidget_C.OnTierResultsWidgetComplete__DelegateSignature
struct UHordeTierResultsWidget_C_OnTierResultsWidgetComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
