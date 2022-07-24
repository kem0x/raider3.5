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

// Function BP_MedicPack_HealTarget.BP_MedicPack_HealTarget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MedicPack_HealTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MedicPack_HealTarget.BP_MedicPack_HealTarget_C.UserConstructionScript");

	ABP_MedicPack_HealTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
