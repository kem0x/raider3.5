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

// Class EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayStatsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary");
		return ptr;
	}


	bool STATIC_NotEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B);
	bool STATIC_EqualEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B);
};


// Class EpicGameplayStatsRuntime.GameplayTagTableManager
// 0x0068 (0x0098 - 0x0030)
class UGameplayTagTableManager : public UDataAsset
{
public:
	TArray<struct FManagedGameplayTagDataTableItem>    Tables;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicGameplayStatsRuntime.GameplayTagTableManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
