#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 13 member(s).
namespace Microsoft::Resources {
class DecisionInfoFileSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DecisionInfoFileSection@Resources@Microsoft@@SAJQEBVIFileSection@23@PEBVRemapAtomPool@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const * const, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DecisionInfoFileSection@Resources@Microsoft@@QEAA@XZ
    DecisionInfoFileSection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecision@DecisionInfoFileSection@Resources@Microsoft@@UEBAJHPEAVDecisionResult@23@@Z
    virtual long GetDecision(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionNumQualifierSets@DecisionInfoFileSection@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetDecisionNumQualifierSets(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumDecisions@DecisionInfoFileSection@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumDecisions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifierSets@DecisionInfoFileSection@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifierSets() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifiers@DecisionInfoFileSection@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@DecisionInfoFileSection@Resources@Microsoft@@UEBAJHPEAVQualifierResult@23@@Z
    virtual long GetQualifier(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierSet@DecisionInfoFileSection@Resources@Microsoft@@UEBAJHPEAVQualifierSetResult@23@@Z
    virtual long GetQualifierSet(int, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DecisionInfoFileSection@Resources@Microsoft@@UEAA@XZ
    virtual ~DecisionInfoFileSection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DecisionInfoFileSection@Resources@Microsoft@@IEAAJPEBVIFileSection@23@PEBEHPEBVRemapAtomPool@23@@Z
    long Init(WindissectOpaque const *, unsigned char const *, int, WindissectOpaque const *);
};
} // namespace Microsoft::Resources
