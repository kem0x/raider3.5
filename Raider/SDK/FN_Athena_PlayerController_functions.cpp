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

// Function Athena_PlayerController.Athena_PlayerController_C.IsLocalPlayerFriendsWithSquadMember
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState**       SquadMember                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthena_PlayerController_C::IsLocalPlayerFriendsWithSquadMember(class AFortPlayerState** SquadMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.IsLocalPlayerFriendsWithSquadMember");

	AAthena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember_Params params;
	params.SquadMember = SquadMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript");

	AAthena_PlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  FinisherPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWeaponItemDefinition** FinishingWeapon                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDeathCause*                   DeathCause                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::PlayWinEffects(class APawn** FinisherPawn, class UFortWeaponItemDefinition** FinishingWeapon, EDeathCause* DeathCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects");

	AAthena_PlayerController_C_PlayWinEffects_Params params;
	params.FinisherPawn = FinisherPawn;
	params.FinishingWeapon = FinishingWeapon;
	params.DeathCause = DeathCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay");

	AAthena_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::ExecuteUbergraph_Athena_PlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController");

	AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
