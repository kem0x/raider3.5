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

// Function NormalBangWrapper.NormalBangWrapper_C.InitialReset
// (Public, BlueprintCallable, BlueprintEvent)

void UNormalBangWrapper_C::InitialReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.InitialReset");

	UNormalBangWrapper_C_InitialReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.TriggerReset
// (Public, BlueprintCallable, BlueprintEvent)

void UNormalBangWrapper_C::TriggerReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.TriggerReset");

	UNormalBangWrapper_C_TriggerReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.TriggerIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UNormalBangWrapper_C::TriggerIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.TriggerIntro");

	UNormalBangWrapper_C_TriggerIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.Adjust Bang Image Translation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Translation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNormalBangWrapper_C::Adjust_Bang_Image_Translation(const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.Adjust Bang Image Translation");

	UNormalBangWrapper_C_Adjust_Bang_Image_Translation_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.Update Bang Icon Version
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNormalBangWrapper_C::Update_Bang_Icon_Version(int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.Update Bang Icon Version");

	UNormalBangWrapper_C_Update_Bang_Icon_Version_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BorderStyle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNormalBangWrapper_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.SetTutorialBorderStyle");

	UNormalBangWrapper_C_SetTutorialBorderStyle_Params params;
	params.BorderStyle = BorderStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.OnBangStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNormalBangWrapper_C::OnBangStateChanged(bool* bEnabled, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.OnBangStateChanged");

	UNormalBangWrapper_C_OnBangStateChanged_Params params;
	params.bEnabled = bEnabled;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.OnStopCallout
// (Event, Protected, BlueprintEvent)

void UNormalBangWrapper_C::OnStopCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.OnStopCallout");

	UNormalBangWrapper_C_OnStopCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.OnStartCallout
// (Event, Protected, BlueprintEvent)

void UNormalBangWrapper_C::OnStartCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.OnStartCallout");

	UNormalBangWrapper_C_OnStartCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNormalBangWrapper_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.PreConstruct");

	UNormalBangWrapper_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NormalBangWrapper.NormalBangWrapper_C.ExecuteUbergraph_NormalBangWrapper
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNormalBangWrapper_C::ExecuteUbergraph_NormalBangWrapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NormalBangWrapper.NormalBangWrapper_C.ExecuteUbergraph_NormalBangWrapper");

	UNormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
