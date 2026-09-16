#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 27 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceMapMapView {
public:
    class Iterator;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceMapMapView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVResourceMap@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIResourceMap@2345@@Z
    virtual long Lookup(HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVResourceMap@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@0@Z
    virtual long Split(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceMapMapView@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceMapMapView();
};
} // namespace Windows::ApplicationModel::Resources::Core
