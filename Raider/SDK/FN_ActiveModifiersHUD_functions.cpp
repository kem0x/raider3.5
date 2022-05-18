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

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.PopulateModifiers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> inModifiers                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UActiveModifiersHUD_C::PopulateModifiers(TArray<class UFortGameplayModifierItemDefinition*>* inModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActiveModifiersHUD.ActiveModifiersHUD_C.PopulateModifiers");

	UActiveModifiersHUD_C_PopulateModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inModifiers != nullptr)
		*inModifiers = params.inModifiers;
}


// Function ActiveModifiersHUD.ActiveModifiersHUD_C.OnActiveGameplayModifiersChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UActiveModifiersHUD_C::OnActiveGameplayModifiersChanged(TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActiveModifiersHUD.ActiveModifiersHUD_C.OnActiveGameplayModifiersChanged");

	UActiveModifiersHUD_C_OnActiveGameplayModifiersChanged_Params params;
	params.AppliedModifiers = AppliedModifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActiveModifiersHUD.ActiveModifiersHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActiveModifiersHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActiveModifiersHUD.ActiveModifiersHUD_C.Construct");

	UActiveModifiersHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActiveModifiersHUD.ActiveModifiersHUD_C.ExecuteUbergraph_ActiveModifiersHUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActiveModifiersHUD_C::ExecuteUbergraph_ActiveModifiersHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActiveModifiersHUD.ActiveModifiersHUD_C.ExecuteUbergraph_ActiveModifiersHUD");

	UActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
