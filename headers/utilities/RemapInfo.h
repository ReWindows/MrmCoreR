#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 2 member(s).
namespace Microsoft::Resources {
class RemapInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtomPoolMapping@RemapInfo@Resources@Microsoft@@QEAAJHH@Z
    long SetAtomPoolMapping(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtomPoolMappingArray@RemapInfo@Resources@Microsoft@@QEAAJHPEAH@Z
    long SetAtomPoolMappingArray(int, int *);
};
} // namespace Microsoft::Resources
