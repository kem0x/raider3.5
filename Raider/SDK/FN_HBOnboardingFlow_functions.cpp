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

// Function HBOnboardingFlow.HBOnboardingFlow_C.HasCompletedOnboardingObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHBOnboardingFlow_C::HasCompletedOnboardingObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HasCompletedOnboardingObjective");

	AHBOnboardingFlow_C_HasCompletedOnboardingObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortQuestManager*       QuestManager                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHBOnboardingFlow_C::GetCampaignQuestManager(class UFortQuestManager** QuestManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager");

	AHBOnboardingFlow_C_GetCampaignQuestManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestManager != nullptr)
		*QuestManager = params.QuestManager;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.GetOnboardingQuestItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortQuestItem*          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHBOnboardingFlow_C::GetOnboardingQuestItem(class UFortQuestItem** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.GetOnboardingQuestItem");

	AHBOnboardingFlow_C_GetOnboardingQuestItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.CanAccessManagementFeatures
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_Manage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHBOnboardingFlow_C::CanAccessManagementFeatures(bool* Can_Manage)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.CanAccessManagementFeatures");

	AHBOnboardingFlow_C_CanAccessManagementFeatures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Manage != nullptr)
		*Can_Manage = params.Can_Manage;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WaitingToCheckAgain            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHBOnboardingFlow_C::RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie");

	AHBOnboardingFlow_C_RecheckNeedToPlayEventMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaitingToCheckAgain != nullptr)
		*WaitingToCheckAgain = params.WaitingToCheckAgain;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHBOnboardingFlow_C::NeedsToPlayEventMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie");

	AHBOnboardingFlow_C_NeedsToPlayEventMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::Handle_Client_Quest_Login_Failed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed");

	AHBOnboardingFlow_C_Handle_Client_Quest_Login_Failed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.ShowBannerSelect
// (Public, BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::ShowBannerSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.ShowBannerSelect");

	AHBOnboardingFlow_C_ShowBannerSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMcpFailure
// (Public, BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandleMcpFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMcpFailure");

	AHBOnboardingFlow_C_HandleMcpFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.UserConstructionScript");

	AHBOnboardingFlow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_C2C889344301B8DBF8F046A2A175D133
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnCanceled_C2C889344301B8DBF8F046A2A175D133()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_C2C889344301B8DBF8F046A2A175D133");

	AHBOnboardingFlow_C_OnCanceled_C2C889344301B8DBF8F046A2A175D133_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133");

	AHBOnboardingFlow_C_OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnCanceled_856A325D44ECC73B857CE5B301E90D33()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33");

	AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B301E90D33_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33");

	AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_0A5ABC9C483947108FD9FB9980E7C62F
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnFailure_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_0A5ABC9C483947108FD9FB9980E7C62F");

	AHBOnboardingFlow_C_OnFailure_0A5ABC9C483947108FD9FB9980E7C62F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F");

	AHBOnboardingFlow_C_OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F");

	AHBOnboardingFlow_C_OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_F17CF9054AFDDDAF314AC4911BC9818F
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnFailure_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_F17CF9054AFDDDAF314AC4911BC9818F");

	AHBOnboardingFlow_C_OnFailure_F17CF9054AFDDDAF314AC4911BC9818F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F");

	AHBOnboardingFlow_C_OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F");

	AHBOnboardingFlow_C_OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0");

	AHBOnboardingFlow_C_OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B35313D7CD
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnCanceled_856A325D44ECC73B857CE5B35313D7CD()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B35313D7CD");

	AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B35313D7CD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD");

	AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251");

	AHBOnboardingFlow_C_OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6");

	AHBOnboardingFlow_C_OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_74930F274B5470B17CF720953FE7E260
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnFailure_74930F274B5470B17CF720953FE7E260()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_74930F274B5470B17CF720953FE7E260");

	AHBOnboardingFlow_C_OnFailure_74930F274B5470B17CF720953FE7E260_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_74930F274B5470B17CF720953FE7E260
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnSuccess_74930F274B5470B17CF720953FE7E260()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_74930F274B5470B17CF720953FE7E260");

	AHBOnboardingFlow_C_OnSuccess_74930F274B5470B17CF720953FE7E260_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0");

	AHBOnboardingFlow_C_OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7FBC276641DD576B7417ED97A4734318
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnStateEntered_7FBC276641DD576B7417ED97A4734318()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7FBC276641DD576B7417ED97A4734318");

	AHBOnboardingFlow_C_OnStateEntered_7FBC276641DD576B7417ED97A4734318_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2");

	AHBOnboardingFlow_C_OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.DialogResult_1D81E4B94CE33A3425130BABD5A7283B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHBOnboardingFlow_C::DialogResult_1D81E4B94CE33A3425130BABD5A7283B(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.DialogResult_1D81E4B94CE33A3425130BABD5A7283B");

	AHBOnboardingFlow_C_DialogResult_1D81E4B94CE33A3425130BABD5A7283B_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515");

	AHBOnboardingFlow_C_OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnFailure_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D");

	AHBOnboardingFlow_C_OnFailure_50CD26324B96B121A5B49DA66113AE5D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnIgnored_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D");

	AHBOnboardingFlow_C_OnIgnored_50CD26324B96B121A5B49DA66113AE5D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnSuccess_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D");

	AHBOnboardingFlow_C_OnSuccess_50CD26324B96B121A5B49DA66113AE5D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D");

	AHBOnboardingFlow_C_OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5");

	AHBOnboardingFlow_C_OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5");

	AHBOnboardingFlow_C_OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartPlaySatelliteCine
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::StartPlaySatelliteCine()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.StartPlaySatelliteCine");

	AHBOnboardingFlow_C_StartPlaySatelliteCine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartNameHomebase
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::StartNameHomebase()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.StartNameHomebase");

	AHBOnboardingFlow_C_StartNameHomebase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_HomebasePersonalized
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHBOnboardingFlow_C::HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_HomebasePersonalized");

	AHBOnboardingFlow_C_HandleClientEvent_HomebasePersonalized_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartOnboardingZone
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::StartOnboardingZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.StartOnboardingZone");

	AHBOnboardingFlow_C_StartOnboardingZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartFlow
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::StartFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.StartFlow");

	AHBOnboardingFlow_C_StartFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCheckOnboardingZoneComplete
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandleCheckOnboardingZoneComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCheckOnboardingZoneComplete");

	AHBOnboardingFlow_C_HandleCheckOnboardingZoneComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSwitchToHomeBase
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandleSwitchToHomeBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSwitchToHomeBase");

	AHBOnboardingFlow_C_HandleSwitchToHomeBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlaySatelliteCine
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandlePlaySatelliteCine()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlaySatelliteCine");

	AHBOnboardingFlow_C_HandlePlaySatelliteCine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNameHomebase
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandleNameHomebase()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNameHomebase");

	AHBOnboardingFlow_C_HandleNameHomebase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed Retry
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::Handle_Client_Quest_Login_Failed_Retry()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Failed Retry");

	AHBOnboardingFlow_C_Handle_Client_Quest_Login_Failed_Retry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Retries Exhausted
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::Handle_Client_Quest_Login_Retries_Exhausted()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.Handle Client Quest Login Retries Exhausted");

	AHBOnboardingFlow_C_Handle_Client_Quest_Login_Retries_Exhausted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHBOnboardingFlow_C::HandleClientEvent_SubGameSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelected");

	AHBOnboardingFlow_C_HandleClientEvent_SubGameSelected_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_OnRejoinGameAbandoned
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHBOnboardingFlow_C::HandleClientEvent_OnRejoinGameAbandoned(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_OnRejoinGameAbandoned");

	AHBOnboardingFlow_C_HandleClientEvent_OnRejoinGameAbandoned_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCompanionAppOnboardingAbort
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandleCompanionAppOnboardingAbort()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleCompanionAppOnboardingAbort");

	AHBOnboardingFlow_C_HandleCompanionAppOnboardingAbort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNoEntitlement
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandleNoEntitlement()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleNoEntitlement");

	AHBOnboardingFlow_C_HandleNoEntitlement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleForcedLogout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Reason_Title                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Reason                         (BlueprintVisible, BlueprintReadOnly, Parm)

void AHBOnboardingFlow_C::HandleForcedLogout(const struct FText& Reason_Title, const struct FText& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleForcedLogout");

	AHBOnboardingFlow_C_HandleForcedLogout_Params params;
	params.Reason_Title = Reason_Title;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandlePlayEventCine()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine");

	AHBOnboardingFlow_C_HandlePlayEventCine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMobileManagementRestricted
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandleMobileManagementRestricted()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleMobileManagementRestricted");

	AHBOnboardingFlow_C_HandleMobileManagementRestricted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHBOnboardingFlow_C::HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie");

	AHBOnboardingFlow_C_HandleClientEvent_PlayEventMovie_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelection
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHBOnboardingFlow_C::HandleClientEvent_SubGameSelection(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_SubGameSelection");

	AHBOnboardingFlow_C_HandleClientEvent_SubGameSelection_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_RejoinAvailable
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHBOnboardingFlow_C::HandleClientEvent_RejoinAvailable(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_RejoinAvailable");

	AHBOnboardingFlow_C_HandleClientEvent_RejoinAvailable_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSubGameSelection
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandleSubGameSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleSubGameSelection");

	AHBOnboardingFlow_C_HandleSubGameSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.ReenterFlow
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::ReenterFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.ReenterFlow");

	AHBOnboardingFlow_C_ReenterFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHBOnboardingFlow_C::ExecuteUbergraph_HBOnboardingFlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow");

	AHBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
