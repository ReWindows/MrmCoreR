#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 20 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class NamedResourceLookupTable {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJIPEAPEAUINamedResource@2345@@Z
    virtual long GetAt(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJIIPEAPEAUINamedResource@2345@PEAI@Z
    virtual long GetMany(unsigned int, unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUINamedResource@2345@PEAIPEAE@Z
    virtual long IndexOf(WindissectOpaque *, unsigned int *, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    NamedResourceLookupTable();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NamedResourceLookupTable@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~NamedResourceLookupTable();
};
} // namespace Windows::ApplicationModel::Resources::Core
