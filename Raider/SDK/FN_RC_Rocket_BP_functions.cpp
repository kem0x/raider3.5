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

// Function RC_Rocket_BP.RC_Rocket_BP_C.ExecuteUbergraph_RC_Rocket_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URC_Rocket_BP_C::ExecuteUbergraph_RC_Rocket_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RC_Rocket_BP.RC_Rocket_BP_C.ExecuteUbergraph_RC_Rocket_BP");

	URC_Rocket_BP_C_ExecuteUbergraph_RC_Rocket_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
