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

// Function BPI_ShieldFlash.BPI_ShieldFlash_C.FlashShield
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_ShieldFlash_C::FlashShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ShieldFlash.BPI_ShieldFlash_C.FlashShield");

	UBPI_ShieldFlash_C_FlashShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
