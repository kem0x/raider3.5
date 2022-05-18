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

// Function S_Stream_2W_SBend_3L_a.S_Stream_2W_SBend_3L_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AS_Stream_2W_SBend_3L_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function S_Stream_2W_SBend_3L_a.S_Stream_2W_SBend_3L_a_C.UserConstructionScript");

	AS_Stream_2W_SBend_3L_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
