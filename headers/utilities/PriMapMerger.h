#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 2 member(s).
namespace Microsoft::Resources::Build {
class PriMapMerger {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsCompatible@PriMapMerger@Build@Resources@Microsoft@@SAJPEBVIHierarchicalSchema@34@0W4PriMergeFlags@PriFileMerger@234@@Z
    static long CheckIsCompatible(WindissectOpaque const *, WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeMap@PriMapMerger@Build@Resources@Microsoft@@SAJPEBVIResourceMapBase@34@_NW4PriMergeFlags@PriFileMerger@234@PEBGPEAVPriSectionBuilder@234@@Z
    static long MergeMap(WindissectOpaque const *, bool, int, unsigned short const *, WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
