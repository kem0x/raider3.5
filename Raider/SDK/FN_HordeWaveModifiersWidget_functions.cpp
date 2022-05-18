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

// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.PresentNextModifier
// (Public, BlueprintCallable, BlueprintEvent)

void UHordeWaveModifiersWidget_C::PresentNextModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.PresentNextModifier");

	UHordeWaveModifiersWidget_C_PresentNextModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.OnModifiersAdded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> Modifiers                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           StartPresentationImmediately   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHordeWaveModifiersWidget_C::OnModifiersAdded(bool StartPresentationImmediately, TArray<class UFortGameplayModifierItemDefinition*>* Modifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.OnModifiersAdded");

	UHordeWaveModifiersWidget_C_OnModifiersAdded_Params params;
	params.StartPresentationImmediately = StartPresentationImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Modifiers != nullptr)
		*Modifiers = params.Modifiers;
}


// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.OnAllModifiersPresented__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHordeWaveModifiersWidget_C::OnAllModifiersPresented__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.OnAllModifiersPresented__DelegateSignature");

	UHordeWaveModifiersWidget_C_OnAllModifiersPresented__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
