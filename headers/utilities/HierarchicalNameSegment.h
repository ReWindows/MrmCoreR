#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 3 member(s).
namespace Microsoft::Resources::Build {
class HierarchicalNameSegment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetByRef@HierarchicalNameSegment@Build@Resources@Microsoft@@QEAA_NPEBG@Z
    bool SetByRef(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCopy@HierarchicalNameSegment@Build@Resources@Microsoft@@QEAAJPEBV1234@@Z
    long SetCopy(WindissectOpaque const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HierarchicalNameSegment@Build@Resources@Microsoft@@QEAA@XZ
    ~HierarchicalNameSegment();
};
} // namespace Microsoft::Resources::Build
