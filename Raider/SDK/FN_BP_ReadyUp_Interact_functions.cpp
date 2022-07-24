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

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReturnBluGloToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UFortInventoryOwnerInterface> InventoryOwner                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberBGtoReturn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReadyUp_Interact_C::ReturnBluGloToPlayer(const TScriptInterface<class UFortInventoryOwnerInterface>& InventoryOwner, int NumberBGtoReturn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReturnBluGloToPlayer");

	ABP_ReadyUp_Interact_C_ReturnBluGloToPlayer_Params params;
	params.InventoryOwner = InventoryOwner;
	params.NumberBGtoReturn = NumberBGtoReturn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.TakeBluGloFromPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberBGtoTake                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReadyUp_Interact_C::TakeBluGloFromPlayer(class AFortPlayerController* PlayerController, int NumberBGtoTake)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.TakeBluGloFromPlayer");

	ABP_ReadyUp_Interact_C_TakeBluGloFromPlayer_Params params;
	params.PlayerController = PlayerController;
	params.NumberBGtoTake = NumberBGtoTake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_CanInteract
// (BlueprintCallable, BlueprintEvent)

void ABP_ReadyUp_Interact_C::OnRep_CanInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_CanInteract");

	ABP_ReadyUp_Interact_C_OnRep_CanInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ReadyUp_Interact_C::ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ShouldDie");

	ABP_ReadyUp_Interact_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_ReadyUp_Interact_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintGetInteractionString");

	ABP_ReadyUp_Interact_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ReadyUp_Interact_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintCanInteract");

	ABP_ReadyUp_Interact_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ReadyUp_Interact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.UserConstructionScript");

	ABP_ReadyUp_Interact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReadyUp_Interact_C::OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE");

	ABP_ReadyUp_Interact_C_OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ReadyUp_Interact_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReceiveBeginPlay");

	ABP_ReadyUp_Interact_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OpenMissionControl
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ReadyUp_Interact_C::OpenMissionControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OpenMissionControl");

	ABP_ReadyUp_Interact_C_OpenMissionControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReadyUp_Interact_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintOnInteract");

	ABP_ReadyUp_Interact_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.VoteCalled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortVoteStatus                VoteStatus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            VoteResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVoter>          Voters                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ReadyUp_Interact_C::VoteCalled(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int VoteResult, TArray<struct FVoter> Voters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.VoteCalled");

	ABP_ReadyUp_Interact_C_VoteCalled_Params params;
	params.VoteType = VoteType;
	params.VoteStatus = VoteStatus;
	params.VoteResult = VoteResult;
	params.Voters = Voters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ExecuteUbergraph_BP_ReadyUp_Interact
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReadyUp_Interact_C::ExecuteUbergraph_BP_ReadyUp_Interact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ExecuteUbergraph_BP_ReadyUp_Interact");

	ABP_ReadyUp_Interact_C_ExecuteUbergraph_BP_ReadyUp_Interact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
