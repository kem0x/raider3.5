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

// Function AthenaCustomizationBannerButton.AthenaCustomizationBannerButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCustomizationBannerButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationBannerButton.AthenaCustomizationBannerButton_C.Construct");

	UAthenaCustomizationBannerButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationBannerButton.AthenaCustomizationBannerButton_C.ExecuteUbergraph_AthenaCustomizationBannerButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationBannerButton_C::ExecuteUbergraph_AthenaCustomizationBannerButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationBannerButton.AthenaCustomizationBannerButton_C.ExecuteUbergraph_AthenaCustomizationBannerButton");

	UAthenaCustomizationBannerButton_C_ExecuteUbergraph_AthenaCustomizationBannerButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
