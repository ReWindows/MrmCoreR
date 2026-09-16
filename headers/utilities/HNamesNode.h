#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace Microsoft::Resources::Build {
class HNamesNode {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullPath@HNamesNode@Build@Resources@Microsoft@@QEBAJPEAVStringResult@34@@Z
    long GetFullPath(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullPathLength@HNamesNode@Build@Resources@Microsoft@@QEBAHXZ
    int GetFullPathLength() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToItem@HNamesNode@Build@Resources@Microsoft@@UEAAPEAVItemInfo@234@XZ
    virtual WindissectOpaque * ToItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToScope@HNamesNode@Build@Resources@Microsoft@@UEAAPEAVScopeInfo@234@XZ
    virtual WindissectOpaque * ToScope();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConcatPath@HNamesNode@Build@Resources@Microsoft@@IEBAJPEAVStringResult@34@@Z
    long ConcatPath(WindissectOpaque *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HNamesNode@Build@Resources@Microsoft@@IEAA@PEAVScopeInfo@123@@Z
    HNamesNode(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HNamesNode@Build@Resources@Microsoft@@IEAA@PEBVHierarchicalNamesConfig@23@@Z
    HNamesNode(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HNamesNode@Build@Resources@Microsoft@@IEAAJPEBVHierarchicalNameSegment@234@@Z
    long Init(WindissectOpaque const *);
};
} // namespace Microsoft::Resources::Build
