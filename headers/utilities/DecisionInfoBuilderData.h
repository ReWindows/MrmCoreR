#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 20 member(s).
namespace Microsoft::Resources::Build {
class DecisionInfoBuilderData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DecisionInfoBuilderData@Build@Resources@Microsoft@@SAJPEBVDecisionInfoBuilder@234@PEBVUnifiedEnvironment@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseQualifier@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAJHPEAU_MRMFILE_BASE_QUALIFIER@@@Z
    virtual long GetBaseQualifier(int, _MRMFILE_BASE_QUALIFIER *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecision@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAJHPEAU_MRMFILE_DECISION@@@Z
    virtual long GetDecision(int, _MRMFILE_DECISION *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionNumQualifierSets@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetDecisionNumQualifierSets(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiteral@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAJHPEAVStringResult@34@@Z
    virtual long GetLiteral(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLiteralsSizeInChars@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetLiteralsSizeInChars() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumBaseQualifiers@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumBaseQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumDecisions@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumDecisions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifierSets@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifierSets() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifiers@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumReferences@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumReferences() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPool@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAPEBVIDecisionInfo@34@XZ
    virtual WindissectOpaque const * GetPool() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAJHPEAU_MRMFILE_QUALIFIER@@@Z
    virtual long GetQualifier(int, _MRMFILE_QUALIFIER *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierMapping@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAPEBVRemapAtomPool@34@XZ
    virtual WindissectOpaque const * GetQualifierMapping() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierSet@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAJHPEAU_MRMFILE_QUALIFIER_SET@@@Z
    virtual long GetQualifierSet(int, _MRMFILE_QUALIFIER_SET *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReference@DecisionInfoBuilderData@Build@Resources@Microsoft@@UEBAJHPEAG@Z
    virtual long GetReference(int, unsigned short *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DecisionInfoBuilderData@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~DecisionInfoBuilderData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DecisionInfoBuilderData@Build@Resources@Microsoft@@AEAAJPEBVDecisionInfoBuilder@234@PEBVUnifiedEnvironment@34@@Z
    long Init(WindissectOpaque const *, WindissectOpaque const *);
};
} // namespace Microsoft::Resources::Build
