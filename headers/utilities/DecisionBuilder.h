#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 15 member(s).
namespace Microsoft::Resources::Build {
class DecisionBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQualifierSet@DecisionBuilder@Build@Resources@Microsoft@@QEAAJHPEAH@Z
    long AddQualifierSet(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQualifierSet@DecisionBuilder@Build@Resources@Microsoft@@QEAAJPEBVIQualifierSet@34@PEAH@Z
    long AddQualifierSet(WindissectOpaque const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DecisionBuilder@Build@Resources@Microsoft@@SAJPEAVDecisionInfoBuilder@234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@DecisionBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@DecisionBuilder@Build@Resources@Microsoft@@UEBAJPEAH@Z
    virtual long GetIndex(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifierSets@DecisionBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifierSets() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPool@DecisionBuilder@Build@Resources@Microsoft@@UEBAPEBVIDecisionInfo@34@XZ
    virtual WindissectOpaque const * GetPool() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPool@DecisionBuilder@Build@Resources@Microsoft@@UEBAJPEAPEBVIDecisionInfo@34@@Z
    virtual long GetPool(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierSet@DecisionBuilder@Build@Resources@Microsoft@@UEBAJHPEAVQualifierSetResult@34@PEAH@Z
    virtual long GetQualifierSet(int, WindissectOpaque *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierSetIndexInPool@DecisionBuilder@Build@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetQualifierSetIndexInPool(int, int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DecisionBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~DecisionBuilder();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DecisionBuilder@Build@Resources@Microsoft@@AEAA@XZ
    DecisionBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DecisionBuilder@Build@Resources@Microsoft@@AEAAJPEAVDecisionInfoBuilder@234@@Z
    long Init(WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
