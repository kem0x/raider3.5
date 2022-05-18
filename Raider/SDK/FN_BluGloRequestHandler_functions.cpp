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

// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsRandomly
// (Public, BlueprintCallable, BlueprintEvent)

void UBluGloRequestHandler_C::BuildLocationsRandomly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsRandomly");

	UBluGloRequestHandler_C_BuildLocationsRandomly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsFromQueryLocations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         QueryResultLocations           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBluGloRequestHandler_C::BuildLocationsFromQueryLocations(TArray<struct FVector>* QueryResultLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsFromQueryLocations");

	UBluGloRequestHandler_C_BuildLocationsFromQueryLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueryResultLocations != nullptr)
		*QueryResultLocations = params.QueryResultLocations;
}


// Function BluGloRequestHandler.BluGloRequestHandler_C.EQSQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBluGloRequestHandler_C::EQSQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloRequestHandler.BluGloRequestHandler_C.EQSQueryFinished");

	UBluGloRequestHandler_C_EQSQueryFinished_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloRequestHandler.BluGloRequestHandler_C.InitializeBluGloRequestHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumBluGloToSpawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToSpawnFrom               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationToSpawnFromIfActorInvalid (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBluGloRequestHandler_C::InitializeBluGloRequestHandler(int NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloRequestHandler.BluGloRequestHandler_C.InitializeBluGloRequestHandler");

	UBluGloRequestHandler_C_InitializeBluGloRequestHandler_Params params;
	params.NumBluGloToSpawn = NumBluGloToSpawn;
	params.ActorToSpawnFrom = ActorToSpawnFrom;
	params.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloRequestHandler.BluGloRequestHandler_C.ExecuteUbergraph_BluGloRequestHandler
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBluGloRequestHandler_C::ExecuteUbergraph_BluGloRequestHandler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloRequestHandler.BluGloRequestHandler_C.ExecuteUbergraph_BluGloRequestHandler");

	UBluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGloRequestHandler.BluGloRequestHandler_C.OnBluGloQueryFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToSpawnFrom               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationToSpawnFromIfActorInvalid (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumBluGloToSpawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBluGloRequestHandler_C::OnBluGloQueryFinished__DelegateSignature(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int NumBluGloToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGloRequestHandler.BluGloRequestHandler_C.OnBluGloQueryFinished__DelegateSignature");

	UBluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature_Params params;
	params.ActorToSpawnFrom = ActorToSpawnFrom;
	params.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;
	params.QueryStatus = QueryStatus;
	params.QueryInstance = QueryInstance;
	params.NumBluGloToSpawn = NumBluGloToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
