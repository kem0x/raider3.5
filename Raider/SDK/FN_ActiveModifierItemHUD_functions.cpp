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

// Function ActiveModifierItemHUD.ActiveModifierItemHUD_C.AssignIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             inIconSlateBrush               (BlueprintVisible, BlueprintReadOnly, Parm)

void UActiveModifierItemHUD_C::AssignIcon(const struct FSlateBrush& inIconSlateBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActiveModifierItemHUD.ActiveModifierItemHUD_C.AssignIcon");

	UActiveModifierItemHUD_C_AssignIcon_Params params;
	params.inIconSlateBrush = inIconSlateBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
