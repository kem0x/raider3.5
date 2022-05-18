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

// Function AthenaTalkingList.AthenaTalkingList_C.TalkingPlayersChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTalkingList_C::TalkingPlayersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTalkingList.AthenaTalkingList_C.TalkingPlayersChanged");

	UAthenaTalkingList_C_TalkingPlayersChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTalkingList.AthenaTalkingList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTalkingList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTalkingList.AthenaTalkingList_C.Construct");

	UAthenaTalkingList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTalkingList.AthenaTalkingList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTalkingList_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTalkingList.AthenaTalkingList_C.PreConstruct");

	UAthenaTalkingList_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTalkingList.AthenaTalkingList_C.ExecuteUbergraph_AthenaTalkingList
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTalkingList_C::ExecuteUbergraph_AthenaTalkingList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTalkingList.AthenaTalkingList_C.ExecuteUbergraph_AthenaTalkingList");

	UAthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
