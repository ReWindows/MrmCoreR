#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 19 member(s).
namespace Windows::ApplicationModel::Resources::Core::CResourceMap {
class Iterator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    Iterator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVNamedResource@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@6@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Iterator@CResourceMap@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~Iterator();
};
} // namespace Windows::ApplicationModel::Resources::Core::CResourceMap
