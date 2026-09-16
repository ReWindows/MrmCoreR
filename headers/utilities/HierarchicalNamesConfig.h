#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources {
class HierarchicalNamesConfig {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareStoredAsciiSegment@HierarchicalNamesConfig@Resources@Microsoft@@QEBAHPEBDHPEBG@Z
    int CompareStoredAsciiSegment(char const *, int, unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSegmentInitialChar@HierarchicalNamesConfig@Resources@Microsoft@@QEBAGPEBG@Z
    unsigned short GetSegmentInitialChar(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPathSeparator@HierarchicalNamesConfig@Resources@Microsoft@@QEBA_NG@Z
    bool IsPathSeparator(unsigned short) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidSegment@HierarchicalNamesConfig@Resources@Microsoft@@QEBA_NPEBG@Z
    bool IsValidSegment(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetNextSegmentLength@HierarchicalNamesConfig@Resources@Microsoft@@QEBA_NPEBGPEAHPEA_N@Z
    bool TryGetNextSegmentLength(unsigned short const *, int *, bool *) const;
};
} // namespace Microsoft::Resources
