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

// Function WaveModifiersWidget.WaveModifiersWidget_C.PresentNextModifier
// (Public, BlueprintCallable, BlueprintEvent)

void UWaveModifiersWidget_C::PresentNextModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersWidget.WaveModifiersWidget_C.PresentNextModifier");

	UWaveModifiersWidget_C_PresentNextModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaveModifiersWidget.WaveModifiersWidget_C.OnModifiersAdded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> Modifiers                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           StartPresentationImmediately   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWaveModifiersWidget_C::OnModifiersAdded(bool StartPresentationImmediately, TArray<class UFortGameplayModifierItemDefinition*>* Modifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersWidget.WaveModifiersWidget_C.OnModifiersAdded");

	UWaveModifiersWidget_C_OnModifiersAdded_Params params;
	params.StartPresentationImmediately = StartPresentationImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Modifiers != nullptr)
		*Modifiers = params.Modifiers;
}


// Function WaveModifiersWidget.WaveModifiersWidget_C.OnAllModifiersPresented__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWaveModifiersWidget_C::OnAllModifiersPresented__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersWidget.WaveModifiersWidget_C.OnAllModifiersPresented__DelegateSignature");

	UWaveModifiersWidget_C_OnAllModifiersPresented__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
