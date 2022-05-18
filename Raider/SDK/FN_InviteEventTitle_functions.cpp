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

// Function InviteEventTitle.InviteEventTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInviteEventTitle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InviteEventTitle.InviteEventTitle_C.Construct");

	UInviteEventTitle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InviteEventTitle.InviteEventTitle_C.ExecuteUbergraph_InviteEventTitle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInviteEventTitle_C::ExecuteUbergraph_InviteEventTitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InviteEventTitle.InviteEventTitle_C.ExecuteUbergraph_InviteEventTitle");

	UInviteEventTitle_C_ExecuteUbergraph_InviteEventTitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
