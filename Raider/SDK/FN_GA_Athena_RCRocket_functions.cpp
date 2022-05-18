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

// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Forward Adjustment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGA_Athena_RCRocket_C::Calculate_Launch_Forward_Adjustment()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Forward Adjustment");

	UGA_Athena_RCRocket_C_Calculate_Launch_Forward_Adjustment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Up Adjustment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGA_Athena_RCRocket_C::Calculate_Launch_Up_Adjustment()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Up Adjustment");

	UGA_Athena_RCRocket_C_Calculate_Launch_Up_Adjustment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Right Adjustment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGA_Athena_RCRocket_C::Calculate_Launch_Right_Adjustment()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.Calculate Launch Right Adjustment");

	UGA_Athena_RCRocket_C_Calculate_Launch_Right_Adjustment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.CalculateRocketSpawnLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void UGA_Athena_RCRocket_C::CalculateRocketSpawnLocation(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.CalculateRocketSpawnLocation");

	UGA_Athena_RCRocket_C_CalculateRocketSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.GetAthenaPlayerPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawnAthena*   AsFort_Player_Pawn_Athena      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_RCRocket_C::GetAthenaPlayerPawn(class AFortPlayerPawnAthena** AsFort_Player_Pawn_Athena)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.GetAthenaPlayerPawn");

	UGA_Athena_RCRocket_C_GetAthenaPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Player_Pawn_Athena != nullptr)
		*AsFort_Player_Pawn_Athena = params.AsFort_Player_Pawn_Athena;
}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.GetAthenaPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerControllerAthena* AsFort_Player_Controller_Athena (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_RCRocket_C::GetAthenaPlayerController(class AFortPlayerControllerAthena** AsFort_Player_Controller_Athena)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.GetAthenaPlayerController");

	UGA_Athena_RCRocket_C_GetAthenaPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Player_Controller_Athena != nullptr)
		*AsFort_Player_Controller_Athena = params.AsFort_Player_Controller_Athena;
}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_RCRocket_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.K2_ActivateAbility");

	UGA_Athena_RCRocket_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.ExecuteUbergraph_GA_Athena_RCRocket
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_RCRocket_C::ExecuteUbergraph_GA_Athena_RCRocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RCRocket.GA_Athena_RCRocket_C.ExecuteUbergraph_GA_Athena_RCRocket");

	UGA_Athena_RCRocket_C_ExecuteUbergraph_GA_Athena_RCRocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
