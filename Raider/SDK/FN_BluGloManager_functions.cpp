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

// Function BluGloManager.BluGloManager_C.PrintDebugInfoForBluGloToSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATiered_BluGlo_Parent_C*> TargetArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABluGloManager_C::PrintDebugInfoForBluGloToSpawn(TArray<class ATiered_BluGlo_Parent_C*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.PrintDebugInfoForBluGloToSpawn");

	ABluGloManager_C_PrintDebugInfoForBluGloToSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BluGloManager.BluGloManager_C.IssueBluGloRequestForMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMission*            Mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToSpawnBluGloFrom         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABluGloManager_C::IssueBluGloRequestForMission(class AFortMission* Mission, class AActor* ActorToSpawnBluGloFrom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.IssueBluGloRequestForMission");

	ABluGloManager_C_IssueBluGloRequestForMission_Params params;
	params.Mission = Mission;
	params.ActorToSpawnBluGloFrom = ActorToSpawnBluGloFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.StartSpawnFXAndAudio
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnCenter                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UParticleSystemComponent* SpawnFXEmitter                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABluGloManager_C::StartSpawnFXAndAudio(const struct FVector& SpawnCenter, class UParticleSystemComponent** SpawnFXEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.StartSpawnFXAndAudio");

	ABluGloManager_C_StartSpawnFXAndAudio_Params params;
	params.SpawnCenter = SpawnCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnFXEmitter != nullptr)
		*SpawnFXEmitter = params.SpawnFXEmitter;
}


// Function BluGloManager.BluGloManager_C.SpawnBluGloGroup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToSpawnFrom               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationToSpawnFromIfActorInvalid (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumBluGloToSpawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABluGloManager_C::SpawnBluGloGroup(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.SpawnBluGloGroup");

	ABluGloManager_C_SpawnBluGloGroup_Params params;
	params.ActorToSpawnFrom = ActorToSpawnFrom;
	params.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;
	params.QueryStatus = QueryStatus;
	params.QueryInstance = QueryInstance;
	params.NumBluGloToSpawn = NumBluGloToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.ChooseSpawnCenter
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToSpawnFrom               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationToSpawnFrom            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 SpawnCenter                    (Parm, OutParm, IsPlainOldData)

void ABluGloManager_C::ChooseSpawnCenter(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFrom, struct FVector* SpawnCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.ChooseSpawnCenter");

	ABluGloManager_C_ChooseSpawnCenter_Params params;
	params.ActorToSpawnFrom = ActorToSpawnFrom;
	params.LocationToSpawnFrom = LocationToSpawnFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnCenter != nullptr)
		*SpawnCenter = params.SpawnCenter;
}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsRandomly
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LocationToSpawnFrom            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            NumBluGloToSpawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         LocationsForSpawningBluGlo     (Parm, OutParm, ZeroConstructor)

void ABluGloManager_C::BuildSpawnLocationsRandomly(const struct FVector& LocationToSpawnFrom, int NumBluGloToSpawn, TArray<struct FVector>* LocationsForSpawningBluGlo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.BuildSpawnLocationsRandomly");

	ABluGloManager_C_BuildSpawnLocationsRandomly_Params params;
	params.LocationToSpawnFrom = LocationToSpawnFrom;
	params.NumBluGloToSpawn = NumBluGloToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = params.LocationsForSpawningBluGlo;
}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsFromQueryLocations
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumBluGloToSpawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         QueryResultLocations           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         LocationsForSpawningBluGlo     (Parm, OutParm, ZeroConstructor)

void ABluGloManager_C::BuildSpawnLocationsFromQueryLocations(int NumBluGloToSpawn, TArray<struct FVector>* QueryResultLocations, TArray<struct FVector>* LocationsForSpawningBluGlo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.BuildSpawnLocationsFromQueryLocations");

	ABluGloManager_C_BuildSpawnLocationsFromQueryLocations_Params params;
	params.NumBluGloToSpawn = NumBluGloToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueryResultLocations != nullptr)
		*QueryResultLocations = params.QueryResultLocations;
	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = params.LocationsForSpawningBluGlo;
}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocations
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumBluGloToSpawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnCenter                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<struct FVector>         LocationsForSpawningBluGlo     (Parm, OutParm, ZeroConstructor)

void ABluGloManager_C::BuildSpawnLocations(TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn, const struct FVector& SpawnCenter, TArray<struct FVector>* LocationsForSpawningBluGlo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.BuildSpawnLocations");

	ABluGloManager_C_BuildSpawnLocations_Params params;
	params.QueryStatus = QueryStatus;
	params.QueryInstance = QueryInstance;
	params.NumBluGloToSpawn = NumBluGloToSpawn;
	params.SpawnCenter = SpawnCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = params.LocationsForSpawningBluGlo;
}


// Function BluGloManager.BluGloManager_C.IssueBluGloRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumBluGloToSpawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToSpawnFrom               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationToSpawnFromIfActorInvalid (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABluGloManager_C::IssueBluGloRequest(int NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.IssueBluGloRequest");

	ABluGloManager_C_IssueBluGloRequest_Params params;
	params.NumBluGloToSpawn = NumBluGloToSpawn;
	params.ActorToSpawnFrom = ActorToSpawnFrom;
	params.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.SpawnBluGlo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 SpawnFromLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABluGloManager_C::SpawnBluGlo(const struct FVector& SpawnLocation, const struct FVector& SpawnFromLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.SpawnBluGlo");

	ABluGloManager_C_SpawnBluGlo_Params params;
	params.SpawnLocation = SpawnLocation;
	params.SpawnFromLocation = SpawnFromLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.RemoveOccupiedNodes
// (Public, BlueprintCallable, BlueprintEvent)

void ABluGloManager_C::RemoveOccupiedNodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.RemoveOccupiedNodes");

	ABluGloManager_C_RemoveOccupiedNodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.RequestedBluGo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMission*            Mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EQS_Start_Location             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABluGloManager_C::RequestedBluGo(class AFortMission* Mission, const struct FVector& EQS_Start_Location, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.RequestedBluGo");

	ABluGloManager_C_RequestedBluGo_Params params;
	params.Mission = Mission;
	params.EQS_Start_Location = EQS_Start_Location;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABluGloManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.UserConstructionScript");

	ABluGloManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseEQS
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

void ABluGloManager_C::HandleMissionEvent_RequestBluGloSpawnUseEQS(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseEQS");

	ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseEQS_Params params;
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


// Function BluGloManager.BluGloManager_C.StopSpawnFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           off                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABluGloManager_C::StopSpawnFX(bool off)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.StopSpawnFX");

	ABluGloManager_C_StopSpawnFX_Params params;
	params.off = off;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseActor
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

void ABluGloManager_C::HandleMissionEvent_RequestBluGloSpawnUseActor(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseActor");

	ABluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseActor_Params params;
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


// Function BluGloManager.BluGloManager_C.OnBluGloQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToSpawnFrom               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationToSpawnFromIfActorInvalid (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumBluGloToSpawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABluGloManager_C::OnBluGloQueryFinished(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.OnBluGloQueryFinished");

	ABluGloManager_C_OnBluGloQueryFinished_Params params;
	params.ActorToSpawnFrom = ActorToSpawnFrom;
	params.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;
	params.QueryStatus = QueryStatus;
	params.QueryInstance = QueryInstance;
	params.NumBluGloToSpawn = NumBluGloToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.SpawnFXComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABluGloManager_C::SpawnFXComplete(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.SpawnFXComplete");

	ABluGloManager_C_SpawnFXComplete_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.SpawnBluGloGroupEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnCenter                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABluGloManager_C::SpawnBluGloGroupEvent(const struct FVector& SpawnCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.SpawnBluGloGroupEvent");

	ABluGloManager_C_SpawnBluGloGroupEvent_Params params;
	params.SpawnCenter = SpawnCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.AddMoreBluGloInWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMission*            Mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABluGloManager_C::AddMoreBluGloInWorld(class AFortMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.AddMoreBluGloInWorld");

	ABluGloManager_C_AddMoreBluGloInWorld_Params params;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloManager.BluGloManager_C.ExecuteUbergraph_BluGloManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABluGloManager_C::ExecuteUbergraph_BluGloManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloManager.BluGloManager_C.ExecuteUbergraph_BluGloManager");

	ABluGloManager_C_ExecuteUbergraph_BluGloManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
