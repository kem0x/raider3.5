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

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlayIntroOrOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayIntro                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingTile_C::PlayIntroOrOutro(bool PlayIntro)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlayIntroOrOutro");

	UAthenaMatchmakingTile_C_PlayIntroOrOutro_Params params;
	params.PlayIntro = PlayIntro;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaMatchmakingTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.Construct");

	UAthenaMatchmakingTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.UpdateTileAvailability
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Available                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingTile_C::UpdateTileAvailability(bool* Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.UpdateTileAvailability");

	UAthenaMatchmakingTile_C_UpdateTileAvailability_Params params;
	params.Available = Available;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UAthenaMatchmakingTile_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnSelected");

	UAthenaMatchmakingTile_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UAthenaMatchmakingTile_C::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnDeselected");

	UAthenaMatchmakingTile_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetTileSize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          UseLargeSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingTile_C::SetTileSize(bool* UseLargeSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetTileSize");

	UAthenaMatchmakingTile_C_SetTileSize_Params params;
	params.UseLargeSize = UseLargeSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlaylistChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena**    PlaylistToRepresent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingTile_C::PlaylistChanged(class UFortPlaylistAthena** PlaylistToRepresent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlaylistChanged");

	UAthenaMatchmakingTile_C_PlaylistChanged_Params params;
	params.PlaylistToRepresent = PlaylistToRepresent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.TilePlaylistSetAsMatchmakingPlaylist
// (Event, Public, BlueprintEvent)

void UAthenaMatchmakingTile_C::TilePlaylistSetAsMatchmakingPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.TilePlaylistSetAsMatchmakingPlaylist");

	UAthenaMatchmakingTile_C_TilePlaylistSetAsMatchmakingPlaylist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnImageLoadingComplete
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingTile_C::OnImageLoadingComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnImageLoadingComplete");

	UAthenaMatchmakingTile_C_OnImageLoadingComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaMatchmakingTile_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnHovered");

	UAthenaMatchmakingTile_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetDefaultImage
// (Event, Public, BlueprintEvent)

void UAthenaMatchmakingTile_C::SetDefaultImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetDefaultImage");

	UAthenaMatchmakingTile_C_SetDefaultImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UAthenaMatchmakingTile_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnClicked");

	UAthenaMatchmakingTile_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.ExecuteUbergraph_AthenaMatchmakingTile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingTile_C::ExecuteUbergraph_AthenaMatchmakingTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.ExecuteUbergraph_AthenaMatchmakingTile");

	UAthenaMatchmakingTile_C_ExecuteUbergraph_AthenaMatchmakingTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
