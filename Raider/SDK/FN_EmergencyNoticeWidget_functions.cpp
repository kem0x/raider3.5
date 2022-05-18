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

// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ShowNotice
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Body                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEmergencyNoticeWidget_C::ShowNotice(struct FText* Title, struct FText* Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ShowNotice");

	UEmergencyNoticeWidget_C_ShowNotice_Params params;
	params.Title = Title;
	params.Body = Body;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.HideNotice
// (Event, Protected, BlueprintEvent)

void UEmergencyNoticeWidget_C::HideNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.HideNotice");

	UEmergencyNoticeWidget_C_HideNotice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ExecuteUbergraph_EmergencyNoticeWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEmergencyNoticeWidget_C::ExecuteUbergraph_EmergencyNoticeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ExecuteUbergraph_EmergencyNoticeWidget");

	UEmergencyNoticeWidget_C_ExecuteUbergraph_EmergencyNoticeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
