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

// Function LMG_Anim_BP.LMG_Anim_BP_C.ExecuteUbergraph_LMG_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULMG_Anim_BP_C::ExecuteUbergraph_LMG_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LMG_Anim_BP.LMG_Anim_BP_C.ExecuteUbergraph_LMG_Anim_BP");

	ULMG_Anim_BP_C_ExecuteUbergraph_LMG_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
