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

// Function EarnedBadgeTile.EarnedBadgeTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEarnedBadgeTile_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarnedBadgeTile.EarnedBadgeTile_C.PreConstruct");

	UEarnedBadgeTile_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EarnedBadgeTile.EarnedBadgeTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEarnedBadgeTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EarnedBadgeTile.EarnedBadgeTile_C.Construct");

	UEarnedBadgeTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EarnedBadgeTile.EarnedBadgeTile_C.ExecuteUbergraph_EarnedBadgeTile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEarnedBadgeTile_C::ExecuteUbergraph_EarnedBadgeTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarnedBadgeTile.EarnedBadgeTile_C.ExecuteUbergraph_EarnedBadgeTile");

	UEarnedBadgeTile_C_ExecuteUbergraph_EarnedBadgeTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
