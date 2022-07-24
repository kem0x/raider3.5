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

// Function BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AssaultRifle_FrontClip_SideAction_C::ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction");

	UBP_AssaultRifle_FrontClip_SideAction_C_ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
