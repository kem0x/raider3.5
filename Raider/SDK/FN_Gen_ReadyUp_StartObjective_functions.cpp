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

// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.SetParams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReadyUpTimerLength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InteractSpawnLocation          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FText                   InteractText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            BluGloMissionActivationQty     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGen_ReadyUp_StartObjective_C* ThisObject                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGen_ReadyUp_StartObjective_C::SetParams(float ReadyUpTimerLength, const struct FTransform& InteractSpawnLocation, const struct FText& InteractText, int BluGloMissionActivationQty, class UGen_ReadyUp_StartObjective_C** ThisObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.SetParams");

	UGen_ReadyUp_StartObjective_C_SetParams_Params params;
	params.ReadyUpTimerLength = ReadyUpTimerLength;
	params.InteractSpawnLocation = InteractSpawnLocation;
	params.InteractText = InteractText;
	params.BluGloMissionActivationQty = BluGloMissionActivationQty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ThisObject != nullptr)
		*ThisObject = params.ThisObject;
}


// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.BreakParams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReadyUpTimerLength             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InteractSpawnLocation          (Parm, OutParm, IsPlainOldData)
// struct FText                   InteractText                   (Parm, OutParm)
// int                            BluGloMissionActivationQty     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGen_ReadyUp_StartObjective_C::BreakParams(float* ReadyUpTimerLength, struct FTransform* InteractSpawnLocation, struct FText* InteractText, int* BluGloMissionActivationQty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.BreakParams");

	UGen_ReadyUp_StartObjective_C_BreakParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReadyUpTimerLength != nullptr)
		*ReadyUpTimerLength = params.ReadyUpTimerLength;
	if (InteractSpawnLocation != nullptr)
		*InteractSpawnLocation = params.InteractSpawnLocation;
	if (InteractText != nullptr)
		*InteractText = params.InteractText;
	if (BluGloMissionActivationQty != nullptr)
		*BluGloMissionActivationQty = params.BluGloMissionActivationQty;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
