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

// Function TabAccount.TabAccount_C.CenterAppropriateWidget
struct UTabAccount_C_CenterAppropriateWidget_Params
{
};

// Function TabAccount.TabAccount_C.PrivacySettingsFromSelection
struct UTabAccount_C_PrivacySettingsFromSelection_Params
{
	int                                                A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMcpPrivacySettings                         McpPrivacySettings;                                       // (Parm, OutParm)
};

// Function TabAccount.TabAccount_C.PrivacySettingsToSelection
struct UTabAccount_C_PrivacySettingsToSelection_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.OnStWContentUninstalled
struct UTabAccount_C_OnStWContentUninstalled_Params
{
};

// Function TabAccount.TabAccount_C.GetTencentId
struct UTabAccount_C_GetTencentId_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TabAccount.TabAccount_C.InitializeWebsiteConfiguration
struct UTabAccount_C_InitializeWebsiteConfiguration_Params
{
};

// Function TabAccount.TabAccount_C.Build Player Id Analytic Attribute
struct UTabAccount_C_Build_Player_Id_Analytic_Attribute_Params
{
	struct FFortAnalyticsEventAttribute                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TabAccount.TabAccount_C.Build Player Name Analytic Attribute
struct UTabAccount_C_Build_Player_Name_Analytic_Attribute_Params
{
	struct FFortAnalyticsEventAttribute                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TabAccount.TabAccount_C.Fire Enter Live Stream Analytic
struct UTabAccount_C_Fire_Enter_Live_Stream_Analytic_Params
{
};

// Function TabAccount.TabAccount_C.Initialize Data
struct UTabAccount_C_Initialize_Data_Params
{
};

// Function TabAccount.TabAccount_C.Update Data
struct UTabAccount_C_Update_Data_Params
{
};

// Function TabAccount.TabAccount_C.DialogResult_38AE683A4765B23E84C880991D01C356
struct UTabAccount_C_DialogResult_38AE683A4765B23E84C880991D01C356_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.Construct
struct UTabAccount_C_Construct_Params
{
};

// Function TabAccount.TabAccount_C.BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
struct UTabAccount_C_BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature
struct UTabAccount_C_BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature_Params
{
	struct FText                                       NewTooltipText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TabAccount.TabAccount_C.CenterOnTab
struct UTabAccount_C_CenterOnTab_Params
{
};

// Function TabAccount.TabAccount_C.BndEvt__CopyCustomerIDButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
struct UTabAccount_C_BndEvt__CopyCustomerIDButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__CopyEpicAccountIDButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature
struct UTabAccount_C_BndEvt__CopyEpicAccountIDButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature
struct UTabAccount_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__Button_CustomerService_K2Node_ComponentBoundEvent_108_CommonButtonClicked__DelegateSignature
struct UTabAccount_C_BndEvt__Button_CustomerService_K2Node_ComponentBoundEvent_108_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__Button_Logout_K2Node_ComponentBoundEvent_164_CommonButtonClicked__DelegateSignature
struct UTabAccount_C_BndEvt__Button_Logout_K2Node_ComponentBoundEvent_164_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__UninstallStWButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
struct UTabAccount_C_BndEvt__UninstallStWButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.UpdateOptionsTab
struct UTabAccount_C_UpdateOptionsTab_Params
{
};

// Function TabAccount.TabAccount_C.SetRefundRequestText
struct UTabAccount_C_SetRefundRequestText_Params
{
	int*                                               RefundsRemaining;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TotalRefunds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DaysToRefund;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__Button_RefundRequest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UTabAccount_C_BndEvt__Button_RefundRequest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__LeaderboardPrivacy_K2Node_ComponentBoundEvent_8_Selection Changed__DelegateSignature
struct UTabAccount_C_BndEvt__LeaderboardPrivacy_K2Node_ComponentBoundEvent_8_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.OnReadPrivacySettings
struct UTabAccount_C_OnReadPrivacySettings_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMcpPrivacySettings                         Settings;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TabAccount.TabAccount_C.OnUpdatePrivacySettings
struct UTabAccount_C_OnUpdatePrivacySettings_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__ReceiveGiftToggle_K2Node_ComponentBoundEvent_0_Selection Changed__DelegateSignature
struct UTabAccount_C_BndEvt__ReceiveGiftToggle_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.ExecuteUbergraph_TabAccount
struct UTabAccount_C_ExecuteUbergraph_TabAccount_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
