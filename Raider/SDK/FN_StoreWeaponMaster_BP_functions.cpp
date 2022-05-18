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

// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStoreWeaponMaster_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.UserConstructionScript");

	AStoreWeaponMaster_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.OnLoaded_F90E39F1410BE83EB4E318A6426EF786
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStoreWeaponMaster_BP_C::OnLoaded_F90E39F1410BE83EB4E318A6426EF786(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.OnLoaded_F90E39F1410BE83EB4E318A6426EF786");

	AStoreWeaponMaster_BP_C_OnLoaded_F90E39F1410BE83EB4E318A6426EF786_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStoreWeaponMaster_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveBeginPlay");

	AStoreWeaponMaster_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStoreWeaponMaster_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveTick");

	AStoreWeaponMaster_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ExecuteUbergraph_StoreWeaponMaster_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStoreWeaponMaster_BP_C::ExecuteUbergraph_StoreWeaponMaster_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ExecuteUbergraph_StoreWeaponMaster_BP");

	AStoreWeaponMaster_BP_C_ExecuteUbergraph_StoreWeaponMaster_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
