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

// Function PackResource.PackResource_C.GetCountOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             SlateColor                     (Parm, OutParm)

void UPackResource_C::GetCountOpacity(struct FSlateColor* SlateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.GetCountOpacity");

	UPackResource_C_GetCountOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;
}


// Function PackResource.PackResource_C.RefreshLargerCountLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPackResource_C::RefreshLargerCountLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.RefreshLargerCountLayout");

	UPackResource_C_RefreshLargerCountLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.RefreshSmallerCountLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPackResource_C::RefreshSmallerCountLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.RefreshSmallerCountLayout");

	UPackResource_C_RefreshSmallerCountLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.Change Material
// (Public, BlueprintCallable, BlueprintEvent)

void UPackResource_C::Change_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.Change Material");

	UPackResource_C_Change_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPackResource_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.OnTouchStarted");

	UPackResource_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PackResource.PackResource_C.SetImageSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           useLargeIcon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPackResource_C::SetImageSize(bool useLargeIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.SetImageSize");

	UPackResource_C_SetImageSize_Params params;
	params.useLargeIcon = useLargeIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.TryUpdateCount
// (Private, BlueprintCallable, BlueprintEvent)

void UPackResource_C::TryUpdateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.TryUpdateCount");

	UPackResource_C_TryUpdateCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.TryUpdateBackground
// (Private, BlueprintCallable, BlueprintEvent)

void UPackResource_C::TryUpdateBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.TryUpdateBackground");

	UPackResource_C_TryUpdateBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.UpdateType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortResourceType> ResourceType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPackResource_C::UpdateType(TEnumAsByte<EFortResourceType> ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.UpdateType");

	UPackResource_C_UpdateType_Params params;
	params.ResourceType = ResourceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.UpdateCount
// (Public, BlueprintCallable, BlueprintEvent)

void UPackResource_C::UpdateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.UpdateCount");

	UPackResource_C_UpdateCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPackResource_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.Construct");

	UPackResource_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.On Material Change
// (BlueprintCallable, BlueprintEvent)

void UPackResource_C::On_Material_Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.On Material Change");

	UPackResource_C_On_Material_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackResource.PackResource_C.ExecuteUbergraph_PackResource
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPackResource_C::ExecuteUbergraph_PackResource(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackResource.PackResource_C.ExecuteUbergraph_PackResource");

	UPackResource_C_ExecuteUbergraph_PackResource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
