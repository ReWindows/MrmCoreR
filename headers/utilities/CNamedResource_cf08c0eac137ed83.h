#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 12 member(s).
class CNamedResource {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNamedResource@@QEAA@XZ
    CNamedResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidate@CNamedResource@@UEAAJIPEAPEAUIResourceCandidate@@@Z
    virtual long GetCandidate(unsigned int, IResourceCandidate * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateCount@CNamedResource@@UEAAJPEAI@Z
    virtual long GetCandidateCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUri@CNamedResource@@UEAAJPEAPEAG@Z
    virtual long GetUri(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CNamedResource@@UEAAJPEAPEAUIResourceCandidate@@@Z
    virtual long Resolve(IResourceCandidate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAll@CNamedResource@@UEAAJPEAPEAUIResourceCandidateCollection@@@Z
    virtual long ResolveAll(IResourceCandidateCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAllForContext@CNamedResource@@UEAAJPEAUIResourceContext@@PEAPEAUIResourceCandidateCollection@@@Z
    virtual long ResolveAllForContext(IResourceContext *, IResourceCandidateCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveForContext@CNamedResource@@UEAAJPEAUIResourceContext@@PEAPEAUIResourceCandidate@@@Z
    virtual long ResolveForContext(IResourceContext *, IResourceCandidate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CNamedResource@@QEAAJPEAUIResourceMap@@PEAUIResourceReferenceHandler@@PEAVCResourceIndexInternal@Runtime@Resources@Microsoft@@PEAVCResolvedInstanceCollectionInternal@567@@Z
    long RuntimeClassInitialize(IResourceMap *, IResourceReferenceHandler *, WindissectOpaque *, WindissectOpaque *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNamedResource@@MEAA@XZ
    virtual ~CNamedResource();
};
