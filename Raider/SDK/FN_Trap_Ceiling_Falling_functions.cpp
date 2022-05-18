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

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleTiresAndFX
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Ceiling_Falling_C::ToggleTiresAndFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleTiresAndFX");

	ATrap_Ceiling_Falling_C_ToggleTiresAndFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleDoors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bToggle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Ceiling_Falling_C::ToggleDoors(bool bToggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleDoors");

	ATrap_Ceiling_Falling_C_ToggleDoors_Params params;
	params.bToggle = bToggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OnRep_bActivated
// (BlueprintCallable, BlueprintEvent)

void ATrap_Ceiling_Falling_C::OnRep_bActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OnRep_bActivated");

	ATrap_Ceiling_Falling_C_OnRep_bActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleTireVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Ceiling_Falling_C::ToggleTireVisibility(bool NewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleTireVisibility");

	ATrap_Ceiling_Falling_C_ToggleTireVisibility_Params params;
	params.NewHidden = NewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Ceiling_Falling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.UserConstructionScript");

	ATrap_Ceiling_Falling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoor__FinishedFunc
// (BlueprintEvent)

void ATrap_Ceiling_Falling_C::OpenDoor__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoor__FinishedFunc");

	ATrap_Ceiling_Falling_C_OpenDoor__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoor__UpdateFunc
// (BlueprintEvent)

void ATrap_Ceiling_Falling_C::OpenDoor__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoor__UpdateFunc");

	ATrap_Ceiling_Falling_C_OpenDoor__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Ceiling_Falling_C::OnPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OnPlaced");

	ATrap_Ceiling_Falling_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.TrapActivated
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         CooldownDuration               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Ceiling_Falling_C::TrapActivated(float* CooldownDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.TrapActivated");

	ATrap_Ceiling_Falling_C_TrapActivated_Params params;
	params.CooldownDuration = CooldownDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ShowTires
// (BlueprintCallable, BlueprintEvent)

void ATrap_Ceiling_Falling_C::ShowTires()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ShowTires");

	ATrap_Ceiling_Falling_C_ShowTires_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.FireDustFX
// (BlueprintCallable, BlueprintEvent)

void ATrap_Ceiling_Falling_C::FireDustFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.FireDustFX");

	ATrap_Ceiling_Falling_C_FireDustFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoors
// (BlueprintCallable, BlueprintEvent)

void ATrap_Ceiling_Falling_C::OpenDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoors");

	ATrap_Ceiling_Falling_C_OpenDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.CloseDoors
// (BlueprintCallable, BlueprintEvent)

void ATrap_Ceiling_Falling_C::CloseDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.CloseDoors");

	ATrap_Ceiling_Falling_C_CloseDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ExecuteUbergraph_Trap_Ceiling_Falling
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Ceiling_Falling_C::ExecuteUbergraph_Trap_Ceiling_Falling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ExecuteUbergraph_Trap_Ceiling_Falling");

	ATrap_Ceiling_Falling_C_ExecuteUbergraph_Trap_Ceiling_Falling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
