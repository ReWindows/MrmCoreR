#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 3 member(s).
namespace Microsoft::Resources {
class ICondition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@ICondition@Resources@Microsoft@@SA?AW4_DEFCOMPARISON@@PEBV123@0@Z
    static int Compare(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperand1Qualifier@ICondition@Resources@Microsoft@@UEBAJPEAUAtom@23@@Z
    virtual long GetOperand1Qualifier(WindissectOpaque *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ICondition@Resources@Microsoft@@QEAA@XZ
    ICondition();
};
} // namespace Microsoft::Resources
