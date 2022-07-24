// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuestUpdateEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.Construct");

	UAthenaQuestUpdateEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestIntro
// (Event, Public, BlueprintEvent)

void UAthenaQuestUpdateEntry_C::StartQuestIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestIntro");

	UAthenaQuestUpdateEntry_C_StartQuestIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestOutro
// (Event, Public, BlueprintEvent)

void UAthenaQuestUpdateEntry_C::StartQuestOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestOutro");

	UAthenaQuestUpdateEntry_C_StartQuestOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.ExecuteUbergraph_AthenaQuestUpdateEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestUpdateEntry_C::ExecuteUbergraph_AthenaQuestUpdateEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.ExecuteUbergraph_AthenaQuestUpdateEntry");

	UAthenaQuestUpdateEntry_C_ExecuteUbergraph_AthenaQuestUpdateEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*     UpdateWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaQuestUpdateEntry_C::AllQuestUpdatesFinished_0__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature");

	UAthenaQuestUpdateEntry_C_AllQuestUpdatesFinished_0__DelegateSignature_Params params;
	params.UpdateWidget = UpdateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
