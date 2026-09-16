#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 20 member(s).
namespace Microsoft::Resources::Build {
class DecisionInfoBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DecisionInfoBuilder@Build@Resources@Microsoft@@SAJIPEBVUnifiedEnvironment@34@PEBVIDecisionInfo@34@PEAPEAV1234@@Z
    static long CreateInstance(unsigned int, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecision@DecisionInfoBuilder@Build@Resources@Microsoft@@UEBAJHPEAVDecisionResult@34@@Z
    virtual long GetDecision(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionNumQualifierSets@DecisionInfoBuilder@Build@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetDecisionNumQualifierSets(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumDecisions@DecisionInfoBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumDecisions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifierSets@DecisionInfoBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifierSets() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifiers@DecisionInfoBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddDecision@DecisionInfoBuilder@Build@Resources@Microsoft@@QEAAJPEBVIDecision@34@PEAVRemapUInt16@34@PEAH@Z
    long GetOrAddDecision(WindissectOpaque const *, WindissectOpaque*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddQualifier@DecisionInfoBuilder@Build@Resources@Microsoft@@QEAAJPEBVIQualifier@34@PEAH@Z
    long GetOrAddQualifier(WindissectOpaque const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddQualifier@DecisionInfoBuilder@Build@Resources@Microsoft@@QEAAJUAtom@34@W4ConditionOperator@ICondition@34@PEBGGNPEAVQualifierResult@34@@Z
    long GetOrAddQualifier(WindissectOpaque, int, unsigned short const *, unsigned short, double, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddQualifier@DecisionInfoBuilder@Build@Resources@Microsoft@@QEAAJPEBGW4ConditionOperator@ICondition@34@0GNPEAVQualifierResult@34@@Z
    long GetOrAddQualifier(unsigned short const *, int, unsigned short const *, unsigned short, double, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddQualifierSet@DecisionInfoBuilder@Build@Resources@Microsoft@@QEAAJPEBVIQualifierSet@34@PEAVRemapUInt16@34@PEAH@Z
    long GetOrAddQualifierSet(WindissectOpaque const *, WindissectOpaque*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@DecisionInfoBuilder@Build@Resources@Microsoft@@UEBAJHPEAVQualifierResult@34@@Z
    virtual long GetQualifier(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierSet@DecisionInfoBuilder@Build@Resources@Microsoft@@UEBAJHPEAVQualifierSetResult@34@@Z
    virtual long GetQualifierSet(int, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Merge@DecisionInfoBuilder@Build@Resources@Microsoft@@QEAAJPEBVIDecisionInfo@34@PEAVRemapUInt16@34@11@Z
    long Merge(WindissectOpaque const *, WindissectOpaque*, WindissectOpaque*, WindissectOpaque*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DecisionInfoBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~DecisionInfoBuilder();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DecisionInfoBuilder@Build@Resources@Microsoft@@IEAA@XZ
    DecisionInfoBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DecisionInfoBuilder@Build@Resources@Microsoft@@IEAAJIPEBVUnifiedEnvironment@34@@Z
    long Init(unsigned int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDefaultContents@DecisionInfoBuilder@Build@Resources@Microsoft@@IEAAJXZ
    long InitDefaultContents();
};
} // namespace Microsoft::Resources::Build
