#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 3 member(s).
namespace Microsoft::Resources::Build {
class HierarchicalName {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceToNextSegment@HierarchicalName@Build@Resources@Microsoft@@QEAA_NXZ
    bool AdvanceToNextSegment();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPathByRef@HierarchicalName@Build@Resources@Microsoft@@QEAAJPEBG@Z
    long SetPathByRef(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HierarchicalName@Build@Resources@Microsoft@@QEAA@XZ
    ~HierarchicalName();
};
} // namespace Microsoft::Resources::Build
