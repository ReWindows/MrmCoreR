#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class ResourceCandidateResult {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifiers@ResourceCandidateResult@Resources@Microsoft@@QEBAJPEAVQualifierSetResult@23@@Z
    long GetQualifiers(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceValueType@ResourceCandidateResult@Resources@Microsoft@@QEBAJPEAW4ResourceValueType@MrmEnvironment@23@@Z
    long GetResourceValueType(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceFileIndex@ResourceCandidateResult@Resources@Microsoft@@QEBAJPEAH@Z
    long GetSourceFileIndex(int *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceCandidateResult@Resources@Microsoft@@QEAA@XZ
    ResourceCandidateResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBlobValue@ResourceCandidateResult@Resources@Microsoft@@QEBA_NPEAVBlobResult@23@@Z
    bool TryGetBlobValue(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetStringValue@ResourceCandidateResult@Resources@Microsoft@@QEBA_NPEAVStringResult@23@@Z
    bool TryGetStringValue(WindissectOpaque *) const;
};
} // namespace Microsoft::Resources
