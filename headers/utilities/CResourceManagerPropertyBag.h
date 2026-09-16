#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceManagerPropertyBag {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceManagerPropertyBag@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceManagerPropertyBag@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceManagerPropertyBag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceManagerPropertyBag@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceManagerPropertyBag@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceManagerPropertyBag@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceManagerPropertyBag@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceManagerPropertyBag@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceManagerPropertyBag@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceManagerPropertyBag();
};
} // namespace Windows::ApplicationModel::Resources::Core
