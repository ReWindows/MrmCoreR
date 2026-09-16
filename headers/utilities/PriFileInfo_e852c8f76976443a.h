#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 5 member(s).
namespace Microsoft::Resources::UnifiedResourceView {
class PriFileInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriFileInfo@UnifiedResourceView@Resources@Microsoft@@SAJPEBG0_NPEAPEAV1234@@Z
    static long CreateInstance(unsigned short const *, unsigned short const *, bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoMergedFile@PriFileInfo@UnifiedResourceView@Resources@Microsoft@@QEBAJPEAVStringResult@34@@Z
    long GetAutoMergedFile(WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PriFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAA@XZ
    ~PriFileInfo();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PriFileInfo@UnifiedResourceView@Resources@Microsoft@@AEAA@PEBG0_N@Z
    PriFileInfo(unsigned short const *, unsigned short const *, bool);
};
} // namespace Microsoft::Resources::UnifiedResourceView
