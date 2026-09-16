#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 20 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class ResourceSubtreeLookupTable {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJIPEAPEAUIResourceMap@2345@@Z
    virtual long GetAt(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJIIPEAPEAUIResourceMap@2345@PEAI@Z
    virtual long GetMany(unsigned int, unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUIResourceMap@2345@PEAIPEAE@Z
    virtual long IndexOf(WindissectOpaque *, unsigned int *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    ResourceSubtreeLookupTable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceSubtreeLookupTable@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~ResourceSubtreeLookupTable();
};
} // namespace Windows::ApplicationModel::Resources::Core
