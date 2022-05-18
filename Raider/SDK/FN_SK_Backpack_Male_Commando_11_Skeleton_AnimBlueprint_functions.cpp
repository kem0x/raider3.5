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

// Function SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint.SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void USK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint.SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C.BlueprintInitializeAnimation");

	USK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint.SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint.SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");

	USK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint.SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint.SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint");

	USK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
