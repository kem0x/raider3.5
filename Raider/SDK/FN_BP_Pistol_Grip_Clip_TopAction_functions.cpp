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

// Function BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C.ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Pistol_Grip_Clip_TopAction_C::ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C.ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction");

	UBP_Pistol_Grip_Clip_TopAction_C_ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
