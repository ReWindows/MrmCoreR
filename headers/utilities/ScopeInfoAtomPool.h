#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources::Build {
class ScopeInfoAtomPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetIndex@ScopeInfoAtomPool@Build@Resources@Microsoft@@UEBA_NPEBGPEAH@Z
    virtual bool TryGetIndex(unsigned short const *, int *) const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@ScopeInfoAtomPool@Build@Resources@Microsoft@@MEBAJHPEAPEBVHNamesNode@234@@Z
    virtual long GetName(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumNames@ScopeInfoAtomPool@Build@Resources@Microsoft@@MEBAHXZ
    virtual int GetNumNames() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScopeInfoAtomPool@Build@Resources@Microsoft@@IEAA@PEBVHierarchicalNamesBuilder@123@PEBV?$DynamicArray@PEAVScopeInfo@Build@Resources@Microsoft@@@23@@Z
    ScopeInfoAtomPool(WindissectOpaque const *, WindissectOpaque const *);
};
} // namespace Microsoft::Resources::Build
