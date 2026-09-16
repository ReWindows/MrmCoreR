#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 26 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CNamedResource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNamedResource@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CNamedResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceCandidate@2345@@Z
    virtual long Resolve(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAll@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVResourceCandidate@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long ResolveAll(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAllForContext@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUIResourceContext@2345@PEAPEAU?$IVectorView@PEAVResourceCandidate@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long ResolveAllForContext(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveForContext@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUIResourceContext@2345@PEAPEAUIResourceCandidate@2345@@Z
    virtual long ResolveForContext(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CNamedResource@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUIResourceMap@2345@PEAVCResourceIndexInternal@Runtime@3Microsoft@@PEAVCResolvedInstanceCollectionInternal@839@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Candidates@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVResourceCandidate@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long get_Candidates(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@CNamedResource@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@5@@Z
    virtual long get_Uri(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUriFromString@CNamedResource@Core@Resources@ApplicationModel@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIUriRuntimeClass@Foundation@5@@Z
    long _GetUriFromString(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResolveAllInternal@CNamedResource@Core@Resources@ApplicationModel@Windows@@AEAAJPEAVCContext@Runtime@3Microsoft@@PEAPEAU?$IVectorView@PEAVResourceCandidate@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    long _ResolveAllInternal(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResolveInternal@CNamedResource@Core@Resources@ApplicationModel@Windows@@AEAAJPEAVCContext@Runtime@3Microsoft@@PEAPEAUIResourceCandidate@2345@@Z
    long _ResolveInternal(WindissectOpaque *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNamedResource@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CNamedResource();
};
} // namespace Windows::ApplicationModel::Resources::Core
