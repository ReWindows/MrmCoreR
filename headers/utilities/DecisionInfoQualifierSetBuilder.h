#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Microsoft::Resources::Build {
class DecisionInfoQualifierSetBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQualifier@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@QEAAJPEBG0NPEAH@Z
    long AddQualifier(unsigned short const *, unsigned short const *, double, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQualifier@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@QEAAJPEBGW4ConditionOperator@ICondition@34@0HNPEAH@Z
    long AddQualifier(unsigned short const *, int, unsigned short const *, int, double, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQualifier@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@QEAAJPEBGW4ConditionOperator@ICondition@34@0NPEAH@Z
    long AddQualifier(unsigned short const *, int, unsigned short const *, double, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQualifiers@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@QEAAJHPEAUMrmBcQualifier@234@_N@Z
    long AddQualifiers(int, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@SAJPEAVDecisionInfoBuilder@234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@UEBAJPEAH@Z
    virtual long GetIndex(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifiers@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPool@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@UEBAPEBVIDecisionInfo@34@XZ
    virtual WindissectOpaque const * GetPool() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPool@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@UEBAJPEAPEBVIDecisionInfo@34@@Z
    virtual long GetPool(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@UEBAJHPEAVQualifierResult@34@PEAH@Z
    virtual long GetQualifier(int, WindissectOpaque *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierIndexInPool@DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetQualifierIndexInPool(int, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~DecisionInfoQualifierSetBuilder();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DecisionInfoQualifierSetBuilder@Build@Resources@Microsoft@@AEAA@XZ
    DecisionInfoQualifierSetBuilder();
};
} // namespace Microsoft::Resources::Build
