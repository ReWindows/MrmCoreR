#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 43 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceMap {
public:
    class Iterator;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceMap@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckVersionIsCompatible@CResourceMap@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUResourceLayoutInfo@2345@PEA_N@Z
    long CheckVersionIsCompatible(WindissectOpaque *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVNamedResource@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtree@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIResourceMap@2345@@Z
    virtual long GetSubtree(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIResourceCandidate@2345@@Z
    virtual long GetValue(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueForContext@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAUIResourceContext@2345@PEAPEAUIResourceCandidate@2345@@Z
    virtual long GetValueForContext(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReturnNullResult@CResourceMap@Core@Resources@ApplicationModel@Windows@@SA_NJ@Z
    static bool IsReturnNullResult(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUINamedResource@2345@@Z
    virtual long Lookup(HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CResourceMap@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUIResourceManager@2345@PEAVCResourceIndexInternal@Runtime@3Microsoft@@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVNamedResource@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@0@Z
    virtual long Split(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Resources@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVNamedResource@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long get_Resources(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@CResourceMap@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@5@@Z
    virtual long get_Uri(WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUriFromString@CResourceMap@Core@Resources@ApplicationModel@Windows@@IEAAJPEAUHSTRING__@@PEAPEAUIUriRuntimeClass@Foundation@5@@Z
    long _GetUriFromString(HSTRING__*, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResolvedInstance@CResourceMap@Core@Resources@ApplicationModel@Windows@@AEAAJPEAUIResourceContext@2345@PEAUHSTRING__@@PEBGPEAPEAVCResolvedInstanceInternal@Runtime@3Microsoft@@@Z
    long _GetResolvedInstance(WindissectOpaque *, HSTRING__*, unsigned short const *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceMap@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceMap();
};
} // namespace Windows::ApplicationModel::Resources::Core
