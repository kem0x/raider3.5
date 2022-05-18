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

// Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.UpdateUpsellInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaBattlePassTrackerWidget_C::UpdateUpsellInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.UpdateUpsellInfo");

	UAthenaBattlePassTrackerWidget_C_UpdateUpsellInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.OnAccountInfoChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaBattlePassTrackerWidget_C::OnAccountInfoChanged(struct FFortPublicAccountInfo* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.OnAccountInfoChanged");

	UAthenaBattlePassTrackerWidget_C_OnAccountInfoChanged_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.ExecuteUbergraph_AthenaBattlePassTrackerWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBattlePassTrackerWidget_C::ExecuteUbergraph_AthenaBattlePassTrackerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C.ExecuteUbergraph_AthenaBattlePassTrackerWidget");

	UAthenaBattlePassTrackerWidget_C_ExecuteUbergraph_AthenaBattlePassTrackerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
