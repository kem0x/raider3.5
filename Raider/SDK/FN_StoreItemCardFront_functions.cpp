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

// Function StoreItemCardFront.StoreItemCardFront_C.Get Type Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   OutText                        (Parm, OutParm)

void UStoreItemCardFront_C::Get_Type_Text(struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.Get Type Text");

	UStoreItemCardFront_C_Get_Type_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function StoreItemCardFront.StoreItemCardFront_C.Get Card Name Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreItemCardFront_C::Get_Card_Name_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.Get Card Name Text");

	UStoreItemCardFront_C_Get_Card_Name_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreItemCardFront.StoreItemCardFront_C.Draw_Card
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreItemCardFront_C::Draw_Card()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.Draw_Card");

	UStoreItemCardFront_C_Draw_Card_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemCardFront.StoreItemCardFront_C.Initialize_Card
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCard                   inCard                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreItemCardFront_C::Initialize_Card(const struct FCard& inCard)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.Initialize_Card");

	UStoreItemCardFront_C_Initialize_Card_Params params;
	params.inCard = inCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemCardFront.StoreItemCardFront_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreItemCardFront_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.Construct");

	UStoreItemCardFront_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemCardFront.StoreItemCardFront_C.OnFortStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortStoreState                NewStoreState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreItemCardFront_C::OnFortStoreStateChanged(EFortStoreState NewStoreState)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.OnFortStoreStateChanged");

	UStoreItemCardFront_C_OnFortStoreStateChanged_Params params;
	params.NewStoreState = NewStoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemCardFront.StoreItemCardFront_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InitObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreItemCardFront_C::InitFromObject(class UObject* InitObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.InitFromObject");

	UStoreItemCardFront_C_InitFromObject_Params params;
	params.InitObject = InitObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemCardFront.StoreItemCardFront_C.ExecuteUbergraph_StoreItemCardFront
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreItemCardFront_C::ExecuteUbergraph_StoreItemCardFront(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemCardFront.StoreItemCardFront_C.ExecuteUbergraph_StoreItemCardFront");

	UStoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
