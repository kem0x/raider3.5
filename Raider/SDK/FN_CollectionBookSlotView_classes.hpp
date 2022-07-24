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

// WidgetBlueprintGeneratedClass CollectionBookSlotView.CollectionBookSlotView_C
// 0x0008 (0x02B0 - 0x02A8)
class UCollectionBookSlotView_C : public UFortCollectionBookSlotView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookSlotView.CollectionBookSlotView_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_CollectionBookSlotView(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
