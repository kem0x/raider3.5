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

// Function AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C.OnSetup
// (Event, Public, BlueprintEvent)

void UAthenaSeasonLevelHeaderWidget_C::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C.OnSetup");

	UAthenaSeasonLevelHeaderWidget_C_OnSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C.OnLockedStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          FreeUnlocked                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PaidUnlocked                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelHeaderWidget_C::OnLockedStatusChanged(bool* FreeUnlocked, bool* PaidUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C.OnLockedStatusChanged");

	UAthenaSeasonLevelHeaderWidget_C_OnLockedStatusChanged_Params params;
	params.FreeUnlocked = FreeUnlocked;
	params.PaidUnlocked = PaidUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C.ExecuteUbergraph_AthenaSeasonLevelHeaderWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelHeaderWidget_C::ExecuteUbergraph_AthenaSeasonLevelHeaderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C.ExecuteUbergraph_AthenaSeasonLevelHeaderWidget");

	UAthenaSeasonLevelHeaderWidget_C_ExecuteUbergraph_AthenaSeasonLevelHeaderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
