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

// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
struct ULoginScreen_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.Construct
struct ULoginScreen_C_Construct_Params
{
};

// Function LoginScreen.LoginScreen_C.OnEnterState
struct ULoginScreen_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
struct ULoginScreen_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
struct ULoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowBackBar
struct ULoginScreen_C_ShowBackBar_Params
{
};

// Function LoginScreen.LoginScreen_C.HideTopBarOptions
struct ULoginScreen_C_HideTopBarOptions_Params
{
};

// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
struct ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
