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

// Function SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C.BlueprintUpdateAnimation");

	USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C::ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP");

	USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C_ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
