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

// WidgetBlueprintGeneratedClass CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C
// 0x0030 (0x0930 - 0x0900)
class UCollectionBookSectionTileWidget_C : public UFortCollectionBookSectionTileWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0900(0x0008) (Transient, DuplicateTransient)
	class UCommonBorder*                               SlotBorder;                                               // 0x0908(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      NormalTextStyle;                                          // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CompletedTextStyle;                                       // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NormalBorderStyle;                                        // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CompletedBorderStyle;                                     // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C");
		return ptr;
	}


	void OnSectionSlotUpdate(int* NumFilledSlots, int* NumSlots, EFortCollectionBookState* SectionState);
	void ExecuteUbergraph_CollectionBookSectionTileWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
