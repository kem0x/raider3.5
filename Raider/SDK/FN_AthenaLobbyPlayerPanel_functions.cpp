// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Cancel");

	UAthenaLobbyPlayerPanel_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLobbyPlayerPanel_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnTeamMemberStateChanged");

	UAthenaLobbyPlayerPanel_C_OnTeamMemberStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.InitializeContextEvents");

	UAthenaLobbyPlayerPanel_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Focus");

	UAthenaLobbyPlayerPanel_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Refresh");

	UAthenaLobbyPlayerPanel_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLobbyPlayerPanel_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.SetTeamMemberInfo");

	UAthenaLobbyPlayerPanel_C_SetTeamMemberInfo_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Initialize");

	UAthenaLobbyPlayerPanel_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnClosed__DelegateSignature");

	UAthenaLobbyPlayerPanel_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::OnGadgetsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature");

	UAthenaLobbyPlayerPanel_C_OnGadgetsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
