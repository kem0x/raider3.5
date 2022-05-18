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

// Class BlueprintContext.BlueprintContextBase
// 0x0000 (0x0028 - 0x0028)
class UBlueprintContextBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextBase");
		return ptr;
	}

};


// Class BlueprintContext.BlueprintContextLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextLibrary");
		return ptr;
	}


	class UBlueprintContextBase* STATIC_GetContext(class UObject* ContextObject, class UClass* Class);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
