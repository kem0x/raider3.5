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

// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.GetOutpostReadyState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReadyToExpand                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReadyToInstallAmplifier        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_StormShieldInterface_C::GetOutpostReadyState(bool* ReadyToExpand, bool* ReadyToInstallAmplifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.GetOutpostReadyState");

	UBPI_StormShieldInterface_C_GetOutpostReadyState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReadyToExpand != nullptr)
		*ReadyToExpand = params.ReadyToExpand;
	if (ReadyToInstallAmplifier != nullptr)
		*ReadyToInstallAmplifier = params.ReadyToInstallAmplifier;
}


// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.CanLeaveOutpost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllowedToLeave                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_StormShieldInterface_C::CanLeaveOutpost(bool* AllowedToLeave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.CanLeaveOutpost");

	UBPI_StormShieldInterface_C_CanLeaveOutpost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowedToLeave != nullptr)
		*AllowedToLeave = params.AllowedToLeave;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
