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

// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.UpdateDynamicData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::UpdateDynamicData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.UpdateDynamicData");

	UAthenaSeasonPageWidget_C_UpdateDynamicData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.GetFirstLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FirstLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonPageWidget_C::GetFirstLevel(int* FirstLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.GetFirstLevel");

	UAthenaSeasonPageWidget_C_GetFirstLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstLevel != nullptr)
		*FirstLevel = params.FirstLevel;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddFreeRewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InColumn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortSeasonPassLevelInfo* LevelInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAthenaSeasonLevelFreeRewardsWidget_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAthenaSeasonLevelFreeRewardsWidget_C* UAthenaSeasonPageWidget_C::AddFreeRewards(int InColumn, class UFortSeasonPassLevelInfo* LevelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddFreeRewards");

	UAthenaSeasonPageWidget_C_AddFreeRewards_Params params;
	params.InColumn = InColumn;
	params.LevelInfo = LevelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddPaidRewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InColumn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortSeasonPassLevelInfo* LevelInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAthenaSeasonLevelPaidRewardsWidget_C* OutputPin                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonPageWidget_C::AddPaidRewards(int InColumn, class UFortSeasonPassLevelInfo* LevelInfo, class UAthenaSeasonLevelPaidRewardsWidget_C** OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddPaidRewards");

	UAthenaSeasonPageWidget_C_AddPaidRewards_Params params;
	params.InColumn = InColumn;
	params.LevelInfo = LevelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PagePopulationComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::PagePopulationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PagePopulationComplete");

	UAthenaSeasonPageWidget_C_PagePopulationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ContainsLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaSeasonPageWidget_C::ContainsLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ContainsLevel");

	UAthenaSeasonPageWidget_C_ContainsLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.IsFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Full                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonPageWidget_C::IsFull(bool* Full)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.IsFull");

	UAthenaSeasonPageWidget_C_IsFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Full != nullptr)
		*Full = params.Full;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddLevelWidgets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSeasonPassLevelInfo* LevelInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USeasonPassLevelWidget*> LevelWidgets                   (Parm, OutParm, ZeroConstructor)

void UAthenaSeasonPageWidget_C::AddLevelWidgets(class UFortSeasonPassLevelInfo* LevelInfo, TArray<class USeasonPassLevelWidget*>* LevelWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.AddLevelWidgets");

	UAthenaSeasonPageWidget_C_AddLevelWidgets_Params params;
	params.LevelInfo = LevelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelWidgets != nullptr)
		*LevelWidgets = params.LevelWidgets;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSeasonPageWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.Construct");

	UAthenaSeasonPageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSeasonPageWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.Destruct");

	UAthenaSeasonPageWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.NavigatePageRight
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::NavigatePageRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.NavigatePageRight");

	UAthenaSeasonPageWidget_C_NavigatePageRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.NavigatePageLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::NavigatePageLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.NavigatePageLeft");

	UAthenaSeasonPageWidget_C_NavigatePageLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.OnBattlePassChanged
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonPageWidget_C::OnBattlePassChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.OnBattlePassChanged");

	UAthenaSeasonPageWidget_C_OnBattlePassChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ScreenShown
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::ScreenShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ScreenShown");

	UAthenaSeasonPageWidget_C_ScreenShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ExecuteUbergraph_AthenaSeasonPageWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonPageWidget_C::ExecuteUbergraph_AthenaSeasonPageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.ExecuteUbergraph_AthenaSeasonPageWidget");

	UAthenaSeasonPageWidget_C_ExecuteUbergraph_AthenaSeasonPageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PageRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::PageRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PageRight__DelegateSignature");

	UAthenaSeasonPageWidget_C_PageRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PageLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonPageWidget_C::PageLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonPageWidget.AthenaSeasonPageWidget_C.PageLeft__DelegateSignature");

	UAthenaSeasonPageWidget_C_PageLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
