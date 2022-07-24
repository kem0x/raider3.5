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

// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetPostProcessParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::SetPostProcessParams(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetPostProcessParams");

	AB_Ranged_Dual_Generic_Athena_C_SetPostProcessParams_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetActiveAlterationIdleParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::SetActiveAlterationIdleParticles(bool Active, bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetActiveAlterationIdleParticles");

	AB_Ranged_Dual_Generic_Athena_C_SetActiveAlterationIdleParticles_Params params;
	params.Active = Active;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShowReticle
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::ShowReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShowReticle");

	AB_Ranged_Dual_Generic_Athena_C_ShowReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideReticle
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::HideReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideReticle");

	AB_Ranged_Dual_Generic_Athena_C_HideReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateOrDeactivateWindParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::ActivateOrDeactivateWindParticle(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateOrDeactivateWindParticle");

	AB_Ranged_Dual_Generic_Athena_C_ActivateOrDeactivateWindParticle_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.DeactivateMuzzleFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::DeactivateMuzzleFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.DeactivateMuzzleFX");

	AB_Ranged_Dual_Generic_Athena_C_DeactivateMuzzleFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.DeactivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::DeactivateReloadSmokeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.DeactivateReloadSmokeFX");

	AB_Ranged_Dual_Generic_Athena_C_DeactivateReloadSmokeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::ActivateReloadSmokeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateReloadSmokeFX");

	AB_Ranged_Dual_Generic_Athena_C_ActivateReloadSmokeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bool                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OffHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::ActivateShellsFX(bool Bool, bool OffHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ActivateShellsFX");

	AB_Ranged_Dual_Generic_Athena_C_ActivateShellsFX_Params params;
	params.Bool = Bool;
	params.OffHand = OffHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.DeactivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::DeactivateShellsFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.DeactivateShellsFX");

	AB_Ranged_Dual_Generic_Athena_C_DeactivateShellsFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetupShellFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::SetupShellFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetupShellFX");

	AB_Ranged_Dual_Generic_Athena_C_SetupShellFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UpdateShellEmittersFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::UpdateShellEmittersFX(class UParticleSystemComponent* PS)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UpdateShellEmittersFX");

	AB_Ranged_Dual_Generic_Athena_C_UpdateShellEmittersFX_Params params;
	params.PS = PS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Muzzle Play Reload FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Muzzle Play Reload FX");

	AB_Ranged_Dual_Generic_Athena_C_Muzzle_Play_Reload_FX_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Persistent_Fire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OffHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::Muzzle_Flash_FX(bool Persistent_Fire, bool OffHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Muzzle Flash FX");

	AB_Ranged_Dual_Generic_Athena_C_Muzzle_Flash_FX_Params params;
	params.Persistent_Fire = Persistent_Fire;
	params.OffHand = OffHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::SetWpnRarity()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWpnRarity");

	AB_Ranged_Dual_Generic_Athena_C_SetWpnRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AddRandomScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OffHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::AddRandomScale(bool OffHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AddRandomScale");

	AB_Ranged_Dual_Generic_Athena_C_AddRandomScale_Params params;
	params.OffHand = OffHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UserConstructionScript");

	AB_Ranged_Dual_Generic_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AnimateScopePostProcess__FinishedFunc
// (BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::AnimateScopePostProcess__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AnimateScopePostProcess__FinishedFunc");

	AB_Ranged_Dual_Generic_Athena_C_AnimateScopePostProcess__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AnimateScopePostProcess__UpdateFunc
// (BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::AnimateScopePostProcess__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AnimateScopePostProcess__UpdateFunc");

	AB_Ranged_Dual_Generic_Athena_C_AnimateScopePostProcess__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_468C8A744AA43D411B8A218EDC703167
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::OnLoaded_468C8A744AA43D411B8A218EDC703167(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_468C8A744AA43D411B8A218EDC703167");

	AB_Ranged_Dual_Generic_Athena_C_OnLoaded_468C8A744AA43D411B8A218EDC703167_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_A20154E74163905534EAA7A226A4D20B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::OnLoaded_A20154E74163905534EAA7A226A4D20B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_A20154E74163905534EAA7A226A4D20B");

	AB_Ranged_Dual_Generic_Athena_C_OnLoaded_A20154E74163905534EAA7A226A4D20B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_3B6C2F134D7C48D715B2EB8E0CE9B045
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::OnLoaded_3B6C2F134D7C48D715B2EB8E0CE9B045(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_3B6C2F134D7C48D715B2EB8E0CE9B045");

	AB_Ranged_Dual_Generic_Athena_C_OnLoaded_3B6C2F134D7C48D715B2EB8E0CE9B045_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_DB8A0F544A576B8684A07E865C728884
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::OnLoaded_DB8A0F544A576B8684A07E865C728884(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnLoaded_DB8A0F544A576B8684A07E865C728884");

	AB_Ranged_Dual_Generic_Athena_C_OnLoaded_DB8A0F544A576B8684A07E865C728884_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnPlayWeaponFireFX");

	AB_Ranged_Dual_Generic_Athena_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::OnStopWeaponFireFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnStopWeaponFireFX");

	AB_Ranged_Dual_Generic_Athena_C_OnStopWeaponFireFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState>* ReloadStage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::OnPlayReloadFX(TEnumAsByte<EFortReloadFXState>* ReloadStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnPlayReloadFX");

	AB_Ranged_Dual_Generic_Athena_C_OnPlayReloadFX_Params params;
	params.ReloadStage = ReloadStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bNewIsTargeting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::OnSetTargeting(bool* bNewIsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnSetTargeting");

	AB_Ranged_Dual_Generic_Athena_C_OnSetTargeting_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::K2_OnUnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.K2_OnUnEquip");

	AB_Ranged_Dual_Generic_Athena_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.InitializeScopeVariables
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::InitializeScopeVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.InitializeScopeVariables");

	AB_Ranged_Dual_Generic_Athena_C_InitializeScopeVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Update Enemy Custom Depths
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_Or_Disable              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StencilBufferValue             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.Update Enemy Custom Depths");

	AB_Ranged_Dual_Generic_Athena_C_Update_Enemy_Custom_Depths_Params params;
	params.Enable_Or_Disable = Enable_Or_Disable;
	params.StencilBufferValue = StencilBufferValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::OnWeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnWeaponAttached");

	AB_Ranged_Dual_Generic_Athena_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnInitAlteration
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition** NewAlteration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::OnInitAlteration(class UFortAlterationItemDefinition** NewAlteration)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnInitAlteration");

	AB_Ranged_Dual_Generic_Athena_C_OnInitAlteration_Params params;
	params.NewAlteration = NewAlteration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification* CosmeticMod                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMaterialInstanceDynamic** DynamicMaterialInstance        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnInitCosmeticAlterations");

	AB_Ranged_Dual_Generic_Athena_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;
	params.DynamicMaterialInstance = DynamicMaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShellsON_(onPump)
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::ShellsON__onPump_()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShellsON_(onPump)");

	AB_Ranged_Dual_Generic_Athena_C_ShellsON__onPump__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnEquippedWeaponDestory
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::OnEquippedWeaponDestory()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnEquippedWeaponDestory");

	AB_Ranged_Dual_Generic_Athena_C_OnEquippedWeaponDestory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWeaponPierceThrough
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetLimit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::SetWeaponPierceThrough(bool Enable, int TargetLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWeaponPierceThrough");

	AB_Ranged_Dual_Generic_Athena_C_SetWeaponPierceThrough_Params params;
	params.Enable = Enable;
	params.TargetLimit = TargetLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWeaponPierceThrough_ClientRep
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetLimit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::SetWeaponPierceThrough_ClientRep(bool Enable, int TargetLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetWeaponPierceThrough_ClientRep");

	AB_Ranged_Dual_Generic_Athena_C_SetWeaponPierceThrough_ClientRep_Params params;
	params.Enable = Enable;
	params.TargetLimit = TargetLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ReceiveBeginPlay");

	AB_Ranged_Dual_Generic_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::OnWeaponVisibilityChanged(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.OnWeaponVisibilityChanged");

	AB_Ranged_Dual_Generic_Athena_C_OnWeaponVisibilityChanged_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideWeaponMesh
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::HideWeaponMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideWeaponMesh");

	AB_Ranged_Dual_Generic_Athena_C_HideWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShowWeaponMesh
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::ShowWeaponMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShowWeaponMesh");

	AB_Ranged_Dual_Generic_Athena_C_ShowWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideWeapon
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::HideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideWeapon");

	AB_Ranged_Dual_Generic_Athena_C_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShowWeapon
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::ShowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ShowWeapon");

	AB_Ranged_Dual_Generic_Athena_C_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ReverseScopePP
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::ReverseScopePP()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ReverseScopePP");

	AB_Ranged_Dual_Generic_Athena_C_ReverseScopePP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ResetDoonceScopeSound
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::ResetDoonceScopeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ResetDoonceScopeSound");

	AB_Ranged_Dual_Generic_Athena_C_ResetDoonceScopeSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UnhideThirdPersonStuff
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::UnhideThirdPersonStuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UnhideThirdPersonStuff");

	AB_Ranged_Dual_Generic_Athena_C_UnhideThirdPersonStuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.PlayScopePP
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::PlayScopePP()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.PlayScopePP");

	AB_Ranged_Dual_Generic_Athena_C_PlayScopePP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideFirstPersonStuff
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::HideFirstPersonStuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideFirstPersonStuff");

	AB_Ranged_Dual_Generic_Athena_C_HideFirstPersonStuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AbortScopeFX
// (Event, Public, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::AbortScopeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.AbortScopeFX");

	AB_Ranged_Dual_Generic_Athena_C_AbortScopeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideThirdPersonStuff
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::HideThirdPersonStuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HideThirdPersonStuff");

	AB_Ranged_Dual_Generic_Athena_C_HideThirdPersonStuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UnhideFirstPersonStuffPart2
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::UnhideFirstPersonStuffPart2()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UnhideFirstPersonStuffPart2");

	AB_Ranged_Dual_Generic_Athena_C_UnhideFirstPersonStuffPart2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UnhideFirstPersonStuffPart1
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::UnhideFirstPersonStuffPart1()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.UnhideFirstPersonStuffPart1");

	AB_Ranged_Dual_Generic_Athena_C_UnhideFirstPersonStuffPart1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ForceScopeFX
// (Event, Public, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::ForceScopeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ForceScopeFX");

	AB_Ranged_Dual_Generic_Athena_C_ForceScopeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetupScopePostProcess
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::SetupScopePostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.SetupScopePostProcess");

	AB_Ranged_Dual_Generic_Athena_C_SetupScopePostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HandFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDualWeaponHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPersistantFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::HandFired(EDualWeaponHand Hand, bool bPersistantFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.HandFired");

	AB_Ranged_Dual_Generic_Athena_C_HandFired_Params params;
	params.Hand = Hand;
	params.bPersistantFire = bPersistantFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.BindOnHandFired
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Dual_Generic_Athena_C::BindOnHandFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.BindOnHandFired");

	AB_Ranged_Dual_Generic_Athena_C_BindOnHandFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ExecuteUbergraph_B_Ranged_Dual_Generic_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Dual_Generic_Athena_C::ExecuteUbergraph_B_Ranged_Dual_Generic_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C.ExecuteUbergraph_B_Ranged_Dual_Generic_Athena");

	AB_Ranged_Dual_Generic_Athena_C_ExecuteUbergraph_B_Ranged_Dual_Generic_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
