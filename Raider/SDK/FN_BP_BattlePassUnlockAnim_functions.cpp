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

// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattlePassUnlockAnim_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PreConstruct");

	UBP_BattlePassUnlockAnim_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.AnimComplete
// (BlueprintCallable, BlueprintEvent)

void UBP_BattlePassUnlockAnim_C::AnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.AnimComplete");

	UBP_BattlePassUnlockAnim_C_AnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.CustomEvent_0_1
// (BlueprintCallable, BlueprintEvent)

void UBP_BattlePassUnlockAnim_C::CustomEvent_0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.CustomEvent_0_1");

	UBP_BattlePassUnlockAnim_C_CustomEvent_0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UBP_BattlePassUnlockAnim_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.OnActivated");

	UBP_BattlePassUnlockAnim_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)

void UBP_BattlePassUnlockAnim_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PlayIntro");

	UBP_BattlePassUnlockAnim_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.ExecuteUbergraph_BP_BattlePassUnlockAnim
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BattlePassUnlockAnim_C::ExecuteUbergraph_BP_BattlePassUnlockAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.ExecuteUbergraph_BP_BattlePassUnlockAnim");

	UBP_BattlePassUnlockAnim_C_ExecuteUbergraph_BP_BattlePassUnlockAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
