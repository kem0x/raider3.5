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

// Function QuestsModal.QuestsModal_C.TouchToClose
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UQuestsModal_C::TouchToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsModal.QuestsModal_C.TouchToClose");

	UQuestsModal_C_TouchToClose_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuestsModal.QuestsModal_C.ClosePanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommitted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestsModal_C::ClosePanel(bool* bCommitted)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsModal.QuestsModal_C.ClosePanel");

	UQuestsModal_C_ClosePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommitted != nullptr)
		*bCommitted = params.bCommitted;
}


// Function QuestsModal.QuestsModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestsModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsModal.QuestsModal_C.Construct");

	UQuestsModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsModal.QuestsModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UQuestsModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsModal.QuestsModal_C.OnActivated");

	UQuestsModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsModal.QuestsModal_C.ExecuteUbergraph_QuestsModal
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestsModal_C::ExecuteUbergraph_QuestsModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestsModal.QuestsModal_C.ExecuteUbergraph_QuestsModal");

	UQuestsModal_C_ExecuteUbergraph_QuestsModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
