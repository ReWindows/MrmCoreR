#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Microsoft::Resources {
class DefChecksum {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAtomChecksum@DefChecksum@Resources@Microsoft@@SAJIUAtom@23@PEBVAtomPoolGroup@23@PEAI@Z
    static long ComputeAtomChecksum(unsigned int, WindissectOpaque, WindissectOpaque const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAtomPoolChecksum@DefChecksum@Resources@Microsoft@@SAJIPEBVIAtomPool@23@IPEAI@Z
    static long ComputeAtomPoolChecksum(unsigned int, WindissectOpaque const *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeChecksum@DefChecksum@Resources@Microsoft@@SAIIPEBEI@Z
    static unsigned int ComputeChecksum(unsigned int, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeStringChecksum@DefChecksum@Resources@Microsoft@@SAJI_NPEBGPEAI@Z
    static long ComputeStringChecksum(unsigned int, bool, unsigned short const *, unsigned int *);
};
} // namespace Microsoft::Resources
