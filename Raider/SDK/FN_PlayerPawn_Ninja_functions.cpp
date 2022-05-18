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

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetupShadowMeshAssetsAndMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortCustomPartType> PartType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Shadow_Mesh_Component          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// TArray<class UMaterialInterface*> Character_Body_Part_MID_Array  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInstanceDynamic*> Empty_Translucent_Shadow_Stance_Output_MID_Array (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Set                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Ninja_C::SetupShadowMeshAssetsAndMaterials(TEnumAsByte<EFortCustomPartType> PartType, class USkeletalMeshComponent** Shadow_Mesh_Component, TArray<class UMaterialInterface*>* Character_Body_Part_MID_Array, TArray<class UMaterialInstanceDynamic*>* Empty_Translucent_Shadow_Stance_Output_MID_Array, bool* Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetupShadowMeshAssetsAndMaterials");

	APlayerPawn_Ninja_C_SetupShadowMeshAssetsAndMaterials_Params params;
	params.PartType = PartType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Shadow_Mesh_Component != nullptr)
		*Shadow_Mesh_Component = params.Shadow_Mesh_Component;
	if (Character_Body_Part_MID_Array != nullptr)
		*Character_Body_Part_MID_Array = params.Character_Body_Part_MID_Array;
	if (Empty_Translucent_Shadow_Stance_Output_MID_Array != nullptr)
		*Empty_Translucent_Shadow_Stance_Output_MID_Array = params.Empty_Translucent_Shadow_Stance_Output_MID_Array;
	if (Set != nullptr)
		*Set = params.Set;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.CreateAndAttachDuplicateEffectSkeletalMeshes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortCustomPartType> BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  DuplicatedSkeletalMeshComponent (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UMaterialInterface*      Material_to_Apply              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TranslucentSortPriority        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Ninja_C::CreateAndAttachDuplicateEffectSkeletalMeshes(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.CreateAndAttachDuplicateEffectSkeletalMeshes");

	APlayerPawn_Ninja_C_CreateAndAttachDuplicateEffectSkeletalMeshes_Params params;
	params.BodyType = BodyType;
	params.Material_to_Apply = Material_to_Apply;
	params.TranslucentSortPriority = TranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DuplicatedSkeletalMeshComponent != nullptr)
		*DuplicatedSkeletalMeshComponent = params.DuplicatedSkeletalMeshComponent;
	if (Empty_MID_Array != nullptr)
		*Empty_MID_Array = params.Empty_MID_Array;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UserConstructionScript");

	APlayerPawn_Ninja_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Ninja_C::Animate_Ninja_ShadowStance_Dissolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__FinishedFunc");

	APlayerPawn_Ninja_C_Animate_Ninja_ShadowStance_Dissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Ninja_C::Animate_Ninja_ShadowStance_Dissolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__UpdateFunc");

	APlayerPawn_Ninja_C_Animate_Ninja_ShadowStance_Dissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Ninja.ShadowStance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Ninja_ShadowStance(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Ninja.ShadowStance");

	APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Ninja_ShadowStance_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.DimMak.ActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Ninja_C::GameplayCue_Ninja_DimMak_ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.DimMak.ActiveFX");

	APlayerPawn_Ninja_C_GameplayCue_Ninja_DimMak_ActiveFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnWeaponEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWeapon**            NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon**            PrevWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Ninja_C::OnWeaponEquipped(class AFortWeapon** NewWeapon, class AFortWeapon** PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnWeaponEquipped");

	APlayerPawn_Ninja_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UpdateWeaponShadowStance
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::UpdateWeaponShadowStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UpdateWeaponShadowStance");

	APlayerPawn_Ninja_C_UpdateWeaponShadowStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.DragonSlashActivatedOrDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Ninja_C::DragonSlashActivatedOrDeactivated(bool Active_)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.DragonSlashActivatedOrDeactivated");

	APlayerPawn_Ninja_C_DragonSlashActivatedOrDeactivated_Params params;
	params.Active_ = Active_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Ninja_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveBeginPlay");

	APlayerPawn_Ninja_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Toggle Shadow Stance
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::Toggle_Shadow_Stance()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Toggle Shadow Stance");

	APlayerPawn_Ninja_C_Toggle_Shadow_Stance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Ninja_C::OnCharacterPartsReinitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnCharacterPartsReinitialized");

	APlayerPawn_Ninja_C_OnCharacterPartsReinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetMenuScreenClassName
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::SetMenuScreenClassName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetMenuScreenClassName");

	APlayerPawn_Ninja_C_SetMenuScreenClassName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_On
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::NinjaStarTrails_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_On");

	APlayerPawn_Ninja_C_NinjaStarTrails_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_Off
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::NinjaStarTrails_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_Off");

	APlayerPawn_Ninja_C_NinjaStarTrails_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetPiercingForFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewPierceValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Ninja_C::SetPiercingForFX(bool NewPierceValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetPiercingForFX");

	APlayerPawn_Ninja_C_SetPiercingForFX_Params params;
	params.NewPierceValue = NewPierceValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawn_Ninja_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnLanded");

	APlayerPawn_Ninja_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.StopEmittingNewSplines
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::StopEmittingNewSplines()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.StopEmittingNewSplines");

	APlayerPawn_Ninja_C_StopEmittingNewSplines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnTeleportedClient
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::OnTeleportedClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnTeleportedClient");

	APlayerPawn_Ninja_C_OnTeleportedClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonEnd
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Ninja_C::TailOfDragonEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonEnd");

	APlayerPawn_Ninja_C_TailOfDragonEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AoeCloudTimeToLive             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MontageLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Ninja_C::TailOfDragonStart(float AoeCloudTimeToLive, float MontageLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonStart");

	APlayerPawn_Ninja_C_TailOfDragonStart_Params params;
	params.AoeCloudTimeToLive = AoeCloudTimeToLive;
	params.MontageLength = MontageLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ExecuteUbergraph_PlayerPawn_Ninja
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Ninja_C::ExecuteUbergraph_PlayerPawn_Ninja(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ExecuteUbergraph_PlayerPawn_Ninja");

	APlayerPawn_Ninja_C_ExecuteUbergraph_PlayerPawn_Ninja_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
