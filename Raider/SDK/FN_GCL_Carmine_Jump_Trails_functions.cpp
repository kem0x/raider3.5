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

// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_Carmine_Jump_Trails_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.UserConstructionScript");

	AGCL_Carmine_Jump_Trails_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_Carmine_Jump_Trails_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ReceiveBeginPlay");

	AGCL_Carmine_Jump_Trails_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Carmine_Jump_Trails_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ReceiveEndPlay");

	AGCL_Carmine_Jump_Trails_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ExecuteUbergraph_GCL_Carmine_Jump_Trails
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Carmine_Jump_Trails_C::ExecuteUbergraph_GCL_Carmine_Jump_Trails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C.ExecuteUbergraph_GCL_Carmine_Jump_Trails");

	AGCL_Carmine_Jump_Trails_C_ExecuteUbergraph_GCL_Carmine_Jump_Trails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
