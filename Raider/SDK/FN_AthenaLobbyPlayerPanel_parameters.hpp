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

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Cancel
struct UAthenaLobbyPlayerPanel_C_Cancel_Params
{
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnTeamMemberStateChanged
struct UAthenaLobbyPlayerPanel_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.InitializeContextEvents
struct UAthenaLobbyPlayerPanel_C_InitializeContextEvents_Params
{
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Focus
struct UAthenaLobbyPlayerPanel_C_Focus_Params
{
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Refresh
struct UAthenaLobbyPlayerPanel_C_Refresh_Params
{
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.SetTeamMemberInfo
struct UAthenaLobbyPlayerPanel_C_SetTeamMemberInfo_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Initialize
struct UAthenaLobbyPlayerPanel_C_Initialize_Params
{
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Construct
struct UAthenaLobbyPlayerPanel_C_Construct_Params
{
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.ExecuteUbergraph_AthenaLobbyPlayerPanel
struct UAthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnClosed__DelegateSignature
struct UAthenaLobbyPlayerPanel_C_OnClosed__DelegateSignature_Params
{
};

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature
struct UAthenaLobbyPlayerPanel_C_OnGadgetsClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
