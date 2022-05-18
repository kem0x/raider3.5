// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
TUObjectArray* UObject::GObjects = nullptr;
//---------------------------------------------------------------------------
bool FWeakObjectPtr::IsValid() const
{
	return false;
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	return nullptr;
}
//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
