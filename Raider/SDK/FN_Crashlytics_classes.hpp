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

// Class Crashlytics.CrashlyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCrashlyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Crashlytics.CrashlyticsBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetUserName(const struct FString& Name);
	void STATIC_SetUserIdentifier(const struct FString& ID);
	void STATIC_SetUserEmail(const struct FString& Email);
	void STATIC_SetStringKey(const struct FString& Key, const struct FString& Value);
	void STATIC_SetIntegerKey(const struct FString& Key, int Value);
	void STATIC_SetFloatKey(const struct FString& Key, float Value);
	void STATIC_SetBooleanKey(const struct FString& Key, bool Value);
	void STATIC_LogMessage(const struct FString& MESSAGE);
	void STATIC_LogException(const struct FString& MESSAGE);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
