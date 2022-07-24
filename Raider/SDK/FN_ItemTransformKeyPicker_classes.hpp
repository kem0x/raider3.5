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

// WidgetBlueprintGeneratedClass ItemTransformKeyPicker.ItemTransformKeyPicker_C
// 0x0000 (0x0310 - 0x0310)
class UItemTransformKeyPicker_C : public UFortTransformKeyPicker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemTransformKeyPicker.ItemTransformKeyPicker_C");
		return ptr;
	}


	void NavigateToFirstItem();
	void NavigateToSelectedItem(class UFortItem* InItem);
	void GetSelectedKey(class UFortItem** SelectedKey);
	void SetSelectedKey(class UFortAccountItem* AccountKey);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
