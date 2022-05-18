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

// Function AthenaLobby.AthenaLobby_C.OnKeyUp
struct UAthenaLobby_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaLobby.AthenaLobby_C.OnKeyDown
struct UAthenaLobby_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaLobby.AthenaLobby_C.OnPartyFinderClosed
struct UAthenaLobby_C_OnPartyFinderClosed_Params
{
	class UCommonActivatablePanel*                     ActivatablePanel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.StartAthenaLobbyMusic
struct UAthenaLobby_C_StartAthenaLobbyMusic_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnInputCustomMatchmaking
struct UAthenaLobby_C_OnInputCustomMatchmaking_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.HighlightsCountChanged
struct UAthenaLobby_C_HighlightsCountChanged_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.ShowModalNews
struct UAthenaLobby_C_ShowModalNews_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnInputNews
struct UAthenaLobby_C_OnInputNews_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnInputFillChangeGamepad
struct UAthenaLobby_C_OnInputFillChangeGamepad_Params
{
	bool                                               bCommited;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnInputPlaylistChangeGamepad
struct UAthenaLobby_C_OnInputPlaylistChangeGamepad_Params
{
	bool                                               bCommited;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.IsLocalPlayer
struct UAthenaLobby_C_IsLocalPlayer_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocalPlayer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnSelect
struct UAthenaLobby_C_OnSelect_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.CanNavigatePlayers
struct UAthenaLobby_C_CanNavigatePlayers_Params
{
	bool                                               bCanNavigatePlayers;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.SetHoveredPlayer
struct UAthenaLobby_C_SetHoveredPlayer_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.HoverNextPlayer
struct UAthenaLobby_C_HoverNextPlayer_Params
{
};

// Function AthenaLobby.AthenaLobby_C.HoverPreviousPlayer
struct UAthenaLobby_C_HoverPreviousPlayer_Params
{
};

// Function AthenaLobby.AthenaLobby_C.ShouldAddPlay
struct UAthenaLobby_C_ShouldAddPlay_Params
{
	bool                                               bShouldAdd;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.InitializeInput
struct UAthenaLobby_C_InitializeInput_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadUnhovered
struct UAthenaLobby_C_OnLobbyPlayerPadUnhovered_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadHovered
struct UAthenaLobby_C_OnLobbyPlayerPadHovered_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerGadgetsClicked
struct UAthenaLobby_C_OnLobbyPlayerGadgetsClicked_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnLobbyEmptyPlayerClicked
struct UAthenaLobby_C_OnLobbyEmptyPlayerClicked_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnLobbyDisconnected
struct UAthenaLobby_C_OnLobbyDisconnected_Params
{
};

// Function AthenaLobby.AthenaLobby_C.RefreshLaunch
struct UAthenaLobby_C_RefreshLaunch_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnMouseButtonDown
struct UAthenaLobby_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaLobby.AthenaLobby_C.ShouldAddScroll
struct UAthenaLobby_C_ShouldAddScroll_Params
{
	bool                                               bShouldAdd;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.ShouldAddCancel
struct UAthenaLobby_C_ShouldAddCancel_Params
{
	bool                                               bShouldAdd;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.RefreshInput
struct UAthenaLobby_C_RefreshInput_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnInputAbandon
struct UAthenaLobby_C_OnInputAbandon_Params
{
	bool                                               bCommited;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.InitializeContextEvents
struct UAthenaLobby_C_InitializeContextEvents_Params
{
	bool                                               Register;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.Focus
struct UAthenaLobby_C_Focus_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnInputCancel
struct UAthenaLobby_C_OnInputCancel_Params
{
	bool                                               bCommited;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.RefreshPlayerHeroes
struct UAthenaLobby_C_RefreshPlayerHeroes_Params
{
	int                                                UpdatedPlayerIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnTeamMemberStateChanged
struct UAthenaLobby_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaLobby.AthenaLobby_C.OnTeamMemberRemoved
struct UAthenaLobby_C_OnTeamMemberRemoved_Params
{
	int                                                EmptySlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnTeamMemberAdded
struct UAthenaLobby_C_OnTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaLobby.AthenaLobby_C.Refresh
struct UAthenaLobby_C_Refresh_Params
{
	int                                                UpdatedPlayerIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.Initialize
struct UAthenaLobby_C_Initialize_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE
struct UAthenaLobby_C_OnFailure_DA5E62624D068772EA890193344BA4AE_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE
struct UAthenaLobby_C_OnSuccess_DA5E62624D068772EA890193344BA4AE_Params
{
};

// Function AthenaLobby.AthenaLobby_C.DialogResult_156754AE468EF93DCA2009A412591BA7
struct UAthenaLobby_C_DialogResult_156754AE468EF93DCA2009A412591BA7_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnNavigationLeft
struct UAthenaLobby_C_OnNavigationLeft_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnNavigationRight
struct UAthenaLobby_C_OnNavigationRight_Params
{
};

// Function AthenaLobby.AthenaLobby_C.BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature
struct UAthenaLobby_C_BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnEndCursorOverPlayer
struct UAthenaLobby_C_OnEndCursorOverPlayer_Params
{
	int*                                               PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnPlayerClicked
struct UAthenaLobby_C_OnPlayerClicked_Params
{
	int*                                               PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnBeginCursorOverPlayer
struct UAthenaLobby_C_OnBeginCursorOverPlayer_Params
{
	int*                                               PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature
struct UAthenaLobby_C_BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature_Params
{
};

// Function AthenaLobby.AthenaLobby_C.BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
struct UAthenaLobby_C_BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
struct UAthenaLobby_C_BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.ShowAthenaStoreToast
struct UAthenaLobby_C_ShowAthenaStoreToast_Params
{
};

// Function AthenaLobby.AthenaLobby_C.NewsPanelClosed
struct UAthenaLobby_C_NewsPanelClosed_Params
{
	class UCommonActivatablePanel*                     Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.HeadlessReminderClosed
struct UAthenaLobby_C_HeadlessReminderClosed_Params
{
	class UCommonActivatablePanel*                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.ShouldShowHeadlessReminder
struct UAthenaLobby_C_ShouldShowHeadlessReminder_Params
{
	bool*                                              bShouldShow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
struct UAthenaLobby_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function AthenaLobby.AthenaLobby_C.Event Abandon
struct UAthenaLobby_C_Event_Abandon_Params
{
};

// Function AthenaLobby.AthenaLobby_C.Construct
struct UAthenaLobby_C_Construct_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnNavigationUp
struct UAthenaLobby_C_OnNavigationUp_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnActivated
struct UAthenaLobby_C_OnActivated_Params
{
};

// Function AthenaLobby.AthenaLobby_C.Gifting Complete
struct UAthenaLobby_C_Gifting_Complete_Params
{
};

// Function AthenaLobby.AthenaLobby_C.Check For Gifts
struct UAthenaLobby_C_Check_For_Gifts_Params
{
};

// Function AthenaLobby.AthenaLobby_C.Destruct
struct UAthenaLobby_C_Destruct_Params
{
};

// Function AthenaLobby.AthenaLobby_C.ShowDailyNews
struct UAthenaLobby_C_ShowDailyNews_Params
{
};

// Function AthenaLobby.AthenaLobby_C.AcceptPartySuggestion
struct UAthenaLobby_C_AcceptPartySuggestion_Params
{
};

// Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby
struct UAthenaLobby_C_ExecuteUbergraph_AthenaLobby_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
