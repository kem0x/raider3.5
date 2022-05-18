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

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapPingTimeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::MapPingTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapPingTimeOut");

	UAthenaTeamMemberInfo_C_MapPingTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Mapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*    AthenaGameState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::Mapping(class AFortGameStateAthena* AthenaGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Mapping");

	UAthenaTeamMemberInfo_C_Mapping_Params params;
	params.AthenaGameState = AthenaGameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.InitSpeakerMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::InitSpeakerMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.InitSpeakerMaterial");

	UAthenaTeamMemberInfo_C_InitSpeakerMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateUniqueID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdateUniqueID()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateUniqueID");

	UAthenaTeamMemberInfo_C_UpdateUniqueID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SendFriendInvite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::SendFriendInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SendFriendInvite");

	UAthenaTeamMemberInfo_C_SendFriendInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.CanFriend
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanFriend                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::CanFriend(bool* CanFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.CanFriend");

	UAthenaTeamMemberInfo_C_CanFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanFriend != nullptr)
		*CanFriend = params.CanFriend;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerDisconnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::SetPlayerDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerDisconnected");

	UAthenaTeamMemberInfo_C_SetPlayerDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewTalking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetTalking(bool NewTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking");

	UAthenaTeamMemberInfo_C_SetTalking_Params params;
	params.NewTalking = NewTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdateMicIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon");

	UAthenaTeamMemberInfo_C_UpdateMicIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewMuted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetMuted(bool NewMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted");

	UAthenaTeamMemberInfo_C_SetMuted_Params params;
	params.NewMuted = NewMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reviving                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetReviving(bool Reviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving");

	UAthenaTeamMemberInfo_C_SetReviving_Params params;
	params.Reviving = Reviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DBNO                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetDBNO(bool DBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO");

	UAthenaTeamMemberInfo_C_SetDBNO_Params params;
	params.DBNO = DBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dead                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetDead(bool Dead)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead");

	UAthenaTeamMemberInfo_C_SetDead_Params params;
	params.Dead = Dead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetShield(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield");

	UAthenaTeamMemberInfo_C_SetShield_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetHealth(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth");

	UAthenaTeamMemberInfo_C_SetHealth_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriendIfApplicable
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::DisplayAddFriendIfApplicable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriendIfApplicable");

	UAthenaTeamMemberInfo_C_DisplayAddFriendIfApplicable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaTeamMemberInfo_C::BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	UAthenaTeamMemberInfo_C_BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamMemberInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct");

	UAthenaTeamMemberInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriend_NoAnim
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::DisplayAddFriend_NoAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriend_NoAnim");

	UAthenaTeamMemberInfo_C_DisplayAddFriend_NoAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.TalkingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bTalking                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::TalkingStateChanged(bool* bTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.TalkingStateChanged");

	UAthenaTeamMemberInfo_C_TalkingStateChanged_Params params;
	params.bTalking = bTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bDBNO                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::DBNOStateChanged(bool* bDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DBNOStateChanged");

	UAthenaTeamMemberInfo_C_DBNOStateChanged_Params params;
	params.bDBNO = bDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bReviving                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::BeingRevivedStateChanged(bool* bReviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BeingRevivedStateChanged");

	UAthenaTeamMemberInfo_C_BeingRevivedStateChanged_Params params;
	params.bReviving = bReviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAthenaTeamMemberInfo_C::PlayerNameChanged(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerNameChanged");

	UAthenaTeamMemberInfo_C_PlayerNameChanged_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.HitPointsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         HealthPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ShieldPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::HitPointsChanged(float* HealthPercent, float* ShieldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.HitPointsChanged");

	UAthenaTeamMemberInfo_C_HitPointsChanged_Params params;
	params.HealthPercent = HealthPercent;
	params.ShieldPercent = ShieldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MutedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Muted                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::MutedStateChanged(bool* Muted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MutedStateChanged");

	UAthenaTeamMemberInfo_C_MutedStateChanged_Params params;
	params.Muted = Muted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DeadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          DeadStateChanged               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::DeadStateChanged(bool* DeadStateChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DeadStateChanged");

	UAthenaTeamMemberInfo_C_DeadStateChanged_Params params;
	params.DeadStateChanged = DeadStateChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisconnectedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Disconnected                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::DisconnectedStateChanged(bool* Disconnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisconnectedStateChanged");

	UAthenaTeamMemberInfo_C_DisconnectedStateChanged_Params params;
	params.Disconnected = Disconnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerPlatformChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                CurrentPlatform                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAthenaTeamMemberInfo_C::PlayerPlatformChanged(struct FString* CurrentPlatform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerPlatformChanged");

	UAthenaTeamMemberInfo_C_PlayerPlatformChanged_Params params;
	params.CurrentPlatform = CurrentPlatform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapIndicatorPositionChanged
// (Event, Protected, BlueprintEvent)

void UAthenaTeamMemberInfo_C::MapIndicatorPositionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapIndicatorPositionChanged");

	UAthenaTeamMemberInfo_C_MapIndicatorPositionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::ExecuteUbergraph_AthenaTeamMemberInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo");

	UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
