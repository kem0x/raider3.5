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

// Function Mimic_Mission.Mimic_Mission_C.OnMimicSpawned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHuskPawn_Mimic_C*       MimicPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMimic_Mission_C::OnMimicSpawned(class AHuskPawn_Mimic_C* MimicPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.OnMimicSpawned");

	AMimic_Mission_C_OnMimicSpawned_Params params;
	params.MimicPawn = MimicPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.OnChestInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMimic_Mission_C::OnChestInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.OnChestInteract");

	AMimic_Mission_C_OnChestInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.HideFoundMimicText
// (Public, BlueprintCallable, BlueprintEvent)

void AMimic_Mission_C::HideFoundMimicText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.HideFoundMimicText");

	AMimic_Mission_C_HideFoundMimicText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.InitializeMimicChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMimic_Chest_C*          MimicChest                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWakeOnDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMimic_Mission_C::InitializeMimicChest(class AMimic_Chest_C* MimicChest, bool bWakeOnDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.InitializeMimicChest");

	AMimic_Mission_C_InitializeMimicChest_Params params;
	params.MimicChest = MimicChest;
	params.bWakeOnDamage = bWakeOnDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.TryGiveRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMimic_Mission_C::TryGiveRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.TryGiveRewards");

	AMimic_Mission_C_TryGiveRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.RestartDormantChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMimic_Mission_C::RestartDormantChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.RestartDormantChest");

	AMimic_Mission_C_RestartDormantChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.InitMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMimic_Mission_C::InitMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.InitMission");

	AMimic_Mission_C_InitMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMimic_Mission_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.UserConstructionScript");

	AMimic_Mission_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_MissionSucceeded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   InMissionGuid                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams* Params                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMimic_Mission_C::HandleMissionEvent_MissionSucceeded(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_MissionSucceeded");

	AMimic_Mission_C_HandleMissionEvent_MissionSucceeded_Params params;
	params.InMissionGuid = InMissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_ObjectiveSucceeded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   InMissionGuid                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams* Params                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMimic_Mission_C::HandleMissionEvent_ObjectiveSucceeded(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_ObjectiveSucceeded");

	AMimic_Mission_C_HandleMissionEvent_ObjectiveSucceeded_Params params;
	params.InMissionGuid = InMissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_LocateSecondary
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   InMissionGuid                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams* Params                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMimic_Mission_C::HandleMissionEvent_LocateSecondary(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_LocateSecondary");

	AMimic_Mission_C_HandleMissionEvent_LocateSecondary_Params params;
	params.InMissionGuid = InMissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.OnMimicDied_Event
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

void AMimic_Mission_C::OnMimicDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.OnMimicDied_Event");

	AMimic_Mission_C_OnMimicDied_Event_Params params;
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


// Function Mimic_Mission.Mimic_Mission_C.OnEncounterEnemySpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAIEncounterInfo*    Encounter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortAIPawn*             SpawnedEnemy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMimic_Mission_C::OnEncounterEnemySpawned(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.OnEncounterEnemySpawned");

	AMimic_Mission_C_OnEncounterEnemySpawned_Params params;
	params.Encounter = Encounter;
	params.SpawnedEnemy = SpawnedEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.OnInteractingPlayerDied_Event
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

void AMimic_Mission_C::OnInteractingPlayerDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.OnInteractingPlayerDied_Event");

	AMimic_Mission_C_OnInteractingPlayerDied_Event_Params params;
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


// Function Mimic_Mission.Mimic_Mission_C.OnMimicChestDamaged
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

void AMimic_Mission_C::OnMimicChestDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.OnMimicChestDamaged");

	AMimic_Mission_C_OnMimicChestDamaged_Params params;
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


// Function Mimic_Mission.Mimic_Mission_C.BlueprintOnActivated
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void AMimic_Mission_C::BlueprintOnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.BlueprintOnActivated");

	AMimic_Mission_C_BlueprintOnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.Event_OnMimicDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMimic_Mission_C::Event_OnMimicDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.Event_OnMimicDestroyed");

	AMimic_Mission_C_Event_OnMimicDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mimic_Mission.Mimic_Mission_C.ExecuteUbergraph_Mimic_Mission
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMimic_Mission_C::ExecuteUbergraph_Mimic_Mission(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mimic_Mission.Mimic_Mission_C.ExecuteUbergraph_Mimic_Mission");

	AMimic_Mission_C_ExecuteUbergraph_Mimic_Mission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
