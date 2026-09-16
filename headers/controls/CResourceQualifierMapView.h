#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 28 member(s).
namespace Windows::ApplicationModel::Resources::Core::CResourceQualifierObservableMap {
class CResourceQualifierMapView {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceQualifierMapView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@6@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU7@@Z
    virtual long Lookup(HSTRING__*, HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@0@Z
    virtual long Split(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VerifyObservableMapState@CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@AEAAJXZ
    long _VerifyObservableMapState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceQualifierMapView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceQualifierMapView();
};
} // namespace Windows::ApplicationModel::Resources::Core::CResourceQualifierObservableMap
