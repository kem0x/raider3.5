#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class URenderToTextureFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C");
		return ptr;
	}


	void STATIC_Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, float Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size);
	void STATIC_Array_to_HLSL_Int_Array(TEnumAsByte<EIntTypes> Type, class UObject* __WorldContext, struct FString* Variable_Name, TArray<int>* Int, TArray<struct FVector2D>* int2, TArray<struct FVector>* int3, TArray<struct FLinearColor>* int4, struct FString* String);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
