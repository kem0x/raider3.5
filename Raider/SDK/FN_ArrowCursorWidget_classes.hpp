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

// WidgetBlueprintGeneratedClass ArrowCursorWidget.ArrowCursorWidget_C
// 0x0000 (0x0210 - 0x0210)
class UArrowCursorWidget_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ArrowCursorWidget.ArrowCursorWidget_C");
		return ptr;
	}


	struct FSlateBrush GetBackground_0_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
