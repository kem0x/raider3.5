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

// Function BP_Pistol_FC_SA.BP_Pistol_FC_SA_C.ExecuteUbergraph_BP_Pistol_FC_SA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Pistol_FC_SA_C::ExecuteUbergraph_BP_Pistol_FC_SA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pistol_FC_SA.BP_Pistol_FC_SA_C.ExecuteUbergraph_BP_Pistol_FC_SA");

	UBP_Pistol_FC_SA_C_ExecuteUbergraph_BP_Pistol_FC_SA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
