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

// Function ReticleStatusWidget.ReticleStatusWidget_C.Construct
struct UReticleStatusWidget_C_Construct_Params
{
};

// Function ReticleStatusWidget.ReticleStatusWidget_C.OnUnableToPerformAction
struct UReticleStatusWidget_C_OnUnableToPerformAction_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       FailureText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ReticleStatusWidget.ReticleStatusWidget_C.ExecuteUbergraph_ReticleStatusWidget
struct UReticleStatusWidget_C_ExecuteUbergraph_ReticleStatusWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
