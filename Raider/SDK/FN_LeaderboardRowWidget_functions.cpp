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

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortLeaderboardRowProxyInstance* RowObject                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardRowWidget_C::Refresh(class UFortLeaderboardRowProxyInstance* RowObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh");

	ULeaderboardRowWidget_C_Refresh_Params params;
	params.RowObject = RowObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortLeaderboardRowProxyInstance* NewData                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardRowWidget_C::SetDataDirect(class UFortLeaderboardRowProxyInstance* NewData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect");

	ULeaderboardRowWidget_C_SetDataDirect_Params params;
	params.NewData = NewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardRowWidget_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnListItemObjectSet");

	ULeaderboardRowWidget_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardRowWidget_C::ExecuteUbergraph_LeaderboardRowWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget");

	ULeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
