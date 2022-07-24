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

// Function SK_Pickaxe_Street_Basketball_AnimBP.SK_Pickaxe_Street_Basketball_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_Street_Basketball_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_Pickaxe_Street_Basketball_AnimBP_C::ExecuteUbergraph_SK_Pickaxe_Street_Basketball_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Pickaxe_Street_Basketball_AnimBP.SK_Pickaxe_Street_Basketball_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_Street_Basketball_AnimBP");

	USK_Pickaxe_Street_Basketball_AnimBP_C_ExecuteUbergraph_SK_Pickaxe_Street_Basketball_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
