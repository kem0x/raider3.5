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

// Function BluGlo_Node.BluGlo_Node_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABluGlo_Node_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.BlueprintGetInteractionString");

	ABluGlo_Node_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BluGlo_Node.BluGlo_Node_C.OnRep_CanInteract
// (BlueprintCallable, BlueprintEvent)

void ABluGlo_Node_C::OnRep_CanInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.OnRep_CanInteract");

	ABluGlo_Node_C_OnRep_CanInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABluGlo_Node_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.BlueprintCanInteract");

	ABluGlo_Node_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BluGlo_Node.BluGlo_Node_C.OnRep_DeActivateEffects
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABluGlo_Node_C::OnRep_DeActivateEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.OnRep_DeActivateEffects");

	ABluGlo_Node_C_OnRep_DeActivateEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.OnRep_ActivateEffects
// (BlueprintCallable, BlueprintEvent)

void ABluGlo_Node_C::OnRep_ActivateEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.OnRep_ActivateEffects");

	ABluGlo_Node_C_OnRep_ActivateEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABluGlo_Node_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.UserConstructionScript");

	ABluGlo_Node_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.Trail__FinishedFunc
// (BlueprintEvent)

void ABluGlo_Node_C::Trail__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.Trail__FinishedFunc");

	ABluGlo_Node_C_Trail__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.Trail__UpdateFunc
// (BlueprintEvent)

void ABluGlo_Node_C::Trail__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.Trail__UpdateFunc");

	ABluGlo_Node_C_Trail__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABluGlo_Node_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.ReceiveBeginPlay");

	ABluGlo_Node_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABluGlo_Node_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.BlueprintOnInteract");

	ABluGlo_Node_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.HandleMissionEvent_LocateBluGlo
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

void ABluGlo_Node_C::HandleMissionEvent_LocateBluGlo(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.HandleMissionEvent_LocateBluGlo");

	ABluGlo_Node_C_HandleMissionEvent_LocateBluGlo_Params params;
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


// Function BluGlo_Node.BluGlo_Node_C.ShowSpawnTrail
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          AnimDelay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABluGlo_Node_C::ShowSpawnTrail(const struct FVector& StartLocation, float AnimDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.ShowSpawnTrail");

	ABluGlo_Node_C_ShowSpawnTrail_Params params;
	params.StartLocation = StartLocation;
	params.AnimDelay = AnimDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BluGlo_Node.BluGlo_Node_C.ExecuteUbergraph_BluGlo_Node
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABluGlo_Node_C::ExecuteUbergraph_BluGlo_Node(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BluGlo_Node.BluGlo_Node_C.ExecuteUbergraph_BluGlo_Node");

	ABluGlo_Node_C_ExecuteUbergraph_BluGlo_Node_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
