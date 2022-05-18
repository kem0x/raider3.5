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

// WidgetBlueprintGeneratedClass CollectionBookWidget.CollectionBookWidget_C
// 0x0008 (0x0428 - 0x0420)
class UCollectionBookWidget_C : public UFortCollectionBookWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookWidget.CollectionBookWidget_C");
		return ptr;
	}


	void Construct();
	void SlotItemComplete(class UFortAccountItem* ItemSlotted, const struct FName& SlotId);
	void Destruct();
	void OnActivated();
	void ExecuteUbergraph_CollectionBookWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
