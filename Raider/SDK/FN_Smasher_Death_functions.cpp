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

// Function Smasher_Death.Smasher_Death_C.Trigger_Death_Effect
// (Public, BlueprintCallable, BlueprintEvent)

void USmasher_Death_C::Trigger_Death_Effect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smasher_Death.Smasher_Death_C.Trigger_Death_Effect");

	USmasher_Death_C_Trigger_Death_Effect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
