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

// Function ThirdPartyTab.ThirdPartyTab_C.Activate Scroll Box
// (Public, BlueprintCallable, BlueprintEvent)

void UThirdPartyTab_C::Activate_Scroll_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThirdPartyTab.ThirdPartyTab_C.Activate Scroll Box");

	UThirdPartyTab_C_Activate_Scroll_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
