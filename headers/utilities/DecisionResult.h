#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 11 member(s).
namespace Microsoft::Resources {
class DecisionResult {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DecisionResult@Resources@Microsoft@@QEAA@XZ
    DecisionResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@DecisionResult@Resources@Microsoft@@UEBAJPEAH@Z
    virtual long GetIndex(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@DecisionResult@Resources@Microsoft@@UEBAHXZ
    virtual int GetIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifierSets@DecisionResult@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifierSets() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPool@DecisionResult@Resources@Microsoft@@UEBAPEBVIDecisionInfo@23@XZ
    virtual WindissectOpaque const * GetPool() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPool@DecisionResult@Resources@Microsoft@@UEBAJPEAPEBVIDecisionInfo@23@@Z
    virtual long GetPool(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierSet@DecisionResult@Resources@Microsoft@@UEBAJHPEAVQualifierSetResult@23@PEAH@Z
    virtual long GetQualifierSet(int, WindissectOpaque *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierSetIndexInPool@DecisionResult@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetQualifierSetIndexInPool(int, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DecisionResult@Resources@Microsoft@@UEAA@XZ
    virtual ~DecisionResult();
};
} // namespace Microsoft::Resources
