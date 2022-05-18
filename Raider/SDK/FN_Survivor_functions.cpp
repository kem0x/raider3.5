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

// Function Survivor.Survivor_C.IsAppearanceApplied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsApplied                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASurvivor_C::IsAppearanceApplied(bool* IsApplied)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.IsAppearanceApplied");

	ASurvivor_C_IsAppearanceApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsApplied != nullptr)
		*IsApplied = params.IsApplied;
}


// Function Survivor.Survivor_C.OnRep_InteractionBangEnabled
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::OnRep_InteractionBangEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.OnRep_InteractionBangEnabled");

	ASurvivor_C_OnRep_InteractionBangEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.InteractionBangVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASurvivor_C::InteractionBangVisibility(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.InteractionBangVisibility");

	ASurvivor_C_InteractionBangVisibility_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.OnRep_TeleportEffectModeReplicated
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::OnRep_TeleportEffectModeReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.OnRep_TeleportEffectModeReplicated");

	ASurvivor_C_OnRep_TeleportEffectModeReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.InitializeMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void ASurvivor_C::InitializeMIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.InitializeMIDs");

	ASurvivor_C_InitializeMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.SetLastHitInfoOnBlackboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESurvivorHitInfoType> SurvivorHitInfoType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASurvivor_C::SetLastHitInfoOnBlackboard(TEnumAsByte<ESurvivorHitInfoType> SurvivorHitInfoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.SetLastHitInfoOnBlackboard");

	ASurvivor_C_SetLastHitInfoOnBlackboard_Params params;
	params.SurvivorHitInfoType = SurvivorHitInfoType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.Set Interact Channel Response
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldInteractChannelBeActive  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASurvivor_C::Set_Interact_Channel_Response(bool ShouldInteractChannelBeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.Set Interact Channel Response");

	ASurvivor_C_Set_Interact_Channel_Response_Params params;
	params.ShouldInteractChannelBeActive = ShouldInteractChannelBeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.OnRep_bToggleInteractChannel
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::OnRep_bToggleInteractChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.OnRep_bToggleInteractChannel");

	ASurvivor_C_OnRep_bToggleInteractChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASurvivor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.UserConstructionScript");

	ASurvivor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ASurvivor_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.OnDamagePlayEffects");

	ASurvivor_C_OnDamagePlayEffects_Params params;
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


// Function Survivor.Survivor_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ASurvivor_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.OnDamageServer");

	ASurvivor_C_OnDamageServer_Params params;
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


// Function Survivor.Survivor_C.StopCowering
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::StopCowering()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.StopCowering");

	ASurvivor_C_StopCowering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.StartCowering
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::StartCowering()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.StartCowering");

	ASurvivor_C_StartCowering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.SurvivorSetLockedInPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LockedInPlace                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASurvivor_C::SurvivorSetLockedInPlace(bool LockedInPlace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.SurvivorSetLockedInPlace");

	ASurvivor_C_SurvivorSetLockedInPlace_Params params;
	params.LockedInPlace = LockedInPlace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.Lock
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::Lock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.Lock");

	ASurvivor_C_Lock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.Unlock
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::Unlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.Unlock");

	ASurvivor_C_Unlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.OnDisplaySentence
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  SpeechText                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASurvivor_C::OnDisplaySentence(struct FText* SpeechText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.OnDisplaySentence");

	ASurvivor_C_OnDisplaySentence_Params params;
	params.SpeechText = SpeechText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.OnClearSentence
// (Event, Protected, BlueprintEvent)

void ASurvivor_C::OnClearSentence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.OnClearSentence");

	ASurvivor_C_OnClearSentence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASurvivor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.ReceiveBeginPlay");

	ASurvivor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.OnSurvivorDowned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             DownedAI                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             DownedInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASurvivor_C::OnSurvivorDowned(class AFortAIPawn* DownedAI, class AController* DownedInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.OnSurvivorDowned");

	ASurvivor_C_OnSurvivorDowned_Params params;
	params.DownedAI = DownedAI;
	params.DownedInstigator = DownedInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASurvivor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.ReceiveEndPlay");

	ASurvivor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::AdditiveHitReactDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.AdditiveHitReactDelay");

	ASurvivor_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.MIDsInitialized
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::MIDsInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.MIDsInitialized");

	ASurvivor_C_MIDsInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.OnAppearanceOverridden
// (Event, Protected, BlueprintEvent)

void ASurvivor_C::OnAppearanceOverridden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.OnAppearanceOverridden");

	ASurvivor_C_OnAppearanceOverridden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.PlayTeleportOut
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::PlayTeleportOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.PlayTeleportOut");

	ASurvivor_C_PlayTeleportOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.PlayTeleportIn
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::PlayTeleportIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.PlayTeleportIn");

	ASurvivor_C_PlayTeleportIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.GameplayCue.Teleport.In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ASurvivor_C::GameplayCue_Teleport_In(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.GameplayCue.Teleport.In");

	ASurvivor_C_GameplayCue_Teleport_In_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.GameplayCue.Teleport.Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ASurvivor_C::GameplayCue_Teleport_Out(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.GameplayCue.Teleport.Out");

	ASurvivor_C_GameplayCue_Teleport_Out_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.ShowInteractionBang
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASurvivor_C::ShowInteractionBang(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.ShowInteractionBang");

	ASurvivor_C_ShowInteractionBang_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Survivor.Survivor_C.ExecuteUbergraph_Survivor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASurvivor_C::ExecuteUbergraph_Survivor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Survivor.Survivor_C.ExecuteUbergraph_Survivor");

	ASurvivor_C_ExecuteUbergraph_Survivor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
