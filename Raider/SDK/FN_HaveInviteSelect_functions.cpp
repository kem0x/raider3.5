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

// Function HaveInviteSelect.HaveInviteSelect_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UHaveInviteSelect_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HaveInviteSelect.HaveInviteSelect_C.OnActivated");

	UHaveInviteSelect_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HaveInviteSelect.HaveInviteSelect_C.ExecuteUbergraph_HaveInviteSelect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHaveInviteSelect_C::ExecuteUbergraph_HaveInviteSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HaveInviteSelect.HaveInviteSelect_C.ExecuteUbergraph_HaveInviteSelect");

	UHaveInviteSelect_C_ExecuteUbergraph_HaveInviteSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
