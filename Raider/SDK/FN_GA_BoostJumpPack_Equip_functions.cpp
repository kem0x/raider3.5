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

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetGadgetItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFortItem* UGA_BoostJumpPack_Equip_C::GetGadgetItem(class AFortPlayerPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetGadgetItem");

	UGA_BoostJumpPack_Equip_C_GetGadgetItem_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerControllerZone* AsFort_Player_Controller_Zone  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_BoostJumpPack_Equip_C::GetPlayerController(class AFortPlayerPawn* Pawn, class AFortPlayerControllerZone** AsFort_Player_Controller_Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetPlayerController");

	UGA_BoostJumpPack_Equip_C_GetPlayerController_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Player_Controller_Zone != nullptr)
		*AsFort_Player_Controller_Zone = params.AsFort_Player_Controller_Zone;
}


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.IsAuthority
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAuthority                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_BoostJumpPack_Equip_C::IsAuthority(bool* bAuthority)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.IsAuthority");

	UGA_BoostJumpPack_Equip_C_IsAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAuthority != nullptr)
		*bAuthority = params.bAuthority;
}


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_BoostJumpPack_Equip_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_CanActivateAbility");

	UGA_BoostJumpPack_Equip_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_BoostJumpPack_Equip_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_ActivateAbility");

	UGA_BoostJumpPack_Equip_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.ExecuteUbergraph_GA_BoostJumpPack_Equip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_BoostJumpPack_Equip_C::ExecuteUbergraph_GA_BoostJumpPack_Equip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.ExecuteUbergraph_GA_BoostJumpPack_Equip");

	UGA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
