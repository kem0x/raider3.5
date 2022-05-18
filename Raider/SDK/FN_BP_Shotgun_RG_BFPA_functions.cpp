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

// Function BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C.ExecuteUbergraph_BP_Shotgun_RG_BFPA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shotgun_RG_BFPA_C::ExecuteUbergraph_BP_Shotgun_RG_BFPA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C.ExecuteUbergraph_BP_Shotgun_RG_BFPA");

	UBP_Shotgun_RG_BFPA_C_ExecuteUbergraph_BP_Shotgun_RG_BFPA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
