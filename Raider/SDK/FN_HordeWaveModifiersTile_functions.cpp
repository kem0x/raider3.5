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

// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.PlayIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UHordeWaveModifiersTile_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.PlayIntro");

	UHordeWaveModifiersTile_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetModifierItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ModifierItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHordeWaveModifiersTile_C::SetModifierItem(class UFortItem* ModifierItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetModifierItem");

	UHordeWaveModifiersTile_C_SetModifierItem_Params params;
	params.ModifierItem = ModifierItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.OnAnimReadyForNextModifier
// (BlueprintCallable, BlueprintEvent)

void UHordeWaveModifiersTile_C::OnAnimReadyForNextModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.OnAnimReadyForNextModifier");

	UHordeWaveModifiersTile_C_OnAnimReadyForNextModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHordeWaveModifiersTile_C::SetData(class UObject* InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetData");

	UHordeWaveModifiersTile_C_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.ExecuteUbergraph_HordeWaveModifiersTile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHordeWaveModifiersTile_C::ExecuteUbergraph_HordeWaveModifiersTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.ExecuteUbergraph_HordeWaveModifiersTile");

	UHordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.OnReadyForNextModifierPresentation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHordeWaveModifiersTile_C::OnReadyForNextModifierPresentation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.OnReadyForNextModifierPresentation__DelegateSignature");

	UHordeWaveModifiersTile_C_OnReadyForNextModifierPresentation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
