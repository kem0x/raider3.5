#pragma once
#pragma warning(disable : 4267 4244)

// Fortnite (3.1) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

typedef __int8 int8;
typedef __int16 int16;
typedef __int32 int32;
typedef __int64 int64;

typedef unsigned __int8 uint8;
typedef unsigned __int16 uint16;
typedef unsigned __int32 uint32;
typedef unsigned __int64 uint64;

namespace SDK
{
    template <typename Fn>
    inline Fn GetVFunction(const void* instance, std::size_t index)
    {
        auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
        return reinterpret_cast<Fn>(vtable[index]);
    }

    class UObject;

    struct TUObjectArray
    {
        uint8_t* Objects;
        uint32_t MaxElements;
        uint32_t NumElements;

        inline int32_t Num()
        {
            return NumElements;
        }

        inline UObject* GetByIndex(int32_t id)
        {
            auto Offset = 24 * id;
            return *(UObject**)(Objects + Offset);
        }
    };

    inline void* (*FMemory_Malloc)(int32 Size, int32 Alignment);
    inline void* (*FMemory_Realloc)(void* Memory, int64 NewSize, uint32 Alignment);
    inline void (*FMemory_Free)(void* Mem);

    template <class T>
    struct TArray
    {
        friend struct FString;

    public:
        inline TArray()
        {
            Data = nullptr;
            Count = Max = 0;
        };

        inline int Num() const
        {
            return Count;
        };

        inline T& operator[](int i)
        {
            return Data[i];
        };

        inline const T& operator[](int i) const
        {
            return Data[i];
        };

        inline bool IsValidIndex(int i) const
        {
            return i < Num();
        }

        inline int Slack() const
        {
            return Max - Count;
        }

        inline void Reserve(const int NumElements)
        {
            Data = Slack() >= NumElements ? Data : (T*)FMemory_Realloc(Data, (Max = Count + NumElements) * sizeof(T), 0);
        }

        inline int Add(const T& InData)
        {
            Reserve(1);
            Data[Count] = InData;
            ++Count;
            return Count;
        }

        inline void FreeArray()
        {
            FMemory_Free(Data);
            Data = nullptr;
            Count = 0;
            Max = 0;
        }

    public:
        T* Data;
        int32_t Count;
        int32_t Max;
    };

    template <typename ElementType, int32_t MaxTotalElements, int32_t ElementsPerChunk>
    class TStaticIndirectArrayThreadSafeRead
    {
    public:
        inline size_t Num() const
        {
            return NumElements;
        }

        inline bool IsValidIndex(int32_t index) const
        {
            return index < Num() && index >= 0;
        }

        inline ElementType const* const& operator[](int32_t index) const
        {
            return *GetItemPtr(index);
        }

    private:
        inline ElementType const* const* GetItemPtr(int32_t Index) const
        {
            int32_t ChunkIndex = Index / ElementsPerChunk;
            int32_t WithinChunkIndex = Index % ElementsPerChunk;
            ElementType** Chunk = Chunks[ChunkIndex];
            return Chunk + WithinChunkIndex;
        }

        enum
        {
            ChunkTableSize = (MaxTotalElements + ElementsPerChunk - 1) / ElementsPerChunk
        };

        ElementType** Chunks[ChunkTableSize];
        int32_t NumElements;
        int32_t NumChunks;
    };

    struct FString : private TArray<wchar_t>
    {
        inline FString() {};

        FString(const wchar_t* other)
        {
            Max = Count = *other ? std::wcslen(other) + 1 : 0;

            if (Count)
            {
                Data = const_cast<wchar_t*>(other);
            }
        };

        inline bool IsValid() const
        {
            return Data != nullptr;
        }

        inline const wchar_t* c_str() const
        {
            return Data;
        }

        std::string ToString() const
        {
            auto length = std::wcslen(Data);

            std::string str(length, '\0');

            std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

            return str;
        }
    };

    struct FName;

    inline void (*FNameToString)(FName* This, FString& OutStr);

    struct FName
    {
        int32_t ComparisonIndex;
        int32_t Number;

        std::string ToString()
        {
            if (!this)
                return "";

            FString temp;

            FNameToString(this, temp);

            auto wName = std::wstring(temp.c_str());
            auto name = std::string(wName.begin(), wName.end());

            FMemory_Free((void*)temp.c_str());

            auto pos = name.rfind('/');
            if (pos == std::string::npos)
            {
                return name;
            }

            return name.substr(pos + 1);
        }
    };

    template <class TEnum>
    class TEnumAsByte
    {
    public:
        inline TEnumAsByte()
        {
        }

        inline TEnumAsByte(TEnum _value)
            : value(static_cast<uint8_t>(_value))
        {
        }

        explicit inline TEnumAsByte(int32_t _value)
            : value(static_cast<uint8_t>(_value))
        {
        }

        explicit inline TEnumAsByte(uint8_t _value)
            : value(_value)
        {
        }

        inline operator TEnum() const
        {
            return (TEnum)value;
        }

        inline TEnum GetValue() const
        {
            return (TEnum)value;
        }

    private:
        uint8_t value;
    };

    class FScriptInterface
    {
    private:
        UObject* ObjectPointer;
        void* InterfacePointer;

    public:
        inline UObject* GetObject() const
        {
            return ObjectPointer;
        }

        inline UObject*& GetObjectRef()
        {
            return ObjectPointer;
        }

        inline void* GetInterface() const
        {
            return ObjectPointer != nullptr ? InterfacePointer : nullptr;
        }
    };

    template <class InterfaceType>
    class TScriptInterface : public FScriptInterface
    {
    public:
        inline InterfaceType* operator->() const
        {
            return (InterfaceType*)GetInterface();
        }

        inline InterfaceType& operator*() const
        {
            return *((InterfaceType*)GetInterface());
        }

        inline operator bool() const
        {
            return GetInterface() != nullptr;
        }
    };

    struct FText
    {
        char UnknownData[0x18];
    };

    struct FScriptDelegate
    {
        char UnknownData[16];
    };

    struct FScriptMulticastDelegate
    {
        char UnknownData[16];
    };

    struct FWeakObjectPtr
    {
    public:
        bool IsValid() const;

        UObject* Get() const;

        int32_t ObjectIndex;
        int32_t ObjectSerialNumber;
    };

    template <class T, class TWeakObjectPtrBase = FWeakObjectPtr>
    struct TWeakObjectPtr : private TWeakObjectPtrBase
    {
    public:
        inline T* Get() const
        {
            return (T*)TWeakObjectPtrBase::Get();
        }

        inline T& operator*() const
        {
            return *Get();
        }

        inline T* operator->() const
        {
            return Get();
        }

        inline bool IsValid() const
        {
            return TWeakObjectPtrBase::IsValid();
        }
    };

    template <class T, class TBASE>
    class TAutoPointer : public TBASE
    {
    public:
        inline operator T*() const
        {
            return TBASE::Get();
        }

        inline operator const T*() const
        {
            return (const T*)TBASE::Get();
        }

        explicit inline operator bool() const
        {
            return TBASE::Get() != nullptr;
        }
    };

    template <class T>
    class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
    {
    public:
    };

    template <typename TObjectID>
    class TPersistentObjectPtr
    {
    public:
        FWeakObjectPtr WeakPtr;
        int32_t TagAtLastTest;
        TObjectID ObjectID;
    };

    struct FStringAssetReference_
    {
        char UnknownData[0x10];
    };

    class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
    {
    };

    template <typename ObjectType>
    class TAssetPtr : FAssetPtr
    {
    };

    struct FUniqueObjectGuid_
    {
        char UnknownData[0x10];
    };

    class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
    {
    };

    template <typename ObjectType>
    class TLazyObjectPtr : FLazyObjectPtr
    {
    };
}

template <int32 NumElements>
class TInlineAllocator
{
private:
    template <int32 Size, int32 Alignment>
    struct alignas(Alignment) TAlligendBytes
    {
        uint8 Pad[Size];
    };

    template <typename ElementType>
    struct TTypeCompatibleBytes : public TAlligendBytes<sizeof(ElementType), alignof(ElementType)>
    {
    };

public:
    template <typename ElementType>
    class ForElementType
    {
    private:
        TTypeCompatibleBytes<ElementType> InlineData[NumElements];

        void* SecondaryData;

    public:
        FORCEINLINE ElementType& operator[](int32 Index)
        {
            return *(ElementType*)(&InlineData[Index]);
        }
        FORCEINLINE const ElementType& operator[](int32 Index) const
        {
            return *(ElementType*)(&InlineData[Index]);
        }

        FORCEINLINE void operator=(void* InElements)
        {
            SecondaryData = InElements;
        }

        FORCEINLINE ElementType& GetInlinElement(int32 Index)
        {
            return *(ElementType*)(&InlineData[Index]);
        }
        FORCEINLINE const ElementType& GetInlinElement(int32 Index) const
        {
            return *(ElementType*)(&InlineData[Index]);
        }
        FORCEINLINE ElementType& GetSecondaryElement(int32 Index)
        {
            return (ElementType)SecondaryData[Index];
        }
        FORCEINLINE const ElementType& GetSecondaryElement(int32 Index) const
        {
            return (ElementType)SecondaryData[Index];
        }
    };
};

class TBitArray
{
private:
    template <typename ArrayType>
    friend class TSparseArray;
    template <typename SetType>
    friend class TSet;

private:
    TInlineAllocator<4>::ForElementType<uint32> Data;
    int32 NumBits;
    int32 MaxBits;

    struct FRelativeBitReference
    {
    public:
        FORCEINLINE explicit FRelativeBitReference(int32 BitIndex)
            : DWORDIndex(BitIndex >> ((int32)5))
            , Mask(1 << (BitIndex & (((int32)32) - 1)))
        {
        }

        int32 DWORDIndex;
        uint32 Mask;
    };
};

template <typename ElementType>
union TSparseArrayElementOrListLink
{
    TSparseArrayElementOrListLink(ElementType& InElement)
        : ElementData(InElement)
    {
    }
    TSparseArrayElementOrListLink(ElementType&& InElement)
        : ElementData(InElement)
    {
    }

    TSparseArrayElementOrListLink(int32 InPrevFree, int32 InNextFree)
        : PrevFreeIndex(InPrevFree)
        , NextFreeIndex(InNextFree)
    {
    }

    TSparseArrayElementOrListLink<ElementType> operator=(const TSparseArrayElementOrListLink<ElementType>& Other)
    {
        return TSparseArrayElementOrListLink(Other.NextFreeIndex, Other.PrevFreeIndex);
    }

    /** If the element is allocated, its value is stored here. */
    ElementType ElementData;

    struct
    {
        /** If the element isn't allocated, this is a link to the previous element in the array's free list. */
        int32 PrevFreeIndex;

        /** If the element isn't allocated, this is a link to the next element in the array's free list. */
        int32 NextFreeIndex;
    };
};

template <typename ArrayType>
class TSparseArray
{
private:
    template <typename SetType>
    friend class TSet;

public:
    typedef TSparseArrayElementOrListLink<ArrayType> FSparseArrayElement;

    SDK::TArray<FSparseArrayElement> Data;
    TBitArray AllocationFlags;
    int32 FirstFreeIndex;
    int32 NumFreeIndices;
};

template <typename ElementType>
class TSetElement
{
public:
    ElementType Value;
    mutable int32 HashNextId;
    mutable int32 HashIndex;

    TSetElement(ElementType InValue, int32 InHashNextId, int32 InHashIndex)
        : Value(InValue)
        , HashNextId(InHashNextId)
        , HashIndex(InHashIndex)
    {
    }

    FORCEINLINE TSetElement<ElementType>& operator=(const TSetElement<ElementType>& Other)
    {
        Value = Other.Value;
    }

    FORCEINLINE bool operator==(const TSetElement& Other) const
    {
        return Value == Other.Value;
    }
    FORCEINLINE bool operator!=(const TSetElement& Other) const
    {
        return Value != Other.Value;
    }
};

template <typename SetType>
class TSet
{
private:
    friend TSparseArray;

public:
    typedef TSetElement<SetType> ElementType;
    typedef TSparseArrayElementOrListLink<ElementType> ArrayElementType;

    TSparseArray<ElementType> Elements;

    mutable TInlineAllocator<1>::ForElementType<int> Hash;
    mutable int32 HashSize;

public:
    class FBaseIterator
    {
    private:
        TSet<SetType>& IteratedSet;
        TSparseArray<ElementType>::FBaseIterator ElementIt;

    public:
        FORCEINLINE FBaseIterator(const TSet<SetType>& InSet, TSparseArray<TSetElement<SetType>>::FBaseIterator InElementIt)
            : IteratedSet(const_cast<TSet<SetType>&>(InSet))
            , ElementIt(InElementIt)
        {
        }

        FORCEINLINE TSet<SetType>::FBaseIterator& operator++()
        {
            ++ElementIt;
            return *this;
        }
        FORCEINLINE bool operator==(const TSet<SetType>::FBaseIterator& OtherIt) const
        {
            return ElementIt == OtherIt.ElementIt;
        }
        FORCEINLINE bool operator!=(const TSet<SetType>::FBaseIterator& OtherIt) const
        {
            return ElementIt != OtherIt.ElementIt;
        }
        FORCEINLINE TSet<SetType>::FBaseIterator& operator=(TSet<SetType>::FBaseIterator& OtherIt)
        {
            return ElementIt = OtherIt.ElementIt;
        }
        FORCEINLINE SetType& operator*()
        {
            return *ElementIt.Value;
        }
        FORCEINLINE const SetType& operator*() const
        {
            return *ElementIt.Value;
        }
        FORCEINLINE ElementType& operator->()
        {
            return *(ElementType*)&*ElementIt;
        }
        FORCEINLINE const ElementType& operator->() const
        {
            return *(ElementType*)&*ElementIt;
        }
    };

public:
    FORCEINLINE TSet<SetType>::FBaseIterator begin()
    {
        return TSet<SetType>::FBaseIterator(*this, Elements.begin());
    }
    FORCEINLINE const TSet<SetType>::FBaseIterator begin() const
    {
        return TSet<SetType>::FBaseIterator(*this, Elements.begin());
    }
    FORCEINLINE TSet<SetType>::FBaseIterator end()
    {
        return TSet<SetType>::FBaseIterator(*this, Elements.end());
    }
    FORCEINLINE const TSet<SetType>::FBaseIterator end() const
    {
        return TSet<SetType>::FBaseIterator(*this, Elements.end());
    }

    FORCEINLINE bool IsValid() const
    {
        return Elements.Data.Data != nullptr && Elements.AllocationFlags.MaxBits > 0;
    }
    FORCEINLINE TSparseArray<ElementType>& GetElements()
    {
        return Elements;
    }
    FORCEINLINE const TSparseArray<ElementType>& GetElements() const
    {
        return Elements;
    }

    FORCEINLINE const int32 Find(const SetType& ElementToLookFor) const
    {
        for (auto It = this->begin(); It != this->end(); ++It)
        {
            if (*It == ElementToLookFor)
            {
                return It.GetIndex();
            }
        }
        return -1;
    }

    FORCEINLINE int32 AddSingle(SetType InElement, int32 InHashIndex = 0, int32 InHashNextId = 0)
    {
        // ToDo: Check for duplication

        if (!this->IsValid())
            return this->Initialize();

        return Elements.AddSingle({ InElement, InHashIndex, InHashNextId });
    }
    FORCEINLINE void Initialize(const int32 NumElementsToInitWith = 5)
    {
        if (this->IsValid())
            return;

        Elements.Data.MaxElements = NumElementsToInitWith;
        Elements.Data.Count = NumElementsToInitWith;
        Elements.Data.Data = (ArrayElementType*)(Malloc(NumElementsToInitWith * sizeof(ElementType), alignof(ElementType)));
        for (int i = 0; i < NumElementsToInitWith; i++)
        {
            Elements.Data.Data[i].PrevFreeIndex = i - 1;
            Elements.Data.Data[i].NextFreeIndex = i + 1;
        }

        Elements.FirstFreeIndex = 0;
        Elements.NumFreeIndices = NumElementsToInitWith;

        Elements.AllocationFlags.MaxBits = 128;
        Elements.AllocationFlags.NumBits = NumElementsToInitWith;
        Elements.AllocationFlags.ZeroAll();

        Hash = Malloc(NumElementsToInitWith * sizeof(ElementType), alignof(ElementType));
        HashSize = NumElementsToInitWith * sizeof(ElementType);
    }
};

template <typename KeyType, typename ValueType>
class TPair
{
private:
    KeyType First;
    ValueType Second;

public:
    TPair(KeyType Key, ValueType Value)
        : First(Key)
        , Second(Value)
    {
    }

public:
    FORCEINLINE KeyType& Key()
    {
        return First;
    }
    FORCEINLINE const KeyType& Key() const
    {
        return First;
    }
    FORCEINLINE ValueType& Value()
    {
        return Second;
    }
    FORCEINLINE const ValueType& Value() const
    {
        return Second;
    }
};

template <typename KeyType, typename ValueType>
class TMap
{
public:
    typedef TPair<KeyType, ValueType> ElementType;

    TSet<ElementType> Pairs;

public:
    class FBaseIterator
    {
    private:
        TMap<KeyType, ValueType>& IteratedMap;
        TSet<ElementType>::FBaseIterator SetIt;

    public:
        FBaseIterator(TMap<KeyType, ValueType>& InMap, TSet<ElementType>::FBaseIterator InSet)
            : IteratedMap(InMap)
            , SetIt(InSet)
        {
        }
        FORCEINLINE TMap<KeyType, ValueType>::FBaseIterator operator++()
        {
            ++SetIt;
            return *this;
        }
        FORCEINLINE TSet<ElementType>::ElementType& operator*()
        {
            return *SetIt;
        }
        FORCEINLINE const TSet<ElementType>::ElementType& operator*() const
        {
            return *SetIt;
        }
        FORCEINLINE bool operator==(const TMap<KeyType, ValueType>::FBaseIterator& Other) const
        {
            return SetIt == Other.SetIt;
        }
        FORCEINLINE bool operator!=(const TMap<KeyType, ValueType>::FBaseIterator& Other) const
        {
            return SetIt != Other.SetIt;
        }
    };

    FORCEINLINE TMap<KeyType, ValueType>::FBaseIterator begin()
    {
        return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.begin());
    }
    FORCEINLINE const TMap<KeyType, ValueType>::FBaseIterator begin() const
    {
        return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.begin());
    }
    FORCEINLINE TMap<KeyType, ValueType>::FBaseIterator end()
    {
        return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.end());
    }
    FORCEINLINE const TMap<KeyType, ValueType>::FBaseIterator end() const
    {
        return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.end());
    }
    FORCEINLINE ElementType& operator[](const KeyType& Key)
    {
        return this->GetByKey(Key);
    }
    FORCEINLINE const ElementType& operator[](const KeyType& Key) const
    {
        return this->GetByKey(Key);
    }

    FORCEINLINE int32 AddSingle(KeyType InKey, ValueType InValue)
    {
        return Pairs.AddSingle({ InKey, InValue });
    }
    FORCEINLINE int32 AddSingle(ElementType InElement)
    {
        return Pairs.AddSingle(InElement);
    }

    template <typename ComparisonFunction>
    FORCEINLINE ElementType& GetByKey(const KeyType& Key, ComparisonFunction* comp = nullptr)
    {
        for (ElementType Pair : *this)
        {
            if (comp ? comp(Pair.First, Key) : Pair.Key() == Key)
            {
                return Pair;
            }
        }
        return nullptr;
    }

    FORCEINLINE bool IsValid() const
    {
        return Pairs.IsValid();
    }
    FORCEINLINE void Initialize(const int32 NumElementsToInitWith = 5)
    {
        return Pairs.Initialize(NumElementsToInitWith);
    }
};

template <class ObjectType>
class TSharedPtr
{
public:
    ObjectType* Object;

    int32 SharedReferenceCount;
    int32 WeakReferenceCount;

    FORCEINLINE ObjectType* Get()
    {
        return Object;
    }
    FORCEINLINE ObjectType* Get() const
    {
        return Object;
    }
    FORCEINLINE ObjectType& operator*()
    {
        return *Object;
    }
    FORCEINLINE const ObjectType& operator*() const
    {
        return *Object;
    }
};

#ifdef _MSC_VER
#pragma pack(pop)
#endif
