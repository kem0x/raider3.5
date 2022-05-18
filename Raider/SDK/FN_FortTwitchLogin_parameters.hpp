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

// Function FortTwitchLogin.FortTwitchLogin_C.Build Player Id Analytic Attribute
struct UFortTwitchLogin_C_Build_Player_Id_Analytic_Attribute_Params
{
	struct FFortAnalyticsEventAttribute                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortTwitchLogin.FortTwitchLogin_C.Build Twitch Name Analytic Attribute
struct UFortTwitchLogin_C_Build_Twitch_Name_Analytic_Attribute_Params
{
	struct FFortAnalyticsEventAttribute                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortTwitchLogin.FortTwitchLogin_C.Build Player Name Analytic Attribute
struct UFortTwitchLogin_C_Build_Player_Name_Analytic_Attribute_Params
{
	struct FFortAnalyticsEventAttribute                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FortTwitchLogin.FortTwitchLogin_C.Fire Logged In Analytic
struct UFortTwitchLogin_C_Fire_Logged_In_Analytic_Params
{
};

// Function FortTwitchLogin.FortTwitchLogin_C.Fire SignIn Analytic
struct UFortTwitchLogin_C_Fire_SignIn_Analytic_Params
{
};

// Function FortTwitchLogin.FortTwitchLogin_C.CenterActiveAuthButton
struct UFortTwitchLogin_C_CenterActiveAuthButton_Params
{
};

// Function FortTwitchLogin.FortTwitchLogin_C.CenterOnWidget
struct UFortTwitchLogin_C_CenterOnWidget_Params
{
};

// Function FortTwitchLogin.FortTwitchLogin_C.DialogResult_5994C6BA48DC4D282A16D7BA54384F79
struct UFortTwitchLogin_C_DialogResult_5994C6BA48DC4D282A16D7BA54384F79_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortTwitchLogin.FortTwitchLogin_C.Initialize Data
struct UFortTwitchLogin_C_Initialize_Data_Params
{
};

// Function FortTwitchLogin.FortTwitchLogin_C.OnLoginStatusChanged
struct UFortTwitchLogin_C_OnLoginStatusChanged_Params
{
	bool*                                              bLoggedIn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    AccountName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function FortTwitchLogin.FortTwitchLogin_C.OnLoginFlowModalCreated
struct UFortTwitchLogin_C_OnLoginFlowModalCreated_Params
{
	class UFortTwitchLoginModalWidget**                Modal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortTwitchLogin.FortTwitchLogin_C.OnCancelButtonClicked
struct UFortTwitchLogin_C_OnCancelButtonClicked_Params
{
};

// Function FortTwitchLogin.FortTwitchLogin_C.OnLoginFlowModalDismissed
struct UFortTwitchLogin_C_OnLoginFlowModalDismissed_Params
{
	class UFortTwitchLoginModalWidget**                Modal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_209_CommonButtonClicked__DelegateSignature
struct UFortTwitchLogin_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_209_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignOutButton_K2Node_ComponentBoundEvent_229_CommonButtonClicked__DelegateSignature
struct UFortTwitchLogin_C_BndEvt__SignOutButton_K2Node_ComponentBoundEvent_229_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature
struct UFortTwitchLogin_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignInButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
struct UFortTwitchLogin_C_BndEvt__SignInButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignOutButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
struct UFortTwitchLogin_C_BndEvt__SignOutButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortTwitchLogin.FortTwitchLogin_C.BndEvt__SignOutButton_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature
struct UFortTwitchLogin_C_BndEvt__SignOutButton_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortTwitchLogin.FortTwitchLogin_C.OnShowLoginError
struct UFortTwitchLogin_C_OnShowLoginError_Params
{
	struct FText*                                      ErrorTitle;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      ErrorMessage;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function FortTwitchLogin.FortTwitchLogin_C.ExecuteUbergraph_FortTwitchLogin
struct UFortTwitchLogin_C_ExecuteUbergraph_FortTwitchLogin_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortTwitchLogin.FortTwitchLogin_C.OnRequestToolTipChange__DelegateSignature
struct UFortTwitchLogin_C_OnRequestToolTipChange__DelegateSignature_Params
{
	struct FText                                       NewTooltipText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
