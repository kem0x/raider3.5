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

// Function SplashScreenWidget.SplashScreenWidget_C.OnActivated
struct USplashScreenWidget_C_OnActivated_Params
{
};

// Function SplashScreenWidget.SplashScreenWidget_C.Construct
struct USplashScreenWidget_C_Construct_Params
{
};

// Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged
struct USplashScreenWidget_C_OnInputMethodChanged_Params
{
	bool                                               UsingGampad;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
struct USplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
