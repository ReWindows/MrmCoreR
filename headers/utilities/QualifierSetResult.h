#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 11 member(s).
namespace Microsoft::Resources {
class QualifierSetResult {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@QualifierSetResult@Resources@Microsoft@@UEBAHXZ
    virtual int GetIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@QualifierSetResult@Resources@Microsoft@@UEBAJPEAH@Z
    virtual long GetIndex(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifiers@QualifierSetResult@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPool@QualifierSetResult@Resources@Microsoft@@UEBAPEBVIDecisionInfo@23@XZ
    virtual WindissectOpaque const * GetPool() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPool@QualifierSetResult@Resources@Microsoft@@UEBAJPEAPEBVIDecisionInfo@23@@Z
    virtual long GetPool(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@QualifierSetResult@Resources@Microsoft@@UEBAJHPEAVQualifierResult@23@PEAH@Z
    virtual long GetQualifier(int, WindissectOpaque *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierIndexInPool@QualifierSetResult@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetQualifierIndexInPool(int, int *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QualifierSetResult@Resources@Microsoft@@QEAA@XZ
    QualifierSetResult();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QualifierSetResult@Resources@Microsoft@@UEAA@XZ
    virtual ~QualifierSetResult();
};
} // namespace Microsoft::Resources
