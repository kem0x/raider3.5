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

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetUIFeatureRevealData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                 UIFeature                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   RevealText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainTabTutorialBangWrapper_C::SetUIFeatureRevealData(EFortUIFeature UIFeature, const struct FText& RevealText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetUIFeatureRevealData");

	UMainTabTutorialBangWrapper_C_SetUIFeatureRevealData_Params params;
	params.UIFeature = UIFeature;
	params.RevealText = RevealText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Adjust Bang Image Translation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Translation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMainTabTutorialBangWrapper_C::Adjust_Bang_Image_Translation(const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Adjust Bang Image Translation");

	UMainTabTutorialBangWrapper_C_Adjust_Bang_Image_Translation_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Update Bang Icon Version
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabTutorialBangWrapper_C::Update_Bang_Icon_Version(int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Update Bang Icon Version");

	UMainTabTutorialBangWrapper_C_Update_Bang_Icon_Version_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BorderStyle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabTutorialBangWrapper_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetTutorialBorderStyle");

	UMainTabTutorialBangWrapper_C_SetTutorialBorderStyle_Params params;
	params.BorderStyle = BorderStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnBangStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabTutorialBangWrapper_C::OnBangStateChanged(bool* bEnabled, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnBangStateChanged");

	UMainTabTutorialBangWrapper_C_OnBangStateChanged_Params params;
	params.bEnabled = bEnabled;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabTutorialBangWrapper_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.PreConstruct");

	UMainTabTutorialBangWrapper_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Tab Reveal Message Closed
// (BlueprintCallable, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::Tab_Reveal_Message_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Tab Reveal Message Closed");

	UMainTabTutorialBangWrapper_C_Tab_Reveal_Message_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnStartCallout
// (Event, Protected, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::OnStartCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnStartCallout");

	UMainTabTutorialBangWrapper_C_OnStartCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnStopCallout
// (Event, Protected, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::OnStopCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnStopCallout");

	UMainTabTutorialBangWrapper_C_OnStopCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.ExecuteUbergraph_MainTabTutorialBangWrapper
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabTutorialBangWrapper_C::ExecuteUbergraph_MainTabTutorialBangWrapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.ExecuteUbergraph_MainTabTutorialBangWrapper");

	UMainTabTutorialBangWrapper_C_ExecuteUbergraph_MainTabTutorialBangWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.StopTabCallout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::StopTabCallout__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.StopTabCallout__DelegateSignature");

	UMainTabTutorialBangWrapper_C_StopTabCallout__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.TabDialogClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::TabDialogClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.TabDialogClosed__DelegateSignature");

	UMainTabTutorialBangWrapper_C_TabDialogClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.TabAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::TabAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.TabAdded__DelegateSignature");

	UMainTabTutorialBangWrapper_C_TabAdded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
