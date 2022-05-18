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

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.SelectReward
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelConfirmationScreen_C::SelectReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.SelectReward");

	UAthenaSeasonLevelConfirmationScreen_C_SelectReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::HandleBack(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.HandleBack");

	UAthenaSeasonLevelConfirmationScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.ModifyNumberOfTiersToBuy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::ModifyNumberOfTiersToBuy(int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.ModifyNumberOfTiersToBuy");

	UAthenaSeasonLevelConfirmationScreen_C_ModifyNumberOfTiersToBuy_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GenerateItemWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelConfirmationScreen_C::GenerateItemWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GenerateItemWidgets");

	UAthenaSeasonLevelConfirmationScreen_C_GenerateItemWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetNumberOfTiersBuying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAthenaSeasonLevelConfirmationScreen_C::GetNumberOfTiersBuying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetNumberOfTiersBuying");

	UAthenaSeasonLevelConfirmationScreen_C_GetNumberOfTiersBuying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetVBuckPrice
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAthenaSeasonLevelConfirmationScreen_C::GetVBuckPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetVBuckPrice");

	UAthenaSeasonLevelConfirmationScreen_C_GetVBuckPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetRewards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       Output_Get                     (Parm, OutParm, ZeroConstructor)

void UAthenaSeasonLevelConfirmationScreen_C::GetRewards(TArray<class UFortItem*>* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetRewards");

	UAthenaSeasonLevelConfirmationScreen_C_GetRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetHeaderText
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Result                         (Parm, OutParm)
// int                            TierPurchaseNumber             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::GetHeaderText(struct FText* Result, int* TierPurchaseNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetHeaderText");

	UAthenaSeasonLevelConfirmationScreen_C_GetHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (TierPurchaseNumber != nullptr)
		*TierPurchaseNumber = params.TierPurchaseNumber;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.Setup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSeasonPassLevelInfo* Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<int, class UFortSeasonPassLevelInfo*> AllLevels                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::Setup(class UFortSeasonPassLevelInfo* Level, int MaxLevel, TMap<int, class UFortSeasonPassLevelInfo*>* AllLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.Setup");

	UAthenaSeasonLevelConfirmationScreen_C_Setup_Params params;
	params.Level = Level;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllLevels != nullptr)
		*AllLevels = params.AllLevels;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.InitWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelConfirmationScreen_C::InitWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.InitWidgets");

	UAthenaSeasonLevelConfirmationScreen_C_InitWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationScreen_C_BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.OnPurchaseFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::OnPurchaseFinished(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.OnPurchaseFinished");

	UAthenaSeasonLevelConfirmationScreen_C_OnPurchaseFinished_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_396_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_396_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_396_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationScreen_C_BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_396_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_409_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_409_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_409_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationScreen_C_BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_409_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_429_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_429_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_429_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationScreen_C_BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_429_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_450_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_450_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_450_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonLevelConfirmationScreen_C_BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_450_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSeasonLevelConfirmationScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.Construct");

	UAthenaSeasonLevelConfirmationScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonLevelConfirmationScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.OnActivated");

	UAthenaSeasonLevelConfirmationScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.ExecuteUbergraph_AthenaSeasonLevelConfirmationScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelConfirmationScreen_C::ExecuteUbergraph_AthenaSeasonLevelConfirmationScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.ExecuteUbergraph_AthenaSeasonLevelConfirmationScreen");

	UAthenaSeasonLevelConfirmationScreen_C_ExecuteUbergraph_AthenaSeasonLevelConfirmationScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
