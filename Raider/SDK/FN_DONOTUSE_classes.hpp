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

// WidgetBlueprintGeneratedClass DONOTUSE.DONOTUSE_C
// 0x0019 (0x0221 - 0x0208)
class UDONOTUSE_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UFortMultiSizeItemCard*                      FortMultiSizeItemCard_1;                                  // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortItem*                                   Item;                                                     // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortItemCardSize                                  ItemCardSize;                                             // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DONOTUSE.DONOTUSE_C");
		return ptr;
	}


	void Refresh();
	void Construct();
	void ExecuteUbergraph_DONOTUSE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
