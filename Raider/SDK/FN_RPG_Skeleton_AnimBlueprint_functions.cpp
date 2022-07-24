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

// Function RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RPG_Skeleton_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URPG_Skeleton_AnimBlueprint_C::ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RPG_Skeleton_AnimBlueprint");

	URPG_Skeleton_AnimBlueprint_C_ExecuteUbergraph_RPG_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
