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

// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerBannerInfo       Banner                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerRankEmblem_C::SetBannerInfo(const struct FPlayerBannerInfo& Banner)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerInfo");

	UPlayerRankEmblem_C_SetBannerInfo_Params params;
	params.Banner = Banner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerSurroundLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Animate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerRankEmblem_C::SetBannerSurroundLevel(int Level, bool Animate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerSurroundLevel");

	UPlayerRankEmblem_C_SetBannerSurroundLevel_Params params;
	params.Level = Level;
	params.Animate = Animate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerRankEmblem_C::SetBannerOwner(class AFortPlayerController* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerOwner");

	UPlayerRankEmblem_C_SetBannerOwner_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerRankEmblem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRankEmblem.PlayerRankEmblem_C.Construct");

	UPlayerRankEmblem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerRankEmblem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRankEmblem.PlayerRankEmblem_C.PreConstruct");

	UPlayerRankEmblem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerRankEmblem_C::ExecuteUbergraph_PlayerRankEmblem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem");

	UPlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
