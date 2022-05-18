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

// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.BP_ShouldTrigger
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>*         TouchingActors                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATrap_Floor_Hoverboard_Speed_C::BP_ShouldTrigger(TArray<class AActor*>* TouchingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.BP_ShouldTrigger");

	ATrap_Floor_Hoverboard_Speed_C_BP_ShouldTrigger_Params params;
	params.TouchingActors = TouchingActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.UserConstructionScript");

	ATrap_Floor_Hoverboard_Speed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnPlaced");

	ATrap_Floor_Hoverboard_Speed_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnOutOfDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnOutOfDurability");

	ATrap_Floor_Hoverboard_Speed_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnFinishedBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnFinishedBuilding");

	ATrap_Floor_Hoverboard_Speed_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnWorldReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnWorldReady");

	ATrap_Floor_Hoverboard_Speed_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.ExecuteUbergraph_Trap_Floor_Hoverboard_Speed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Hoverboard_Speed_C::ExecuteUbergraph_Trap_Floor_Hoverboard_Speed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.ExecuteUbergraph_Trap_Floor_Hoverboard_Speed");

	ATrap_Floor_Hoverboard_Speed_C_ExecuteUbergraph_Trap_Floor_Hoverboard_Speed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
