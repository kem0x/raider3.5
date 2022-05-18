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

// Function GAB_SmasherDeath.GAB_SmasherDeath_C.ExecuteUbergraph_GAB_SmasherDeath
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SmasherDeath_C::ExecuteUbergraph_GAB_SmasherDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherDeath.GAB_SmasherDeath_C.ExecuteUbergraph_GAB_SmasherDeath");

	UGAB_SmasherDeath_C_ExecuteUbergraph_GAB_SmasherDeath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
