#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources::Build {
class ItemInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToGlobal@ItemInfo@Build@Resources@Microsoft@@UEAAJPEAVScopeInfo@234@@Z
    virtual long AddToGlobal(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ItemInfo@Build@Resources@Microsoft@@SAJPEBVHierarchicalNameSegment@234@PEAVScopeInfo@234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScope@ItemInfo@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsScope() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToItem@ItemInfo@Build@Resources@Microsoft@@UEAAPEAV1234@XZ
    virtual WindissectOpaque * ToItem();
};
} // namespace Microsoft::Resources::Build
