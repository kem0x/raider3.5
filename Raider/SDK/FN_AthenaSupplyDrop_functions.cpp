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

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnSetCustomDepthStencilValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*>* PrimComponents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bUseCustomDepth                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StencilValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOutConsume                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::OnSetCustomDepthStencilValue(TArray<class UPrimitiveComponent*>* PrimComponents, bool* bUseCustomDepth, int* StencilValue, bool* bOutConsume)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnSetCustomDepthStencilValue");

	AAthenaSupplyDrop_C_OnSetCustomDepthStencilValue_Params params;
	params.PrimComponents = PrimComponents;
	params.bUseCustomDepth = bUseCustomDepth;
	params.StencilValue = StencilValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutConsume != nullptr)
		*bOutConsume = params.bOutConsume;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.HandleProjectileMovementStop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AAthenaSupplyDrop_C::HandleProjectileMovementStop(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.HandleProjectileMovementStop");

	AAthenaSupplyDrop_C_HandleProjectileMovementStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.StartNewWaveSound
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::StartNewWaveSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.StartNewWaveSound");

	AAthenaSupplyDrop_C_StartNewWaveSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ForceSetLocationOnLanding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::ForceSetLocationOnLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.ForceSetLocationOnLanding");

	AAthenaSupplyDrop_C_ForceSetLocationOnLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_LandingLocation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::OnRep_LandingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_LandingLocation");

	AAthenaSupplyDrop_C_OnRep_LandingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.AlmostLanded
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::AlmostLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.AlmostLanded");

	AAthenaSupplyDrop_C_AlmostLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.DisableFlare
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::DisableFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.DisableFlare");

	AAthenaSupplyDrop_C_DisableFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFallHeightAndSpeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::InitFallHeightAndSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFallHeightAndSpeed");

	AAthenaSupplyDrop_C_InitFallHeightAndSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.PlayLandingFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::PlayLandingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.PlayLandingFX");

	AAthenaSupplyDrop_C_PlayLandingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::InitFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFall");

	AAthenaSupplyDrop_C_InitFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_BalloonPopped
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::OnRep_BalloonPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_BalloonPopped");

	AAthenaSupplyDrop_C_OnRep_BalloonPopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BalloonDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::BalloonDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BalloonDestroyed");

	AAthenaSupplyDrop_C_BalloonDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.UpdateReticleLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::UpdateReticleLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.UpdateReticleLocation");

	AAthenaSupplyDrop_C_UpdateReticleLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OpenSupplyDrop
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::OpenSupplyDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OpenSupplyDrop");

	AAthenaSupplyDrop_C_OpenSupplyDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_Opened
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::OnRep_Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_Opened");

	AAthenaSupplyDrop_C_OnRep_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Setup Bind To Building Actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::Setup_Bind_To_Building_Actor(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.Setup Bind To Building Actor");

	AAthenaSupplyDrop_C_Setup_Bind_To_Building_Actor_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AAthenaSupplyDrop_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintGetInteractionString");

	AAthenaSupplyDrop_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.GetLootSpawnLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 LootSpawnLocation              (Parm, OutParm, IsPlainOldData)

void AAthenaSupplyDrop_C::GetLootSpawnLocation(struct FVector* LootSpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.GetLootSpawnLocation");

	AAthenaSupplyDrop_C_GetLootSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LootSpawnLocation != nullptr)
		*LootSpawnLocation = params.LootSpawnLocation;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnLoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::SpawnLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnLoot");

	AAthenaSupplyDrop_C_SpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthenaSupplyDrop_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintCanInteract");

	AAthenaSupplyDrop_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.UserConstructionScript");

	AAthenaSupplyDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.FallAudioTimeline__FinishedFunc
// (BlueprintEvent)

void AAthenaSupplyDrop_C::FallAudioTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.FallAudioTimeline__FinishedFunc");

	AAthenaSupplyDrop_C_FallAudioTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.FallAudioTimeline__UpdateFunc
// (BlueprintEvent)

void AAthenaSupplyDrop_C::FallAudioTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.FallAudioTimeline__UpdateFunc");

	AAthenaSupplyDrop_C_FallAudioTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthenaSupplyDrop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.ReceiveBeginPlay");

	AAthenaSupplyDrop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLandingLocationChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AAthenaSupplyDrop_C::OnLandingLocationChanged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLandingLocationChanged");

	AAthenaSupplyDrop_C_OnLandingLocationChanged_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Multicast_ApplyGravityForFall
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::Multicast_ApplyGravityForFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.Multicast_ApplyGravityForFall");

	AAthenaSupplyDrop_C_Multicast_ApplyGravityForFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAthenaSupplyDrop_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	AAthenaSupplyDrop_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthenaSupplyDrop_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathServer");

	AAthenaSupplyDrop_C_OnDeathServer_Params params;
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


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintOnInteract");

	AAthenaSupplyDrop_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthenaSupplyDrop_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathPlayEffects");

	AAthenaSupplyDrop_C_OnDeathPlayEffects_Params params;
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


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BeginFallAudioTimeline
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::BeginFallAudioTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BeginFallAudioTimeline");

	AAthenaSupplyDrop_C_BeginFallAudioTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.StopFallAudioTimeline
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::StopFallAudioTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.StopFallAudioTimeline");

	AAthenaSupplyDrop_C_StopFallAudioTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnFirstSupplyDropOfWaveSpawned
// (Event, Public, BlueprintEvent)

void AAthenaSupplyDrop_C::OnFirstSupplyDropOfWaveSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnFirstSupplyDropOfWaveSpawned");

	AAthenaSupplyDrop_C_OnFirstSupplyDropOfWaveSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ExecuteUbergraph_AthenaSupplyDrop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::ExecuteUbergraph_AthenaSupplyDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.ExecuteUbergraph_AthenaSupplyDrop");

	AAthenaSupplyDrop_C_ExecuteUbergraph_AthenaSupplyDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
