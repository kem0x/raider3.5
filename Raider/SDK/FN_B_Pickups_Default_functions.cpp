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

// Function B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_Default_C::Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param");

	AB_Pickups_Default_C_Set_Initial_BKGD_Param_Params params;
	params.Mid = Mid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.Setup Light
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Default_C::Setup_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.Setup Light");

	AB_Pickups_Default_C_Setup_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Default_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.UserConstructionScript");

	AB_Pickups_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.Randomize Mesh Rotation for BR
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Default_C::Randomize_Mesh_Rotation_for_BR()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.Randomize Mesh Rotation for BR");

	AB_Pickups_Default_C_Randomize_Mesh_Rotation_for_BR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.OnTossed
// (Event, Public, BlueprintEvent)

void AB_Pickups_Default_C::OnTossed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.OnTossed");

	AB_Pickups_Default_C_OnTossed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.OnPickedUp
// (Event, Public, BlueprintEvent)

void AB_Pickups_Default_C::OnPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.OnPickedUp");

	AB_Pickups_Default_C_OnPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_Default_C::ExecuteUbergraph_B_Pickups_Default(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default");

	AB_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
