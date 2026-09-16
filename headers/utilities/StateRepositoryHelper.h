#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 3 member(s).
namespace Microsoft::Resources {
class StateRepositoryHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArePackageMrtResourcesRedirected@StateRepositoryHelper@Resources@Microsoft@@SA_NPEBG@Z
    static bool ArePackageMrtResourcesRedirected(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasOptionalDependency@StateRepositoryHelper@Resources@Microsoft@@SAJPEBG0PEA_NPEAVStringResult@23@@Z
    static long HasOptionalDependency(unsigned short const *, unsigned short const *, bool *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageMetadataUnderSystemMetadata@StateRepositoryHelper@Resources@Microsoft@@SA_NPEBG@Z
    static bool IsPackageMetadataUnderSystemMetadata(unsigned short const *);
};
} // namespace Microsoft::Resources
