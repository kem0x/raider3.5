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

// Function XpBonusToolTip.XpBonusToolTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBonusToolTip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBonusToolTip.XpBonusToolTip_C.Construct");

	UXpBonusToolTip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBonusToolTip.XpBonusToolTip_C.ExecuteUbergraph_XpBonusToolTip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpBonusToolTip_C::ExecuteUbergraph_XpBonusToolTip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBonusToolTip.XpBonusToolTip_C.ExecuteUbergraph_XpBonusToolTip");

	UXpBonusToolTip_C_ExecuteUbergraph_XpBonusToolTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
