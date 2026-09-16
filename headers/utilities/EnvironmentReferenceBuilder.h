#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources::Build {
class EnvironmentReferenceBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@EnvironmentReferenceBuilder@0Resources@Microsoft@@QEBAJPEAX_KPEA_K@Z
    long Build(void *, uint64_t, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EnvironmentReferenceBuilder@Build@Resources@Microsoft@@SAJPEBVIEnvironment@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnvironmentReferenceBuilder@Build@Resources@Microsoft@@IEAA@XZ
    EnvironmentReferenceBuilder();
};
} // namespace Microsoft::Resources::Build
