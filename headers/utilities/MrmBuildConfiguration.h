#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources {
class MrmBuildConfiguration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MrmBuildConfiguration@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEAPEAV123@@Z
    static long CreateInstance(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MrmBuildConfiguration@Resources@Microsoft@@SAJT_DEFFILE_MAGIC@@IPEAPEAV123@@Z
    static long CreateInstance(_DEFFILE_MAGIC, unsigned int, WindissectOpaque * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrmBuildConfiguration@Resources@Microsoft@@IEAA@T_DEFFILE_MAGIC@@I@Z
    MrmBuildConfiguration(_DEFFILE_MAGIC, unsigned int);
};
} // namespace Microsoft::Resources
