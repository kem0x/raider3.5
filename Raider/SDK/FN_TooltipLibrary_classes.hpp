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

// BlueprintGeneratedClass TooltipLibrary.TooltipLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UTooltipLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TooltipLibrary.TooltipLibrary_C");
		return ptr;
	}


	void STATIC_CreateXPTooltip(class APlayerController* Owner, const struct FText& Header, const struct FText& CommanderXP, const struct FText& BoostXP, const struct FText& RestXP, const struct FText& Body, class UObject* __WorldContext, class UCommonUserWidget** Out);
	void STATIC_Create_Basic_Multi_Line_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, TArray<struct FText>* Body_Text, class UUserWidget** Output);
	void STATIC_Create_Compare_Item_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget** Return_Value);
	void STATIC_Create_Item_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, int OverrideQuantity, class UObject* __WorldContext, class UWidget** Return_Value);
	void STATIC_Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, const struct FText& Tooltip_Text, class UObject* __WorldContext);
	void STATIC_Create_Custom_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget** Output);
	void STATIC_Create_Basic_Tooltip(class APlayerController* Owning_Player, const struct FText& Body_Text, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget** Output);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
