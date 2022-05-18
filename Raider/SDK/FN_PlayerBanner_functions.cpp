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

// Function PlayerBanner.PlayerBanner_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerBanner_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.UnbindDelegates");

	UPlayerBanner_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetupSurround
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerBanner_C::SetupSurround()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetupSurround");

	UPlayerBanner_C_SetupSurround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColorFromProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerBanner_C::SetBannerIconAndColorFromProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColorFromProfile");

	UPlayerBanner_C_SetBannerIconAndColorFromProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   IconId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBanner_C::SetBannerIconAndColor(const struct FName& IconId, const struct FName& ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColor");

	UPlayerBanner_C_SetBannerIconAndColor_Params params;
	params.IconId = IconId;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.ToggleBannerMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBanner_C::ToggleBannerMask(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.ToggleBannerMask");

	UPlayerBanner_C_ToggleBannerMask_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.RefreshSurround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBanner_C::RefreshSurround(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.RefreshSurround");

	UPlayerBanner_C_RefreshSurround_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.OnSurroundIconLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBanner_C::OnSurroundIconLoaded(class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.OnSurroundIconLoaded");

	UPlayerBanner_C_OnSurroundIconLoaded_Params params;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.EnableSurround
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerBanner_C::EnableSurround()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.EnableSurround");

	UPlayerBanner_C_EnableSurround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.ClearBannerState
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerBanner_C::ClearBannerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.ClearBannerState");

	UPlayerBanner_C_ClearBannerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 LoadedObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBanner_C::OnBannerIconLoaded(class UObject* LoadedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded");

	UPlayerBanner_C_OnBannerIconLoaded_Params params;
	params.LoadedObject = LoadedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.GetBannerMID
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* BannerMID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerBanner_C::GetBannerMID(class UMaterialInstanceDynamic** BannerMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.GetBannerMID");

	UPlayerBanner_C_GetBannerMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BannerMID != nullptr)
		*BannerMID = params.BannerMID;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        OwnerId                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerBanner_C::SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetBannerOwner");

	UPlayerBanner_C_SetBannerOwner_Params params;
	params.OwnerId = OwnerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerColorId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InBannerColorId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBanner_C::SetBannerColorId(const struct FName& InBannerColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetBannerColorId");

	UPlayerBanner_C_SetBannerColorId_Params params;
	params.InBannerColorId = InBannerColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerIconId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InBannerIconId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBanner_C::SetBannerIconId(const struct FName& InBannerIconId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetBannerIconId");

	UPlayerBanner_C_SetBannerIconId_Params params;
	params.InBannerIconId = InBannerIconId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.SetBannerImage
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortHomeBaseInfo       Image_info                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerBanner_C::SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.SetBannerImage");

	UPlayerBanner_C_SetBannerImage_Params params;
	params.Image_info = Image_info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerBanner_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged");

	UPlayerBanner_C_OnTeamMemberStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.Account Info Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerBanner_C::Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.Account Info Changed");

	UPlayerBanner_C_Account_Info_Changed_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerBanner_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.Destruct");

	UPlayerBanner_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerBanner_C::ExecuteUbergraph_PlayerBanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner");

	UPlayerBanner_C_ExecuteUbergraph_PlayerBanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
