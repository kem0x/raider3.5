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

// Function BP_SpectatorPC.BP_SpectatorPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpectatorPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorPC.BP_SpectatorPC_C.UserConstructionScript");

	ABP_SpectatorPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorPC.BP_SpectatorPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpectatorPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorPC.BP_SpectatorPC_C.ReceiveBeginPlay");

	ABP_SpectatorPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorPC.BP_SpectatorPC_C.ExecuteUbergraph_BP_SpectatorPC
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpectatorPC_C::ExecuteUbergraph_BP_SpectatorPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorPC.BP_SpectatorPC_C.ExecuteUbergraph_BP_SpectatorPC");

	ABP_SpectatorPC_C_ExecuteUbergraph_BP_SpectatorPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
