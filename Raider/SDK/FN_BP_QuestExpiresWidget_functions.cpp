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

// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.GetFortPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerController*   AsFort_Player_Controller       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_QuestExpiresWidget_C::GetFortPC(class AFortPlayerController** AsFort_Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.GetFortPC");

	UBP_QuestExpiresWidget_C_GetFortPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Player_Controller != nullptr)
		*AsFort_Player_Controller = params.AsFort_Player_Controller;
}


// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.Refresh Expiration Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QuestExpiresWidget_C::Refresh_Expiration_Timer(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.Refresh Expiration Timer");

	UBP_QuestExpiresWidget_C_Refresh_Expiration_Timer_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QuestExpiresWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.PreConstruct");

	UBP_QuestExpiresWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem**         InItem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QuestExpiresWidget_C::SetData(class UFortQuestItem** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.SetData");

	UBP_QuestExpiresWidget_C_SetData_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.OnQuestExpirationUpdated
// (Event, Protected, BlueprintEvent)

void UBP_QuestExpiresWidget_C::OnQuestExpirationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.OnQuestExpirationUpdated");

	UBP_QuestExpiresWidget_C_OnQuestExpirationUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.ExecuteUbergraph_BP_QuestExpiresWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_QuestExpiresWidget_C::ExecuteUbergraph_BP_QuestExpiresWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestExpiresWidget.BP_QuestExpiresWidget_C.ExecuteUbergraph_BP_QuestExpiresWidget");

	UBP_QuestExpiresWidget_C_ExecuteUbergraph_BP_QuestExpiresWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
