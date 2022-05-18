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

// Function B_Pickups.B_Pickups_C.SetVisibleMobileInteractIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::SetVisibleMobileInteractIcon(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetVisibleMobileInteractIcon");

	AB_Pickups_C_SetVisibleMobileInteractIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetInitialBGRaysParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::SetInitialBGRaysParams(class UMaterialInstanceDynamic* Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetInitialBGRaysParams");

	AB_Pickups_C_SetInitialBGRaysParams_Params params;
	params.Mid = Mid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetActiveBackgroundParticleSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::SetActiveBackgroundParticleSystem(bool Active, bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetActiveBackgroundParticleSystem");

	AB_Pickups_C_SetActiveBackgroundParticleSystem_Params params;
	params.Active = Active;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetInitialHologramParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::SetInitialHologramParams(class UMaterialInstanceDynamic* Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetInitialHologramParams");

	AB_Pickups_C_SetInitialHologramParams_Params params;
	params.Mid = Mid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.Unique Material MIDs
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::Unique_Material_MIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.Unique Material MIDs");

	AB_Pickups_C_Unique_Material_MIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetupStretchMIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::SetupStretchMIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetupStretchMIDs");

	AB_Pickups_C_SetupStretchMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetupBaseMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::SetupBaseMIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetupBaseMIDs");

	AB_Pickups_C_SetupBaseMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetHiddenBackgroundVisualComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::SetHiddenBackgroundVisualComponents(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetHiddenBackgroundVisualComponents");

	AB_Pickups_C_SetHiddenBackgroundVisualComponents_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetupLight
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::SetupLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetupLight");

	AB_Pickups_C_SetupLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.DestroyBackgroundVisualComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::DestroyBackgroundVisualComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.DestroyBackgroundVisualComponents");

	AB_Pickups_C_DestroyBackgroundVisualComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.ReleaseStretchMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::ReleaseStretchMIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.ReleaseStretchMIDs");

	AB_Pickups_C_ReleaseStretchMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.ScaleHologramTimingsForPvP
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::ScaleHologramTimingsForPvP()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.ScaleHologramTimingsForPvP");

	AB_Pickups_C_ScaleHologramTimingsForPvP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetHologramPickedUpParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Tier_0                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::SetHologramPickedUpParams(bool Tier_0)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetHologramPickedUpParams");

	AB_Pickups_C_SetHologramPickedUpParams_Params params;
	params.Tier_0 = Tier_0;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SpawnPickedUpTrailPS
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::SpawnPickedUpTrailPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SpawnPickedUpTrailPS");

	AB_Pickups_C_SpawnPickedUpTrailPS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.SetRarityColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::SetRarityColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.SetRarityColor");

	AB_Pickups_C_SetRarityColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.UserConstructionScript");

	AB_Pickups_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.MobileSelectedTL__FinishedFunc
// (BlueprintEvent)

void AB_Pickups_C::MobileSelectedTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.MobileSelectedTL__FinishedFunc");

	AB_Pickups_C_MobileSelectedTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.MobileSelectedTL__UpdateFunc
// (BlueprintEvent)

void AB_Pickups_C::MobileSelectedTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.MobileSelectedTL__UpdateFunc");

	AB_Pickups_C_MobileSelectedTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.OnLoaded_545E96BB48C612EC956D439BF0008DCB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::OnLoaded_545E96BB48C612EC956D439BF0008DCB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.OnLoaded_545E96BB48C612EC956D439BF0008DCB");

	AB_Pickups_C_OnLoaded_545E96BB48C612EC956D439BF0008DCB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.OnLoaded_8EE257FB4892F606952F3B9974CE26D4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::OnLoaded_8EE257FB4892F606952F3B9974CE26D4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.OnLoaded_8EE257FB4892F606952F3B9974CE26D4");

	AB_Pickups_C_OnLoaded_8EE257FB4892F606952F3B9974CE26D4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.OnLoaded_E6CB94744AD5E69A7AE15B925703AA9F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::OnLoaded_E6CB94744AD5E69A7AE15B925703AA9F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.OnLoaded_E6CB94744AD5E69A7AE15B925703AA9F");

	AB_Pickups_C_OnLoaded_E6CB94744AD5E69A7AE15B925703AA9F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.OnAboutToEnterBackpack
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              PickupTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::OnAboutToEnterBackpack(class AFortPawn** PickupTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.OnAboutToEnterBackpack");

	AB_Pickups_C_OnAboutToEnterBackpack_Params params;
	params.PickupTarget = PickupTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.ReceiveTick");

	AB_Pickups_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.OnTossed
// (Event, Public, BlueprintEvent)

void AB_Pickups_C::OnTossed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.OnTossed");

	AB_Pickups_C_OnTossed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.OnPickedUp
// (Event, Public, BlueprintEvent)

void AB_Pickups_C::OnPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.OnPickedUp");

	AB_Pickups_C_OnPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Pickups_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.ReceiveDestroyed");

	AB_Pickups_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Pickups_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.ReceiveBeginPlay");

	AB_Pickups_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.EnableBacchusHighlight
// (Event, Public, BlueprintEvent)

void AB_Pickups_C::EnableBacchusHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.EnableBacchusHighlight");

	AB_Pickups_C_EnableBacchusHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.DisableBacchusHighlight
// (Event, Public, BlueprintEvent)

void AB_Pickups_C::DisableBacchusHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.DisableBacchusHighlight");

	AB_Pickups_C_DisableBacchusHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups.B_Pickups_C.ExecuteUbergraph_B_Pickups
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_C::ExecuteUbergraph_B_Pickups(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups.B_Pickups_C.ExecuteUbergraph_B_Pickups");

	AB_Pickups_C_ExecuteUbergraph_B_Pickups_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
