// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InFillText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingModeButton_C::SetSquadFillText(bool InFillText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText");

	UAthenaMatchmakingModeButton_C_SetSquadFillText_Params params;
	params.InFillText = InFillText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*     NewPlaylist                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingModeButton_C::PlaylistChanged(class UFortPlaylistAthena* NewPlaylist)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged");

	UAthenaMatchmakingModeButton_C_PlaylistChanged_Params params;
	params.NewPlaylist = NewPlaylist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingModeButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo");

	UAthenaMatchmakingModeButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaMatchmakingModeButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.Construct");

	UAthenaMatchmakingModeButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingModeButton_C::ExecuteUbergraph_AthenaMatchmakingModeButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton");

	UAthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
