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

// Function ScoreBarsWidget.ScoreBarsWidget_C.UnregisterForScoreStreamEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::UnregisterForScoreStreamEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.UnregisterForScoreStreamEvents");

	UScoreBarsWidget_C_UnregisterForScoreStreamEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreNumberChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStatCategory                  ScoreCategory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreBarsWidget_C::HandleScoreNumberChanged(EStatCategory ScoreCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreNumberChanged");

	UScoreBarsWidget_C_HandleScoreNumberChanged_Params params;
	params.ScoreCategory = ScoreCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMessageDisplayed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget* ItemWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScoreBarsWidget_C::HandleMessageDisplayed(class UFortUIMessageItemWidget* ItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMessageDisplayed");

	UScoreBarsWidget_C_HandleMessageDisplayed_Params params;
	params.ItemWidget = ItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HideScoreMessageSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::HideScoreMessageSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.HideScoreMessageSlots");

	UScoreBarsWidget_C_HideScoreMessageSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.RegisterForScoreStreamEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::RegisterForScoreStreamEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.RegisterForScoreStreamEvents");

	UScoreBarsWidget_C_RegisterForScoreStreamEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreMessageExpired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget* Expired_Message                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScoreBarsWidget_C::HandleScoreMessageExpired(class UFortUIMessageItemWidget* Expired_Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreMessageExpired");

	UScoreBarsWidget_C_HandleScoreMessageExpired_Params params;
	params.Expired_Message = Expired_Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.TryGetNextScoreMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::TryGetNextScoreMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.TryGetNextScoreMessage");

	UScoreBarsWidget_C_TryGetNextScoreMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreStatChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EFortReplicatedStat> StatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EStatCategory                  StatCategory                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreBarsWidget_C::HandleScoreStatChanged(int Delta, TEnumAsByte<EFortReplicatedStat> StatType, EStatCategory StatCategory, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreStatChanged");

	UScoreBarsWidget_C_HandleScoreStatChanged_Params params;
	params.Delta = Delta;
	params.StatType = StatType;
	params.StatCategory = StatCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::InitializeIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeIcons");

	UScoreBarsWidget_C_InitializeIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreBars
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::UpdateScoreBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreBars");

	UScoreBarsWidget_C_UpdateScoreBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleUpdateUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*       Mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreBarsWidget_C::HandleUpdateUI(class AFortMissionState* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.HandleUpdateUI");

	UScoreBarsWidget_C_HandleUpdateUI_Params params;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreTotals
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::UpdateScoreTotals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreTotals");

	UScoreBarsWidget_C_UpdateScoreTotals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HasValidBadgeInfos
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bHasValidBadgeInfos            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScoreBarsWidget_C::HasValidBadgeInfos(bool* bHasValidBadgeInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.HasValidBadgeInfos");

	UScoreBarsWidget_C_HasValidBadgeInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasValidBadgeInfos != nullptr)
		*bHasValidBadgeInfos = params.bHasValidBadgeInfos;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeScoreBars
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::InitializeScoreBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeScoreBars");

	UScoreBarsWidget_C_InitializeScoreBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMissionsUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::HandleMissionsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMissionsUpdated");

	UScoreBarsWidget_C_HandleMissionsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreBarsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.Construct");

	UScoreBarsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreBarsWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.Destruct");

	UScoreBarsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.ExecuteUbergraph_ScoreBarsWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreBarsWidget_C::ExecuteUbergraph_ScoreBarsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsWidget.ScoreBarsWidget_C.ExecuteUbergraph_ScoreBarsWidget");

	UScoreBarsWidget_C_ExecuteUbergraph_ScoreBarsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
