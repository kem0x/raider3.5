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

// Function Athena_PartySuggestion.Athena_PartySuggestion_C.SetupMIDReferences
// (Public, BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::SetupMIDReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.SetupMIDReferences");

	UAthena_PartySuggestion_C_SetupMIDReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.SetMainMIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* BorderMID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* TailMID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* SparklesMID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_PartySuggestion_C::SetMainMIDs(class UMaterialInstanceDynamic* BorderMID, class UMaterialInstanceDynamic* TailMID, class UMaterialInstanceDynamic* SparklesMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.SetMainMIDs");

	UAthena_PartySuggestion_C_SetMainMIDs_Params params;
	params.BorderMID = BorderMID;
	params.TailMID = TailMID;
	params.SparklesMID = SparklesMID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitPhysAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::InitPhysAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitPhysAnim");

	UAthena_PartySuggestion_C_InitPhysAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::InitMIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitMIDs");

	UAthena_PartySuggestion_C_InitMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitNewPartySuggestion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPartySuggestion    NewPartySuggestion             (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthena_PartySuggestion_C::InitNewPartySuggestion(const struct FFortPartySuggestion& NewPartySuggestion)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitNewPartySuggestion");

	UAthena_PartySuggestion_C_InitNewPartySuggestion_Params params;
	params.NewPartySuggestion = NewPartySuggestion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnMouseButtonDown_0_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthena_PartySuggestion_C::OnMouseButtonDown_0_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnMouseButtonDown_0_1");

	UAthena_PartySuggestion_C_OnMouseButtonDown_0_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.NewPartySuggestion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPartySuggestion    Party_Suggestion_Struct        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthena_PartySuggestion_C::NewPartySuggestion(const struct FFortPartySuggestion& Party_Suggestion_Struct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.NewPartySuggestion");

	UAthena_PartySuggestion_C_NewPartySuggestion_Params params;
	params.Party_Suggestion_Struct = Party_Suggestion_Struct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.UpdateDisplay
// (BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::UpdateDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.UpdateDisplay");

	UAthena_PartySuggestion_C_UpdateDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.UpdatePartySuggestion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPartySuggestion    PartySuggestionStruct          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthena_PartySuggestion_C::UpdatePartySuggestion(const struct FFortPartySuggestion& PartySuggestionStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.UpdatePartySuggestion");

	UAthena_PartySuggestion_C_UpdatePartySuggestion_Params params;
	params.PartySuggestionStruct = PartySuggestionStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::PlayOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.PlayOutro");

	UAthena_PartySuggestion_C_PlayOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.HidePartySuggestion
// (BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::HidePartySuggestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.HidePartySuggestion");

	UAthena_PartySuggestion_C_HidePartySuggestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnUnhovered");

	UAthena_PartySuggestion_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnHovered
// (BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnHovered");

	UAthena_PartySuggestion_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.PlayIntro");

	UAthena_PartySuggestion_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.DismissSuggestion
// (BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::DismissSuggestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.DismissSuggestion");

	UAthena_PartySuggestion_C_DismissSuggestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.ClobberSuggestion
// (BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::ClobberSuggestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.ClobberSuggestion");

	UAthena_PartySuggestion_C_ClobberSuggestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAthena_PartySuggestion_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature");

	UAthena_PartySuggestion_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAthena_PartySuggestion_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature");

	UAthena_PartySuggestion_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAthena_PartySuggestion_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UAthena_PartySuggestion_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.ForceAcceptSuggestion
// (BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::ForceAcceptSuggestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.ForceAcceptSuggestion");

	UAthena_PartySuggestion_C_ForceAcceptSuggestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthena_PartySuggestion_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.Construct");

	UAthena_PartySuggestion_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthena_PartySuggestion_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature");

	UAthena_PartySuggestion_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_PartySuggestion_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.Tick");

	UAthena_PartySuggestion_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_PartySuggestion_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.PreConstruct");

	UAthena_PartySuggestion_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.ExecuteUbergraph_Athena_PartySuggestion
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthena_PartySuggestion_C::ExecuteUbergraph_Athena_PartySuggestion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.ExecuteUbergraph_Athena_PartySuggestion");

	UAthena_PartySuggestion_C_ExecuteUbergraph_Athena_PartySuggestion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnSuggestionMouseDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthena_PartySuggestion_C::OnSuggestionMouseDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnSuggestionMouseDown__DelegateSignature");

	UAthena_PartySuggestion_C_OnSuggestionMouseDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PartyFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_LFG_SuggestedPartyItem_C* FocusedPartyItem               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthena_PartySuggestion_C::PartyFocused__DelegateSignature(class UAthena_LFG_SuggestedPartyItem_C* FocusedPartyItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PartySuggestion.Athena_PartySuggestion_C.PartyFocused__DelegateSignature");

	UAthena_PartySuggestion_C_PartyFocused__DelegateSignature_Params params;
	params.FocusedPartyItem = FocusedPartyItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
