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

// Function Button_Shoot.Button_Shoot_C.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UButton_Shoot_C::OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Shoot.Button_Shoot_C.OnTouchMoved");

	UButton_Shoot_C_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Button_Shoot.Button_Shoot_C.Check For Tag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            TagToCheck                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           HasTag                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UButton_Shoot_C::Check_For_Tag(const struct FGameplayTag& TagToCheck, bool* HasTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Shoot.Button_Shoot_C.Check For Tag");

	UButton_Shoot_C_Check_For_Tag_Params params;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasTag != nullptr)
		*HasTag = params.HasTag;
}


// Function Button_Shoot.Button_Shoot_C.HandleWeaponChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             New_Weapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             Previous_Weapon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Shoot_C::HandleWeaponChanged(class AFortWeapon* New_Weapon, class AFortWeapon* Previous_Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Shoot.Button_Shoot_C.HandleWeaponChanged");

	UButton_Shoot_C_HandleWeaponChanged_Params params;
	params.New_Weapon = New_Weapon;
	params.Previous_Weapon = Previous_Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Shoot.Button_Shoot_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UButton_Shoot_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Shoot.Button_Shoot_C.OnTouchStarted");

	UButton_Shoot_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Button_Shoot.Button_Shoot_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UButton_Shoot_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Shoot.Button_Shoot_C.OnTouchEnded");

	UButton_Shoot_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Button_Shoot.Button_Shoot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UButton_Shoot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Shoot.Button_Shoot_C.Construct");

	UButton_Shoot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Shoot.Button_Shoot_C.On Build Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEntering                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Shoot_C::On_Build_Mode_Changed(bool bEntering)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Shoot.Button_Shoot_C.On Build Mode Changed");

	UButton_Shoot_C_On_Build_Mode_Changed_Params params;
	params.bEntering = bEntering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button_Shoot.Button_Shoot_C.ExecuteUbergraph_Button_Shoot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton_Shoot_C::ExecuteUbergraph_Button_Shoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_Shoot.Button_Shoot_C.ExecuteUbergraph_Button_Shoot");

	UButton_Shoot_C_ExecuteUbergraph_Button_Shoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
