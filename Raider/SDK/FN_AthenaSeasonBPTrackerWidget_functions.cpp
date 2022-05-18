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

// Function AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C.OnAccountInfoChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSeasonBPTrackerWidget_C::OnAccountInfoChanged(struct FFortPublicAccountInfo* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C.OnAccountInfoChanged");

	UAthenaSeasonBPTrackerWidget_C_OnAccountInfoChanged_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C.ExecuteUbergraph_AthenaSeasonBPTrackerWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonBPTrackerWidget_C::ExecuteUbergraph_AthenaSeasonBPTrackerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C.ExecuteUbergraph_AthenaSeasonBPTrackerWidget");

	UAthenaSeasonBPTrackerWidget_C_ExecuteUbergraph_AthenaSeasonBPTrackerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
