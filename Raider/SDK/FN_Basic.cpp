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
	for (int i = 0; i < UObject::GObjects->NumElements; i++)
	{
		auto Object = UObject::GObjects->GetByIndex(i);

		if (!Object)
			continue;
		
		if (i == ObjectIndex)
			return Object;
	}
	
	return nullptr;
}
//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
