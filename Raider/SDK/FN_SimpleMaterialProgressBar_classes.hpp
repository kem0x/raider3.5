#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SimpleMaterialProgressBar.SimpleMaterialProgressBar_C
// 0x0040 (0x0248 - 0x0208)
class USimpleMaterialProgressBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Bar;                                                      // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                ColorA;                                                   // 0x0218(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ColorB;                                                   // 0x0228(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ColorBackground;                                          // 0x0238(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SimpleMaterialProgressBar.SimpleMaterialProgressBar_C");
		return ptr;
	}


	void SetColorB(const struct FLinearColor& Value);
	void SetColorA(const struct FLinearColor& Value);
	void SetProgress(float Value);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_SimpleMaterialProgressBar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
