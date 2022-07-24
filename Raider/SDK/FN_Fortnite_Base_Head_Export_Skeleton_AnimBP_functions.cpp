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

// Function Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UFortnite_Base_Head_Export_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.BlueprintInitializeAnimation");

	UFortnite_Base_Head_Export_Skeleton_AnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortnite_Base_Head_Export_Skeleton_AnimBP_C::ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP");

	UFortnite_Base_Head_Export_Skeleton_AnimBP_C_ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
