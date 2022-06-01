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
    if (ObjectSerialNumber == 0 || ObjectIndex < 0)
        return nullptr;

	auto Object = UObject::GObjects->GetByIndex(ObjectIndex);
	
	if (!Object) // || Object-> != ObjectSerialNumber)
		return nullptr;

	return Object;
}
//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
