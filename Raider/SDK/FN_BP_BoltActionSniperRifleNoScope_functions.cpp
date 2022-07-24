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

// Function BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C.ExecuteUbergraph_BP_BoltActionSniperRifleNoScope
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BoltActionSniperRifleNoScope_C::ExecuteUbergraph_BP_BoltActionSniperRifleNoScope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C.ExecuteUbergraph_BP_BoltActionSniperRifleNoScope");

	UBP_BoltActionSniperRifleNoScope_C_ExecuteUbergraph_BP_BoltActionSniperRifleNoScope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
