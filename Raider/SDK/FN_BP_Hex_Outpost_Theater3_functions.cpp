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

// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hex_Outpost_Theater3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.UserConstructionScript");

	ABP_Hex_Outpost_Theater3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Hex_Outpost_Theater3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ReceiveBeginPlay");

	ABP_Hex_Outpost_Theater3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ActivateOutpost
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_Outpost_Theater3_C::ActivateOutpost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ActivateOutpost");

	ABP_Hex_Outpost_Theater3_C_ActivateOutpost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.HandleOnPlayerInfoChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Hex_Outpost_Theater3_C::HandleOnPlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.HandleOnPlayerInfoChanged");

	ABP_Hex_Outpost_Theater3_C_HandleOnPlayerInfoChanged_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ExecuteUbergraph_BP_Hex_Outpost_Theater3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hex_Outpost_Theater3_C::ExecuteUbergraph_BP_Hex_Outpost_Theater3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ExecuteUbergraph_BP_Hex_Outpost_Theater3");

	ABP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
