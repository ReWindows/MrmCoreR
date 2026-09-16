#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources::Build {
class ItemInfoAtomPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetIndex@ItemInfoAtomPool@Build@Resources@Microsoft@@UEBA_NPEBGPEAH@Z
    virtual bool TryGetIndex(unsigned short const *, int *) const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@ItemInfoAtomPool@Build@Resources@Microsoft@@MEBAJHPEAPEBVHNamesNode@234@@Z
    virtual long GetName(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumNames@ItemInfoAtomPool@Build@Resources@Microsoft@@MEBAHXZ
    virtual int GetNumNames() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemInfoAtomPool@Build@Resources@Microsoft@@IEAA@PEBVHierarchicalNamesBuilder@123@PEBV?$DynamicArray@PEAVItemInfo@Build@Resources@Microsoft@@@23@@Z
    ItemInfoAtomPool(WindissectOpaque const *, WindissectOpaque const *);
};
} // namespace Microsoft::Resources::Build
