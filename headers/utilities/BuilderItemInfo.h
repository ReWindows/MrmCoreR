#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources::Build {
class BuilderItemInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCandidate@BuilderItemInfo@Build@Resources@Microsoft@@QEAAJAEBU_BUILDER_CANDIDATE@234@_N1@Z
    long AddCandidate(WindissectOpaque const &, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@BuilderItemInfo@Build@Resources@Microsoft@@SAJPEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumCandidates@BuilderItemInfo@Build@Resources@Microsoft@@QEBAHXZ
    int GetNumCandidates() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindCandidateForQualifierSet@BuilderItemInfo@Build@Resources@Microsoft@@QEBA_NHPEAPEBU_BUILDER_CANDIDATE@234@@Z
    bool TryFindCandidateForQualifierSet(int, WindissectOpaque const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyLinkedResourceIsCompatible@BuilderItemInfo@Build@Resources@Microsoft@@QEBAJPEBV1234@@Z
    long VerifyLinkedResourceIsCompatible(WindissectOpaque const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BuilderItemInfo@Build@Resources@Microsoft@@QEAA@XZ
    ~BuilderItemInfo();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BuilderItemInfo@Build@Resources@Microsoft@@AEAA@XZ
    BuilderItemInfo();
};
} // namespace Microsoft::Resources::Build
