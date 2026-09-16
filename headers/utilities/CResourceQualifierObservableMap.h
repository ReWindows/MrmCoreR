#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 41 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceQualifierObservableMap {
public:
    class CResourceQualifierMapView;
    class Iterator;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceQualifierObservableMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long Insert(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z
    virtual long Lookup(HSTRING__*, HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUIWeakReference@@@Z
    long RuntimeClassInitialize(IWeakReference *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MapChanged@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAU?$MapChangedEventHandler@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_MapChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MapChanged@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MapChanged(EventRegistrationToken);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceQualifierObservableMap();
};
} // namespace Windows::ApplicationModel::Resources::Core
