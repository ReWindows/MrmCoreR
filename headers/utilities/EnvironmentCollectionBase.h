#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources {
class EnvironmentCollectionBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindCompatibleEnvironment@EnvironmentCollectionBase@Resources@Microsoft@@UEBA_NPEBGHHPEAPEBVIEnvironment@23@@Z
    virtual bool TryFindCompatibleEnvironment(unsigned short const *, int, int, WindissectOpaque const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindCompatibleEnvironment@EnvironmentCollectionBase@Resources@Microsoft@@UEBA_NPEBVEnvironmentReference@23@PEAPEBVIEnvironment@23@PEAVRemapInfo@23@@Z
    virtual bool TryFindCompatibleEnvironment(WindissectOpaque const *, WindissectOpaque const * *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindEnvironment@EnvironmentCollectionBase@Resources@Microsoft@@UEBA_NPEBGPEAPEBVIEnvironment@23@@Z
    virtual bool TryFindEnvironment(unsigned short const *, WindissectOpaque const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindEnvironment@EnvironmentCollectionBase@Resources@Microsoft@@UEBA_NPEBVIEnvironmentVersionInfo@23@PEAPEBVIEnvironment@23@@Z
    virtual bool TryFindEnvironment(WindissectOpaque const *, WindissectOpaque const * *) const;
};
} // namespace Microsoft::Resources
