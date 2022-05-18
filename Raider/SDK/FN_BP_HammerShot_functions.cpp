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

// Function BP_HammerShot.BP_HammerShot_C.ExecuteUbergraph_BP_HammerShot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HammerShot_C::ExecuteUbergraph_BP_HammerShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HammerShot.BP_HammerShot_C.ExecuteUbergraph_BP_HammerShot");

	UBP_HammerShot_C_ExecuteUbergraph_BP_HammerShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
