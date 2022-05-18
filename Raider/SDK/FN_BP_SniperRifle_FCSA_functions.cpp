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

// Function BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C.ExecuteUbergraph_BP_SniperRifle_FCSA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SniperRifle_FCSA_C::ExecuteUbergraph_BP_SniperRifle_FCSA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C.ExecuteUbergraph_BP_SniperRifle_FCSA");

	UBP_SniperRifle_FCSA_C_ExecuteUbergraph_BP_SniperRifle_FCSA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
