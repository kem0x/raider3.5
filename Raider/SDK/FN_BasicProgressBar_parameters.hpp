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

// Function BasicProgressBar.BasicProgressBar_C.SetSecondaryBar
struct UBasicProgressBar_C_SetSecondaryBar_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicProgressBar.BasicProgressBar_C.DecrementPrimaryByPercentage
struct UBasicProgressBar_C_DecrementPrimaryByPercentage_Params
{
	float                                              NewHealthPercentage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicProgressBar.BasicProgressBar_C.SetPrimaryBarValue
struct UBasicProgressBar_C_SetPrimaryBarValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicProgressBar.BasicProgressBar_C.UpdateHealthBar
struct UBasicProgressBar_C_UpdateHealthBar_Params
{
};

// Function BasicProgressBar.BasicProgressBar_C.Toggle Timer for Secondary Bar
struct UBasicProgressBar_C_Toggle_Timer_for_Secondary_Bar_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimerDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LoopTimer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicProgressBar.BasicProgressBar_C.Construct
struct UBasicProgressBar_C_Construct_Params
{
};

// Function BasicProgressBar.BasicProgressBar_C.ExecuteUbergraph_BasicProgressBar
struct UBasicProgressBar_C_ExecuteUbergraph_BasicProgressBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
