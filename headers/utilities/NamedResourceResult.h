#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources {
class NamedResourceResult {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidate@NamedResourceResult@Resources@Microsoft@@QEBAJHPEAVResourceCandidateResult@23@@Z
    long GetCandidate(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecision@NamedResourceResult@Resources@Microsoft@@QEBAJPEAVDecisionResult@23@@Z
    long GetDecision(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumCandidates@NamedResourceResult@Resources@Microsoft@@QEBAHXZ
    int GetNumCandidates() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceName@NamedResourceResult@Resources@Microsoft@@QEBAJPEAVStringResult@23@@Z
    long GetResourceName(WindissectOpaque *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NamedResourceResult@Resources@Microsoft@@QEAA@XZ
    NamedResourceResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@NamedResourceResult@Resources@Microsoft@@QEAAJPEBVIHierarchicalSchema@23@H@Z
    long Set(WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetResourceLink@NamedResourceResult@Resources@Microsoft@@UEBA_NPEAPEBVIHierarchicalSchema@23@PEAI@Z
    virtual bool TryGetResourceLink(WindissectOpaque const * *, unsigned int *) const;
};
} // namespace Microsoft::Resources
