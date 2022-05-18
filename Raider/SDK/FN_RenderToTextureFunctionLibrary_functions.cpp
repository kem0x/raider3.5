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

// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Screen_Position                (Parm, OutParm, IsPlainOldData)
// struct FVector2D               Screen_Size                    (Parm, OutParm, IsPlainOldData)

void URenderToTextureFunctionLibrary_C::STATIC_Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, float Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position");

	URenderToTextureFunctionLibrary_C_Set_Canvas_Material_Scale_and_Position_Params params;
	params.Size = Size;
	params.Position = Position;
	params.Scale = Scale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Screen_Position != nullptr)
		*Screen_Position = params.Screen_Position;
	if (Screen_Size != nullptr)
		*Screen_Size = params.Screen_Size;
}


// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIntTypes>         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Variable_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    int                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       int2                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         int3                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    int4                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void URenderToTextureFunctionLibrary_C::STATIC_Array_to_HLSL_Int_Array(TEnumAsByte<EIntTypes> Type, class UObject* __WorldContext, struct FString* Variable_Name, TArray<int>* int, TArray<struct FVector2D>* int2, TArray<struct FVector>* int3, TArray<struct FLinearColor>* int4, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array");

	URenderToTextureFunctionLibrary_C_Array_to_HLSL_Int_Array_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variable_Name != nullptr)
		*Variable_Name = params.Variable_Name;
	if (int != nullptr)
		*int = params.int;
	if (int2 != nullptr)
		*int2 = params.int2;
	if (int3 != nullptr)
		*int3 = params.int3;
	if (int4 != nullptr)
		*int4 = params.int4;
	if (String != nullptr)
		*String = params.String;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
