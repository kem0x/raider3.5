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

// Function BuildingBar.BuildingBar_C.UpdateBuildingTrap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingTrap*           BuildingTrap                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::UpdateBuildingTrap(class ABuildingTrap* BuildingTrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.UpdateBuildingTrap");

	UBuildingBar_C_UpdateBuildingTrap_Params params;
	params.BuildingTrap = BuildingTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Set Display Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortBuildingInteraction       Display_Mode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Set_Display_Mode(EFortBuildingInteraction Display_Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Set Display Mode");

	UBuildingBar_C_Set_Display_Mode_Params params;
	params.Display_Mode = Display_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Durability Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuildingBar_C::Update_Durability_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Durability Text");

	UBuildingBar_C_Update_Durability_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Current Durability Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentDurability              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Update_Current_Durability_Value(float CurrentDurability)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Current Durability Value");

	UBuildingBar_C_Update_Current_Durability_Value_Params params;
	params.CurrentDurability = CurrentDurability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Max Durability Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Update_Max_Durability_Value(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Max Durability Value");

	UBuildingBar_C_Update_Max_Durability_Value_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Initialize Bar
// (Protected, BlueprintCallable, BlueprintEvent)

void UBuildingBar_C::Initialize_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Initialize Bar");

	UBuildingBar_C_Initialize_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Set Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Set_Timer(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Set Timer");

	UBuildingBar_C_Set_Timer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update
// (Protected, BlueprintCallable, BlueprintEvent)

void UBuildingBar_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update");

	UBuildingBar_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update HP Delta Bar
// (Public, BlueprintCallable, BlueprintEvent)

void UBuildingBar_C::Update_HP_Delta_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update HP Delta Bar");

	UBuildingBar_C_Update_HP_Delta_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update HP Fill Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuildingBar_C::Update_HP_Fill_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update HP Fill Bar");

	UBuildingBar_C_Update_HP_Fill_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Current HP Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Update_Current_HP_Value(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Current HP Value");

	UBuildingBar_C_Update_Current_HP_Value_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Max HP Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Update_Max_HP_Value(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Max HP Value");

	UBuildingBar_C_Update_Max_HP_Value_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.PreConstruct");

	UBuildingBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildingBar_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Destruct");

	UBuildingBar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.ExecuteUbergraph_BuildingBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::ExecuteUbergraph_BuildingBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.ExecuteUbergraph_BuildingBar");

	UBuildingBar_C_ExecuteUbergraph_BuildingBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
