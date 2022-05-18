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

// Function Crossbow_BP.Crossbow_BP_C.ExecuteUbergraph_Crossbow_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCrossbow_BP_C::ExecuteUbergraph_Crossbow_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crossbow_BP.Crossbow_BP_C.ExecuteUbergraph_Crossbow_BP");

	UCrossbow_BP_C_ExecuteUbergraph_Crossbow_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
