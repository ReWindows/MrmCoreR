#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 3 member(s).
namespace Microsoft::Resources {
class IQualifierSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@IQualifierSet@Resources@Microsoft@@SA?AW4_DEFCOMPARISON@@PEBV123@0@Z
    static int Compare(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsNeutralOrDefault@IQualifierSet@Resources@Microsoft@@QEBA_NXZ
    bool GetIsNeutralOrDefault() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IQualifierSet@Resources@Microsoft@@QEAA@XZ
    IQualifierSet();
};
} // namespace Microsoft::Resources
