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

// Function RCControl_AnimBlueprint.RCControl_AnimBlueprint_C.ExecuteUbergraph_RCControl_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URCControl_AnimBlueprint_C::ExecuteUbergraph_RCControl_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RCControl_AnimBlueprint.RCControl_AnimBlueprint_C.ExecuteUbergraph_RCControl_AnimBlueprint");

	URCControl_AnimBlueprint_C_ExecuteUbergraph_RCControl_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
