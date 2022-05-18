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

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.CancelRename
struct UAthenaReplayBrowserRenameDialog_C_CancelRename_Params
{
};

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.TapToClose
struct UAthenaReplayBrowserRenameDialog_C_TapToClose_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.PreConstruct
struct UAthenaReplayBrowserRenameDialog_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.OnActivated
struct UAthenaReplayBrowserRenameDialog_C_OnActivated_Params
{
};

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.ExecuteUbergraph_AthenaReplayBrowserRenameDialog
struct UAthenaReplayBrowserRenameDialog_C_ExecuteUbergraph_AthenaReplayBrowserRenameDialog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.OnCancelRename__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_OnCancelRename__DelegateSignature_Params
{
};

// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.OnConfirmRename__DelegateSignature
struct UAthenaReplayBrowserRenameDialog_C_OnConfirmRename__DelegateSignature_Params
{
	class UAthenaReplayBrowserRowProxyInstance*        BrowserRowProxy;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
