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

// Function B_Constructor_BASE.B_Constructor_BASE_C.UpdateAudioCrossfade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::UpdateAudioCrossfade(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.UpdateAudioCrossfade");

	AB_Constructor_BASE_C_UpdateAudioCrossfade_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.GetFeelTheBaseTraceLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              TraceLocation                  (Parm, OutParm, IsPlainOldData)

void AB_Constructor_BASE_C::GetFeelTheBaseTraceLocation(struct FTransform* TraceLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.GetFeelTheBaseTraceLocation");

	AB_Constructor_BASE_C_GetFeelTheBaseTraceLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceLocation != nullptr)
		*TraceLocation = params.TraceLocation;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceWithAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItemDefinition* ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AmountToSpawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortResourceType> ResourceType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::SpawnResourceWithAmount(class UFortWorldItemDefinition* ItemDefinition, int AmountToSpawn, TEnumAsByte<EFortResourceType> ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceWithAmount");

	AB_Constructor_BASE_C_SpawnResourceWithAmount_Params params;
	params.ItemDefinition = ItemDefinition;
	params.AmountToSpawn = AmountToSpawn;
	params.ResourceType = ResourceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetHealingMultiplier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::SetHealingMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetHealingMultiplier");

	AB_Constructor_BASE_C_SetHealingMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupTrapEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilityComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Constructor_BASE_C::SetupTrapEffects(class UAbilitySystemComponent* AbilityComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetupTrapEffects");

	AB_Constructor_BASE_C_SetupTrapEffects_Params params;
	params.AbilityComponent = AbilityComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.GetTrapGEFromTag
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   InTag                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                  OutGE                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::GetTrapGEFromTag(const struct FGameplayTagContainer& InTag, class UClass** OutGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.GetTrapGEFromTag");

	AB_Constructor_BASE_C_GetTrapGEFromTag_Params params;
	params.InTag = InTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGE != nullptr)
		*OutGE = params.OutGE;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_InitialStaticMeshAnimationIsComplete
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::OnRep_InitialStaticMeshAnimationIsComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_InitialStaticMeshAnimationIsComplete");

	AB_Constructor_BASE_C_OnRep_InitialStaticMeshAnimationIsComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseSelfApplyGameplaySpec
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle GE_Spec                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Constructor_BASE_C::BaseSelfApplyGameplaySpec(const struct FGameplayEffectSpecHandle& GE_Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BaseSelfApplyGameplaySpec");

	AB_Constructor_BASE_C_BaseSelfApplyGameplaySpec_Params params;
	params.GE_Spec = GE_Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetBaseVisualGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Constructor_BASE_C::SetBaseVisualGlow(class UAbilitySystemComponent* AbilitySystemComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetBaseVisualGlow");

	AB_Constructor_BASE_C_SetBaseVisualGlow_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetDamageMultiplier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::SetDamageMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetDamageMultiplier");

	AB_Constructor_BASE_C_SetDamageMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_CollectResources
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::OnRep_CollectResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_CollectResources");

	AB_Constructor_BASE_C_OnRep_CollectResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AB_Constructor_BASE_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintGetInteractionString");

	AB_Constructor_BASE_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.AddResourceToStack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructRecyclingResource RecyclingResource              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortWorldItemDefinition* Stored_Resource                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AmountToSpawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStructRecyclingResource SetValue                       (Parm, OutParm)

void AB_Constructor_BASE_C::AddResourceToStack(const struct FStructRecyclingResource& RecyclingResource, class UFortWorldItemDefinition* Stored_Resource, int AmountToSpawn, struct FStructRecyclingResource* SetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.AddResourceToStack");

	AB_Constructor_BASE_C_AddResourceToStack_Params params;
	params.RecyclingResource = RecyclingResource;
	params.Stored_Resource = Stored_Resource;
	params.AmountToSpawn = AmountToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SetValue != nullptr)
		*SetValue = params.SetValue;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceForRecycling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItemDefinition* ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AmountToSpawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortResourceType> ResourceType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int AmountToSpawn, TEnumAsByte<EFortResourceType> ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceForRecycling");

	AB_Constructor_BASE_C_SpawnResourceForRecycling_Params params;
	params.ItemDefinition = ItemDefinition;
	params.AmountToSpawn = AmountToSpawn;
	params.ResourceType = ResourceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_Constructor_BASE_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintCanInteract");

	AB_Constructor_BASE_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_BaseIsPlaced
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::OnRep_BaseIsPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_BaseIsPlaced");

	AB_Constructor_BASE_C_OnRep_BaseIsPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.RecycleResources
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::RecycleResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.RecycleResources");

	AB_Constructor_BASE_C_RecycleResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupHostileEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FBASEGameplayEffect> HostileEffects                 (Parm, OutParm, ZeroConstructor)

void AB_Constructor_BASE_C::SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* HostileEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetupHostileEffects");

	AB_Constructor_BASE_C_SetupHostileEffects_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HostileEffects != nullptr)
		*HostileEffects = params.HostileEffects;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupFriendlyEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FBASEGameplayEffect> FriendlyEffects                (Parm, OutParm, ZeroConstructor)

void AB_Constructor_BASE_C::SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* FriendlyEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetupFriendlyEffects");

	AB_Constructor_BASE_C_SetupFriendlyEffects_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendlyEffects != nullptr)
		*FriendlyEffects = params.FriendlyEffects;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBuildingEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FBASEGameplayEffect> BuildingEffects                (Parm, OutParm, ZeroConstructor)

void AB_Constructor_BASE_C::SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* BuildingEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBuildingEffects");

	AB_Constructor_BASE_C_SetupBuildingEffects_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingEffects != nullptr)
		*BuildingEffects = params.BuildingEffects;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.Setup Base Effect Array
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* Instigator_Ability_System      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FBASEGameplayEffect> BASEBuildingEffects            (Parm, OutParm, ZeroConstructor)
// TArray<struct FBASEGameplayEffect> BASEFriendlyEffects            (Parm, OutParm, ZeroConstructor)
// TArray<struct FBASEGameplayEffect> BASEHostileEffects             (Parm, OutParm, ZeroConstructor)

void AB_Constructor_BASE_C::Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.Setup Base Effect Array");

	AB_Constructor_BASE_C_Setup_Base_Effect_Array_Params params;
	params.Instigator_Ability_System = Instigator_Ability_System;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BASEBuildingEffects != nullptr)
		*BASEBuildingEffects = params.BASEBuildingEffects;
	if (BASEFriendlyEffects != nullptr)
		*BASEFriendlyEffects = params.BASEFriendlyEffects;
	if (BASEHostileEffects != nullptr)
		*BASEHostileEffects = params.BASEHostileEffects;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBaseDefaultValues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* Ability_System_Component       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            NodesToAffect                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int* NodesToAffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBaseDefaultValues");

	AB_Constructor_BASE_C_SetupBaseDefaultValues_Params params;
	params.Ability_System_Component = Ability_System_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NodesToAffect != nullptr)
		*NodesToAffect = params.NodesToAffect;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.UserConstructionScript");

	AB_Constructor_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnPlaced
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent** InstigatorAbilitySystemComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Constructor_BASE_C::OnPlaced(class UAbilitySystemComponent** InstigatorAbilitySystemComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.OnPlaced");

	AB_Constructor_BASE_C_OnPlaced_Params params;
	params.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.Recycling
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::Recycling()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.Recycling");

	AB_Constructor_BASE_C_Recycling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Constructor_BASE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature");

	AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.AnimateLegs
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LegsUp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::AnimateLegs(bool LegsUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.AnimateLegs");

	AB_Constructor_BASE_C_AnimateLegs_Params params;
	params.LegsUp = LegsUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.StartBuildingActorVisuals
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingSMActor**       BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent**   EffectMeshComp                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Constructor_BASE_C::StartBuildingActorVisuals(class ABuildingSMActor** BuildingActor, class UStaticMeshComponent** EffectMeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.StartBuildingActorVisuals");

	AB_Constructor_BASE_C_StartBuildingActorVisuals_Params params;
	params.BuildingActor = BuildingActor;
	params.EffectMeshComp = EffectMeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.StopBuildingActorVisuals
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingSMActor**       BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent**   EffectMeshComp                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Constructor_BASE_C::StopBuildingActorVisuals(class ABuildingSMActor** BuildingActor, class UStaticMeshComponent** EffectMeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.StopBuildingActorVisuals");

	AB_Constructor_BASE_C_StopBuildingActorVisuals_Params params;
	params.BuildingActor = BuildingActor;
	params.EffectMeshComp = EffectMeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintOnInteract");

	AB_Constructor_BASE_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.GetDamageAmp
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::GetDamageAmp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.GetDamageAmp");

	AB_Constructor_BASE_C_GetDamageAmp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCreated
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::ResourcesCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCreated");

	AB_Constructor_BASE_C_ResourcesCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCollected
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::ResourcesCollected()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCollected");

	AB_Constructor_BASE_C_ResourcesCollected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseIsReadyToAnimate
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::BaseIsReadyToAnimate()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BaseIsReadyToAnimate");

	AB_Constructor_BASE_C_BaseIsReadyToAnimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ShowHiddenMeshes
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::ShowHiddenMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.ShowHiddenMeshes");

	AB_Constructor_BASE_C_ShowHiddenMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ApplyTrapEffects
// (BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::ApplyTrapEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.ApplyTrapEffects");

	AB_Constructor_BASE_C_ApplyTrapEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SaveOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Constructor_C* ConstructorPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::SaveOwner(class APlayerPawn_Constructor_C* ConstructorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SaveOwner");

	AB_Constructor_BASE_C_SaveOwner_Params params;
	params.ConstructorPawn = ConstructorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.FeelTheBaseGlow
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Stack1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Stack2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Stack3                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::FeelTheBaseGlow(bool Stack1, bool Stack2, bool Stack3)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.FeelTheBaseGlow");

	AB_Constructor_BASE_C_FeelTheBaseGlow_Params params;
	params.Stack1 = Stack1;
	params.Stack2 = Stack2;
	params.Stack3 = Stack3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ResetFeelTheBaseGlow
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Constructor_BASE_C::ResetFeelTheBaseGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.ResetFeelTheBaseGlow");

	AB_Constructor_BASE_C_ResetFeelTheBaseGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature");

	AB_Constructor_BASE_C_BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ExecuteUbergraph_B_Constructor_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Constructor_BASE_C::ExecuteUbergraph_B_Constructor_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.ExecuteUbergraph_B_Constructor_BASE");

	AB_Constructor_BASE_C_ExecuteUbergraph_B_Constructor_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
