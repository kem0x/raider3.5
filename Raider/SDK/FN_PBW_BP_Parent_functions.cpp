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

// Function PBW_BP_Parent.PBW_BP_Parent_C.OnRep_Random Chance
// (BlueprintCallable, BlueprintEvent)

void APBW_BP_Parent_C::OnRep_Random_Chance()
{
	static auto fn = UObject::FindObject<UFunction>("Function PBW_BP_Parent.PBW_BP_Parent_C.OnRep_Random Chance");

	APBW_BP_Parent_C_OnRep_Random_Chance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PBW_BP_Parent.PBW_BP_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APBW_BP_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PBW_BP_Parent.PBW_BP_Parent_C.UserConstructionScript");

	APBW_BP_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PBW_BP_Parent.PBW_BP_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APBW_BP_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PBW_BP_Parent.PBW_BP_Parent_C.ReceiveBeginPlay");

	APBW_BP_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PBW_BP_Parent.PBW_BP_Parent_C.ExecuteUbergraph_PBW_BP_Parent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APBW_BP_Parent_C::ExecuteUbergraph_PBW_BP_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PBW_BP_Parent.PBW_BP_Parent_C.ExecuteUbergraph_PBW_BP_Parent");

	APBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
