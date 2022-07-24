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

// Function Tooltip-DescriptionText.Tooltip-DescriptionText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltip_DescriptionText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DescriptionText.Tooltip-DescriptionText_C.Construct");

	UTooltip_DescriptionText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-DescriptionText.Tooltip-DescriptionText_C.ExecuteUbergraph_Tooltip-DescriptionText
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltip_DescriptionText_C::ExecuteUbergraph_Tooltip_DescriptionText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-DescriptionText.Tooltip-DescriptionText_C.ExecuteUbergraph_Tooltip-DescriptionText");

	UTooltip_DescriptionText_C_ExecuteUbergraph_Tooltip_DescriptionText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
