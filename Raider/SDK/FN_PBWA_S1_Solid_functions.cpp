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

// Function PBWA_S1_Solid.PBWA_S1_Solid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APBWA_S1_Solid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PBWA_S1_Solid.PBWA_S1_Solid_C.UserConstructionScript");

	APBWA_S1_Solid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PBWA_S1_Solid.PBWA_S1_Solid_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APBWA_S1_Solid_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PBWA_S1_Solid.PBWA_S1_Solid_C.ReceiveBeginPlay");

	APBWA_S1_Solid_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PBWA_S1_Solid.PBWA_S1_Solid_C.ExecuteUbergraph_PBWA_S1_Solid
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APBWA_S1_Solid_C::ExecuteUbergraph_PBWA_S1_Solid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PBWA_S1_Solid.PBWA_S1_Solid_C.ExecuteUbergraph_PBWA_S1_Solid");

	APBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
