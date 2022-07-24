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

// Function LandingPageTile.LandingPageTile_C.PlayIntroOrOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayIntro                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULandingPageTile_C::PlayIntroOrOutro(bool PlayIntro)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandingPageTile.LandingPageTile_C.PlayIntroOrOutro");

	ULandingPageTile_C_PlayIntroOrOutro_Params params;
	params.PlayIntro = PlayIntro;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandingPageTile.LandingPageTile_C.UpdateTileAvailability
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Available                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULandingPageTile_C::UpdateTileAvailability(bool Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandingPageTile.LandingPageTile_C.UpdateTileAvailability");

	ULandingPageTile_C_UpdateTileAvailability_Params params;
	params.Available = Available;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandingPageTile.LandingPageTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void ULandingPageTile_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandingPageTile.LandingPageTile_C.BP_OnHovered");

	ULandingPageTile_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandingPageTile.LandingPageTile_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void ULandingPageTile_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandingPageTile.LandingPageTile_C.BP_OnUnhovered");

	ULandingPageTile_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandingPageTile.LandingPageTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULandingPageTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandingPageTile.LandingPageTile_C.Construct");

	ULandingPageTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandingPageTile.LandingPageTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULandingPageTile_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandingPageTile.LandingPageTile_C.PreConstruct");

	ULandingPageTile_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LandingPageTile.LandingPageTile_C.ExecuteUbergraph_LandingPageTile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULandingPageTile_C::ExecuteUbergraph_LandingPageTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandingPageTile.LandingPageTile_C.ExecuteUbergraph_LandingPageTile");

	ULandingPageTile_C_ExecuteUbergraph_LandingPageTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
