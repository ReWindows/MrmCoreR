#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources {
class FileDataSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FileDataSection@Resources@Microsoft@@SAJPEBXHPEAPEAV123@@Z
    static long CreateInstance(void const *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FileDataSection@Resources@Microsoft@@SAJPEAVIFileSection@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataRef@FileDataSection@Resources@Microsoft@@QEBAJIIPEAVBlobResult@23@@Z
    long GetDataRef(unsigned int, unsigned int, WindissectOpaque *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileDataSection@Resources@Microsoft@@IEAA@XZ
    FileDataSection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@FileDataSection@Resources@Microsoft@@IEAAJPEBVIFileSection@23@PEBXH@Z
    long Init(WindissectOpaque const *, void const *, int);
};
} // namespace Microsoft::Resources
