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

// WidgetBlueprintGeneratedClass ArrowCursorWidget.ArrowCursorWidget_C
// 0x0000 (0x0208 - 0x0208)
class UArrowCursorWidget_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ArrowCursorWidget.ArrowCursorWidget_C");
		return ptr;
	}


	struct FSlateBrush GetBackground_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
