#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 20 member(s).
namespace Windows::ApplicationModel::Resources::Core::CResourceQualifierObservableMap {
class Iterator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    Iterator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUIWeakReference@@@Z
    long RuntimeClassInitialize(IWeakReference *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@6@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Iterator@CResourceQualifierObservableMap@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~Iterator();
};
} // namespace Windows::ApplicationModel::Resources::Core::CResourceQualifierObservableMap
