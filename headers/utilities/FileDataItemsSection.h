#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources {
class FileDataItemsSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FileDataItemsSection@Resources@Microsoft@@SAJPEAVIFileSection@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemDataRef@FileDataItemsSection@Resources@Microsoft@@QEBAJIPEAVBlobResult@23@@Z
    long GetItemDataRef(unsigned int, WindissectOpaque *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileDataItemsSection@Resources@Microsoft@@IEAA@XZ
    FileDataItemsSection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@FileDataItemsSection@Resources@Microsoft@@IEAAJPEBVIFileSection@23@PEBXH@Z
    long Init(WindissectOpaque const *, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateHeader@FileDataItemsSection@Resources@Microsoft@@IEAAJPEBXI@Z
    long ValidateHeader(void const *, unsigned int);
};
} // namespace Microsoft::Resources
