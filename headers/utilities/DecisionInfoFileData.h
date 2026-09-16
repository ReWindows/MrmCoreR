#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 19 member(s).
namespace Microsoft::Resources {
class DecisionInfoFileData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DecisionInfoFileData@Resources@Microsoft@@SAJPEBVDecisionInfoFileSection@23@PEBX_KPEBVRemapAtomPool@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, void const *, uint64_t, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseQualifier@DecisionInfoFileData@Resources@Microsoft@@UEBAJHPEAU_MRMFILE_BASE_QUALIFIER@@@Z
    virtual long GetBaseQualifier(int, _MRMFILE_BASE_QUALIFIER *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecision@DecisionInfoFileData@Resources@Microsoft@@UEBAJHPEAU_MRMFILE_DECISION@@@Z
    virtual long GetDecision(int, _MRMFILE_DECISION *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionNumQualifierSets@DecisionInfoFileData@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetDecisionNumQualifierSets(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiteral@DecisionInfoFileData@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetLiteral(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiteralsSizeInChars@DecisionInfoFileData@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetLiteralsSizeInChars() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumBaseQualifiers@DecisionInfoFileData@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumBaseQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumDecisions@DecisionInfoFileData@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumDecisions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifierSets@DecisionInfoFileData@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifierSets() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifiers@DecisionInfoFileData@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumReferences@DecisionInfoFileData@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumReferences() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPool@DecisionInfoFileData@Resources@Microsoft@@UEBAPEBVIDecisionInfo@23@XZ
    virtual WindissectOpaque const * GetPool() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@DecisionInfoFileData@Resources@Microsoft@@UEBAJHPEAU_MRMFILE_QUALIFIER@@@Z
    virtual long GetQualifier(int, _MRMFILE_QUALIFIER *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierMapping@DecisionInfoFileData@Resources@Microsoft@@UEBAPEBVRemapAtomPool@23@XZ
    virtual WindissectOpaque const * GetQualifierMapping() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierSet@DecisionInfoFileData@Resources@Microsoft@@UEBAJHPEAU_MRMFILE_QUALIFIER_SET@@@Z
    virtual long GetQualifierSet(int, _MRMFILE_QUALIFIER_SET *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReference@DecisionInfoFileData@Resources@Microsoft@@UEBAJHPEAG@Z
    virtual long GetReference(int, unsigned short *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DecisionInfoFileData@Resources@Microsoft@@AEAAJPEBVDecisionInfoFileSection@23@PEBX_KPEBVRemapAtomPool@23@@Z
    long Init(WindissectOpaque const *, void const *, uint64_t, WindissectOpaque const *);
};
} // namespace Microsoft::Resources
