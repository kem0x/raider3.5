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

// Function ConfirmationWindow.ConfirmationWindow_C.TapToClose
struct UConfirmationWindow_C_TapToClose_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.CenterFirstButton
struct UConfirmationWindow_C_CenterFirstButton_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.CloseConfirmation
struct UConfirmationWindow_C_CloseConfirmation_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupAdditionalContent
struct UConfirmationWindow_C_SetupAdditionalContent_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupLeftAdditionalContent
struct UConfirmationWindow_C_SetupLeftAdditionalContent_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
struct UConfirmationWindow_C_SetupNonInteractiveContent_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.ClickButtonIfBot
struct UConfirmationWindow_C_ClickButtonIfBot_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnWaitForExternalLatentAction
struct UConfirmationWindow_C_OnWaitForExternalLatentAction_Params
{
	struct FFortDialogExternalLatentActionHandle       LatentActionHandle;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.StopWaitingForLatentAction
struct UConfirmationWindow_C_StopWaitingForLatentAction_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.GetLatentActionWaitHandle
struct UConfirmationWindow_C_GetLatentActionWaitHandle_Params
{
	struct FFortDialogExternalLatentActionHandle       LatentActionHandle;                                       // (Parm, OutParm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.Set Hover Description
struct UConfirmationWindow_C_Set_Hover_Description_Params
{
	class UCommonButton*                               Button_to_Hover;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupLeft
struct UConfirmationWindow_C_SetupLeft_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupTitleAndDescription
struct UConfirmationWindow_C_SetupTitleAndDescription_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupMainIcon
struct UConfirmationWindow_C_SetupMainIcon_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.Deinitialize
struct UConfirmationWindow_C_Deinitialize_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.KillCurrentConfirmation
struct UConfirmationWindow_C_KillCurrentConfirmation_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.GetResultName
struct UConfirmationWindow_C_GetResultName_Params
{
	class UIconTextButton_C*                           ConfirmButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ResultName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction
struct UConfirmationWindow_C_GetInputAction_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseInputAction;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.AddSingleConfirmButton
struct UConfirmationWindow_C_AddSingleConfirmButton_Params
{
	struct FConfirmationDialogAction                   ConfirmDialogAction;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UseInputAction;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.HasAnyConfirmAction
struct UConfirmationWindow_C_HasAnyConfirmAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.ConfirmActionClicked
struct UConfirmationWindow_C_ConfirmActionClicked_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.IsSimpleConfirmAction
struct UConfirmationWindow_C_IsSimpleConfirmAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.DeclineActionClicked
struct UConfirmationWindow_C_DeclineActionClicked_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.AddDeclineButton
struct UConfirmationWindow_C_AddDeclineButton_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.AddConfirmButtons
struct UConfirmationWindow_C_AddConfirmButtons_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.Initialize
struct UConfirmationWindow_C_Initialize_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetDescription
struct UConfirmationWindow_C_SetDescription_Params
{
	struct FFortDialogDescription_NUI                  NewDescription;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.Construct
struct UConfirmationWindow_C_Construct_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.HandleIntroEnded
struct UConfirmationWindow_C_HandleIntroEnded_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.HandleOutroEnded
struct UConfirmationWindow_C_HandleOutroEnded_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginIntro
struct UConfirmationWindow_C_OnBeginIntro_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
struct UConfirmationWindow_C_OnBeginOutro_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct
struct UConfirmationWindow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnActivated
struct UConfirmationWindow_C_OnActivated_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
struct UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
