#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// 0x07F0 (0x07F8 - 0x0008)
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HighlightBrush;                                           // 0x0008(0x0088) (Edit, BlueprintVisible)
	struct FButtonStyle                                LeftButtonStyle;                                          // 0x0090(0x0278) (Edit, BlueprintVisible)
	struct FButtonStyle                                CenterButtonStyle;                                        // 0x0308(0x0278) (Edit, BlueprintVisible)
	struct FButtonStyle                                RightButtonStyle;                                         // 0x0580(0x0278) (Edit, BlueprintVisible)
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// 0x0388 (0x0390 - 0x0008)
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                InnerButtonStyle;                                         // 0x0008(0x0278)
	struct FSlateBrush                                 NavigationButtonLeftImage;                                // 0x0280(0x0088)
	struct FSlateBrush                                 NavigationButtonRightImage;                               // 0x0308(0x0088)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
