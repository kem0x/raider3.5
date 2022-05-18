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

// Function MinibossDetails.MinibossDetails_C.StopIntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UMinibossDetails_C::StopIntroAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.StopIntroAnimation");

	UMinibossDetails_C_StopIntroAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.OnIntroAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UMinibossDetails_C::OnIntroAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.OnIntroAnimationFinished");

	UMinibossDetails_C_OnIntroAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.StopOutroAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UMinibossDetails_C::StopOutroAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.StopOutroAnimation");

	UMinibossDetails_C_StopOutroAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.OnOutroAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UMinibossDetails_C::OnOutroAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.OnOutroAnimationFinished");

	UMinibossDetails_C_OnOutroAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.StopKillAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UMinibossDetails_C::StopKillAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.StopKillAnimation");

	UMinibossDetails_C_StopKillAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.OnKillAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UMinibossDetails_C::OnKillAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.OnKillAnimationFinished");

	UMinibossDetails_C_OnKillAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.Kill
// (Public, BlueprintCallable, BlueprintEvent)

void UMinibossDetails_C::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.Kill");

	UMinibossDetails_C_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)

void UMinibossDetails_C::Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.Outro");

	UMinibossDetails_C_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)

void UMinibossDetails_C::Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.Intro");

	UMinibossDetails_C_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.Update Health
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinibossDetails_C::Update_Health(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.Update Health");

	UMinibossDetails_C_Update_Health_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.PopulateModifiers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           inModifiersArray               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMinibossDetails_C::PopulateModifiers(TArray<struct FText>* inModifiersArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.PopulateModifiers");

	UMinibossDetails_C_PopulateModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inModifiersArray != nullptr)
		*inModifiersArray = params.inModifiersArray;
}


// Function MinibossDetails.MinibossDetails_C.InitializeMiniBossDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           inModifiers                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   InName                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   inUpgradeName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          inHealthPercent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           showName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           showPortrait                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NameStyle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ModifiersStyle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextJustify>      Name_Alignment                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextJustify>      Modifiers_Alignment            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Health_Bar_Width               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinibossDetails_C::InitializeMiniBossDetails(const struct FText& InName, const struct FText& inUpgradeName, float inHealthPercent, bool showName, bool showPortrait, class UClass* NameStyle, class UClass* ModifiersStyle, TEnumAsByte<ETextJustify> Name_Alignment, TEnumAsByte<ETextJustify> Modifiers_Alignment, float Health_Bar_Width, TArray<struct FText>* inModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.InitializeMiniBossDetails");

	UMinibossDetails_C_InitializeMiniBossDetails_Params params;
	params.InName = InName;
	params.inUpgradeName = inUpgradeName;
	params.inHealthPercent = inHealthPercent;
	params.showName = showName;
	params.showPortrait = showPortrait;
	params.NameStyle = NameStyle;
	params.ModifiersStyle = ModifiersStyle;
	params.Name_Alignment = Name_Alignment;
	params.Modifiers_Alignment = Modifiers_Alignment;
	params.Health_Bar_Width = Health_Bar_Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inModifiers != nullptr)
		*inModifiers = params.inModifiers;
}


// Function MinibossDetails.MinibossDetails_C.OnTargetChanged
// (Event, Protected, BlueprintEvent)

void UMinibossDetails_C::OnTargetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.OnTargetChanged");

	UMinibossDetails_C_OnTargetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.OnTargetHealthChanged
// (Event, Protected, BlueprintEvent)

void UMinibossDetails_C::OnTargetHealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.OnTargetHealthChanged");

	UMinibossDetails_C_OnTargetHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.OnTargetDied
// (Event, Protected, BlueprintEvent)

void UMinibossDetails_C::OnTargetDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.OnTargetDied");

	UMinibossDetails_C_OnTargetDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.OnTargetDestroyed
// (Event, Protected, BlueprintEvent)

void UMinibossDetails_C::OnTargetDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.OnTargetDestroyed");

	UMinibossDetails_C_OnTargetDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinibossDetails.MinibossDetails_C.ExecuteUbergraph_MinibossDetails
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinibossDetails_C::ExecuteUbergraph_MinibossDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinibossDetails.MinibossDetails_C.ExecuteUbergraph_MinibossDetails");

	UMinibossDetails_C_ExecuteUbergraph_MinibossDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
