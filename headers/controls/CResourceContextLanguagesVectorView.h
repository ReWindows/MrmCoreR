#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 28 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceContextLanguagesVectorView {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceContextLanguagesVectorView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IIterator@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z
    virtual long GetAt(unsigned int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z
    virtual long GetMany(unsigned int, unsigned int, HSTRING__* *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAIPEAE@Z
    virtual long IndexOf(HSTRING__*, unsigned int *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceContextLanguagesVectorView@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceContextLanguagesVectorView();
};
} // namespace Windows::ApplicationModel::Resources::Core
