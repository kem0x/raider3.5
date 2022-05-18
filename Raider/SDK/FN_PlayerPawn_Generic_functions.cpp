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

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Melee_Color_Set                (Parm, OutParm, IsPlainOldData)

void APlayerPawn_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color");

	APlayerPawn_Generic_C_Melee_Effect_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = params.Melee_Color_Set;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.TriggerGameplayWindEmitter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerWindParticleEmitters> Player_Wind_Particle_Emitter_To_Fire (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::TriggerGameplayWindEmitter(TEnumAsByte<EPlayerWindParticleEmitters> Player_Wind_Particle_Emitter_To_Fire)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.TriggerGameplayWindEmitter");

	APlayerPawn_Generic_C_TriggerGameplayWindEmitter_Params params;
	params.Player_Wind_Particle_Emitter_To_Fire = Player_Wind_Particle_Emitter_To_Fire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Are the wind and water RTT passes enabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Are the wind and water RTT passes enabled");

	APlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.DisableWaterLevelTick
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::DisableWaterLevelTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.DisableWaterLevelTick");

	APlayerPawn_Generic_C_DisableWaterLevelTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetAdrenalineRushVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::SetAdrenalineRushVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetAdrenalineRushVisibility");

	APlayerPawn_Generic_C_SetAdrenalineRushVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_On_Player_Built_Floor
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::OnRep_On_Player_Built_Floor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_On_Player_Built_Floor");

	APlayerPawn_Generic_C_OnRep_On_Player_Built_Floor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Setup FX Mesh Duplicates
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material_to_Apply              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Charm_MID_Array                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*  Charm_Mesh                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Head_MID_Array                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*  Head_Mesh                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Body_MID_Array                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*  Body_Mesh                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// int                            Translucent_Sort_Order         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Transfer_Material_Parameters   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::Setup_FX_Mesh_Duplicates(int Translucent_Sort_Order, bool Transfer_Material_Parameters, class UMaterialInterface** Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Charm_MID_Array, class USkeletalMeshComponent** Charm_Mesh, TArray<class UMaterialInstanceDynamic*>* Head_MID_Array, class USkeletalMeshComponent** Head_Mesh, TArray<class UMaterialInstanceDynamic*>* Body_MID_Array, class USkeletalMeshComponent** Body_Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Setup FX Mesh Duplicates");

	APlayerPawn_Generic_C_Setup_FX_Mesh_Duplicates_Params params;
	params.Translucent_Sort_Order = Translucent_Sort_Order;
	params.Transfer_Material_Parameters = Transfer_Material_Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material_to_Apply != nullptr)
		*Material_to_Apply = params.Material_to_Apply;
	if (Charm_MID_Array != nullptr)
		*Charm_MID_Array = params.Charm_MID_Array;
	if (Charm_Mesh != nullptr)
		*Charm_Mesh = params.Charm_Mesh;
	if (Head_MID_Array != nullptr)
		*Head_MID_Array = params.Head_MID_Array;
	if (Head_Mesh != nullptr)
		*Head_Mesh = params.Head_Mesh;
	if (Body_MID_Array != nullptr)
		*Body_MID_Array = params.Body_MID_Array;
	if (Body_Mesh != nullptr)
		*Body_Mesh = params.Body_Mesh;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortCustomPartType> BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material_to_Apply              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TranslucentSortPriority        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPoseableMeshComponent*  PoseableMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void APlayerPawn_Generic_C::Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, class UPoseableMeshComponent** PoseableMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh");

	APlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params params;
	params.BodyType = BodyType;
	params.Material_to_Apply = Material_to_Apply;
	params.TranslucentSortPriority = TranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Empty_MID_Array != nullptr)
		*Empty_MID_Array = params.Empty_MID_Array;
	if (PoseableMesh != nullptr)
		*PoseableMesh = params.PoseableMesh;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::ToggleShieldVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility");

	APlayerPawn_Generic_C_ToggleShieldVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  Master                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawn_Generic_C::SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody");

	APlayerPawn_Generic_C_SlaveAMeshToTheBody_Params params;
	params.Mesh = Mesh;
	params.Master = Master;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Highlight_Cracks               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_Highlight_Cracks           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Push                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_Push                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void APlayerPawn_Generic_C::SetShieldMids_InternalLoop(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*>* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop");

	APlayerPawn_Generic_C_SetShieldMids_InternalLoop_Params params;
	params.Highlight_Cracks = Highlight_Cracks;
	params.Set_Highlight_Cracks = Set_Highlight_Cracks;
	params.Push = Push;
	params.Set_Push = Set_Push;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Highlight_Cracks               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_Highlight_Cracks           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Push                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_Push                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::SetShieldMids(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids");

	APlayerPawn_Generic_C_SetShieldMids_Params params;
	params.Highlight_Cracks = Highlight_Cracks;
	params.Set_Highlight_Cracks = Set_Highlight_Cracks;
	params.Push = Push;
	params.Set_Push = Set_Push;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::FindShieldOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity");

	APlayerPawn_Generic_C_FindShieldOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortCustomPartType> BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  DuplicatedSkeletalMeshComponent (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UMaterialInterface*      Material_to_Apply              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TranslucentSortPriority        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent");

	APlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params params;
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


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript");

	APlayerPawn_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.CapsuleFadeTL__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::CapsuleFadeTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.CapsuleFadeTL__FinishedFunc");

	APlayerPawn_Generic_C_CapsuleFadeTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.CapsuleFadeTL__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::CapsuleFadeTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.CapsuleFadeTL__UpdateFunc");

	APlayerPawn_Generic_C_CapsuleFadeTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::HealthSweep__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__FinishedFunc");

	APlayerPawn_Generic_C_HealthSweep__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::HealthSweep__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__UpdateFunc");

	APlayerPawn_Generic_C_HealthSweep__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::Shield_Regen_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__FinishedFunc");

	APlayerPawn_Generic_C_Shield_Regen_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::Shield_Regen_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__UpdateFunc");

	APlayerPawn_Generic_C_Shield_Regen_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::Shield_ShatterTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__FinishedFunc");

	APlayerPawn_Generic_C_Shield_ShatterTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::Shield_ShatterTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__UpdateFunc");

	APlayerPawn_Generic_C_Shield_ShatterTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::Shield_DamageTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__FinishedFunc");

	APlayerPawn_Generic_C_Shield_DamageTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::Shield_DamageTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__UpdateFunc");

	APlayerPawn_Generic_C_Shield_DamageTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::Full_Shield_Health__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__FinishedFunc");

	APlayerPawn_Generic_C_Full_Shield_Health__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Generic_C::Full_Shield_Health__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__UpdateFunc");

	APlayerPawn_Generic_C_Full_Shield_Health__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::MeleeSwingRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight");

	APlayerPawn_Generic_C_MeleeSwingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::MeleeSwingLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft");

	APlayerPawn_Generic_C_MeleeSwingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects");

	APlayerPawn_Generic_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawn_Generic_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded");

	APlayerPawn_Generic_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects");

	APlayerPawn_Generic_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWeapon**            NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon**            PrevWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::OnWeaponEquipped(class AFortWeapon** NewWeapon, class AFortWeapon** PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped");

	APlayerPawn_Generic_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick");

	APlayerPawn_Generic_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::FootStepLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft");

	APlayerPawn_Generic_C_FootStepLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::FootStepRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight");

	APlayerPawn_Generic_C_FootStepRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Generic_C::OnCharacterPartsReinitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized");

	APlayerPawn_Generic_C_OnCharacterPartsReinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bNewUseFirstPersonCamera       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::SetFirstPersonCamera(bool* bNewUseFirstPersonCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera");

	APlayerPawn_Generic_C_SetFirstPersonCamera_Params params;
	params.bNewUseFirstPersonCamera = bNewUseFirstPersonCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewUseFirstPersonCamera        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera");

	APlayerPawn_Generic_C_InternalSetFirstPersonCamera_Params params;
	params.NewUseFirstPersonCamera = NewUseFirstPersonCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.DBNOResurrect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_DBNOResurrect(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.DBNOResurrect");

	APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnBaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 NewBase                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::OnBaseChanged(class AActor** NewBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnBaseChanged");

	APlayerPawn_Generic_C_OnBaseChanged_Params params;
	params.NewBase = NewBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceivePossessed");

	APlayerPawn_Generic_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDisplaySentence
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  SpeechText                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APlayerPawn_Generic_C::OnDisplaySentence(struct FText* SpeechText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDisplaySentence");

	APlayerPawn_Generic_C_OnDisplaySentence_Params params;
	params.SpeechText = SpeechText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnClearSentence
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Generic_C::OnClearSentence()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnClearSentence");

	APlayerPawn_Generic_C_OnClearSentence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APlayerPawn_Generic_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveDestroyed");

	APlayerPawn_Generic_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ClientBindWeaponSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::ClientBindWeaponSwap(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ClientBindWeaponSwap");

	APlayerPawn_Generic_C_ClientBindWeaponSwap_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindWeaponSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InDuration                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::BindWeaponSwap(float InDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindWeaponSwap");

	APlayerPawn_Generic_C_BindWeaponSwap_Params params;
	params.InDuration = InDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiSwapWeapon
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             New                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             Prev                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::MultiSwapWeapon(class AFortWeapon* New, class AFortWeapon* Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiSwapWeapon");

	APlayerPawn_Generic_C_MultiSwapWeapon_Params params;
	params.New = New;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.UnBindWeaponSwap
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::UnBindWeaponSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.UnBindWeaponSwap");

	APlayerPawn_Generic_C_UnBindWeaponSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndSwap
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             CurrentWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::MultiEndSwap(class AFortWeapon* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndSwap");

	APlayerPawn_Generic_C_MultiEndSwap_Params params;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Clean up DBNO fx
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::Clean_up_DBNO_fx()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Clean up DBNO fx");

	APlayerPawn_Generic_C_Clean_up_DBNO_fx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathServer");

	APlayerPawn_Generic_C_OnDeathServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.CharacterDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::CharacterDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.CharacterDestroyed");

	APlayerPawn_Generic_C_CharacterDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindOnDestroyed
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::BindOnDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindOnDestroyed");

	APlayerPawn_Generic_C_BindOnDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FadeOutCapsuleShadow
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::FadeOutCapsuleShadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FadeOutCapsuleShadow");

	APlayerPawn_Generic_C_FadeOutCapsuleShadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SpawnDBNOParticles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ParticleLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerPawn_Generic_C::SpawnDBNOParticles(const struct FVector& ParticleLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SpawnDBNOParticles");

	APlayerPawn_Generic_C_SpawnDBNOParticles_Params params;
	params.ParticleLocation = ParticleLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.PlayGameplayWindEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerWindParticleEmitters> Player_Wind_Particle_Emitter_To_Fire (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::PlayGameplayWindEffect(TEnumAsByte<EPlayerWindParticleEmitters> Player_Wind_Particle_Emitter_To_Fire)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.PlayGameplayWindEffect");

	APlayerPawn_Generic_C_PlayGameplayWindEffect_Params params;
	params.Player_Wind_Particle_Emitter_To_Fire = Player_Wind_Particle_Emitter_To_Fire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Death.FadeCapsule_StW
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::GameplayCue_Abilities_Death_FadeCapsule_StW(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Death.FadeCapsule_StW");

	APlayerPawn_Generic_C_GameplayCue_Abilities_Death_FadeCapsule_StW_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Entered Water Volume
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::Entered_Water_Volume()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Entered Water Volume");

	APlayerPawn_Generic_C_Entered_Water_Volume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Player Creates a Splash
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawn_Generic_C::Player_Creates_a_Splash(struct FTransform* NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Player Creates a Splash");

	APlayerPawn_Generic_C_Player_Creates_a_Splash_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::OnLand_CE()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE");

	APlayerPawn_Generic_C_OnLand_CE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Test Adrenaline Rush
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::Test_Adrenaline_Rush()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Test Adrenaline Rush");

	APlayerPawn_Generic_C_Test_Adrenaline_Rush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::GameplayCue_Generic_AdrenalineRush_DirectHeal(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal");

	APlayerPawn_Generic_C_GameplayCue_Generic_AdrenalineRush_DirectHeal_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded");

	APlayerPawn_Generic_C_GameplayCue_Damage_Shielded_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed");

	APlayerPawn_Generic_C_GameplayCue_Shield_Destroyed_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::GameplayCue_Shield_FullyCharged(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged");

	APlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Reapplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Generic_C::GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Reapplied");

	APlayerPawn_Generic_C_GameplayCue_Shield_Reapplied_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsSetup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem**        ParticleSystemReference        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  FirstSocketName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SecondSocketName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::AnimTrailsSetup(class UParticleSystem** ParticleSystemReference, struct FName* FirstSocketName, struct FName* SecondSocketName, float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsSetup");

	APlayerPawn_Generic_C_AnimTrailsSetup_Params params;
	params.ParticleSystemReference = ParticleSystemReference;
	params.FirstSocketName = FirstSocketName;
	params.SecondSocketName = SecondSocketName;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsDisable
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_C::AnimTrailsDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsDisable");

	APlayerPawn_Generic_C_AnimTrailsDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsNotify
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::AnimTrailsNotify(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsNotify");

	APlayerPawn_Generic_C_AnimTrailsNotify_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_C::ExecuteUbergraph_PlayerPawn_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic");

	APlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
