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

// Function PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APBWA_W1_StairSpiral_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C.UserConstructionScript");

	APBWA_W1_StairSpiral_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
