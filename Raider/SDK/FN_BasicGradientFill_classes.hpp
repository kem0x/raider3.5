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

// WidgetBlueprintGeneratedClass BasicGradientFill.BasicGradientFill_C
// 0x003C (0x025C - 0x0220)
class UBasicGradientFill_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      ImageFill;                                                // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                Color_1;                                                  // 0x0230(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_2;                                                  // 0x0240(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   Brush_Size;                                               // 0x0250(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BasicGradientFill.BasicGradientFill_C");
		return ptr;
	}


	void Set_Brush_Size(const struct FVector2D& Brush_Size);
	void Set_Fill(const struct FLinearColor& Color_1, const struct FLinearColor& Color_2, float Rotation__0___1_);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_BasicGradientFill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
