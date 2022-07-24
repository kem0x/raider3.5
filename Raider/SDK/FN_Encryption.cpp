// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"
#include <Windows.h>

namespace SDK
{
//---------------------------------------------------------------------------
std::string GetEncryptedName(int32_t index)
{
	std::string name;
	UObject temp;
	static DWORD_PTR funcGetObjectName = ((DWORD_PTR)GetModuleHandleW(NULL) + 0x21FD2C0);

	temp.Name.ComparisonIndex = index;
	temp.Name.Number = 0;

	name = std::string(reinterpret_cast<FString(__fastcall*)(UObject*)>(funcGetObjectName)(&temp).ToString().c_str());

	return name;
}
//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif