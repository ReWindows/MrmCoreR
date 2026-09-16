#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class ReverseFileMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ReverseFileMap@Resources@Microsoft@@SAJQEBVIFileSection@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const * const, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReverseFileMap@Resources@Microsoft@@UEAA@XZ
    virtual ~ReverseFileMap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ReverseFileMap@Resources@Microsoft@@AEAAJPEBVIFileSection@23@PEBXH@Z
    long Init(WindissectOpaque const *, void const *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ReverseFileMap@Resources@Microsoft@@AEAA@XZ
    ReverseFileMap();
};
} // namespace Microsoft::Resources
