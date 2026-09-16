#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
namespace Microsoft::Resources::Build::PriFileMerger {
class PriFileInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeChecksum@PriFileInfo@PriFileMerger@Build@Resources@Microsoft@@SAJPEBGPEAI@Z
    static long ComputeChecksum(unsigned short const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeChecksum@PriFileInfo@PriFileMerger@Build@Resources@Microsoft@@QEBAJPEAI@Z
    long ComputeChecksum(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriFileInfo@PriFileMerger@Build@Resources@Microsoft@@SAJPEBGKKKU_FILETIME@@PEAPEAV12345@@Z
    static long CreateInstance(unsigned short const *, unsigned long, unsigned long, unsigned long, _FILETIME, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileName@PriFileInfo@PriFileMerger@Build@Resources@Microsoft@@QEAAJPEBG@Z
    long SetFileName(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PriFileInfo@PriFileMerger@Build@Resources@Microsoft@@QEAA@XZ
    ~PriFileInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@PriFileInfo@PriFileMerger@Build@Resources@Microsoft@@AEAAJPEBGKKKU_FILETIME@@@Z
    long Init(unsigned short const *, unsigned long, unsigned long, unsigned long, _FILETIME);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PriFileInfo@PriFileMerger@Build@Resources@Microsoft@@AEAA@XZ
    PriFileInfo();
};
} // namespace Microsoft::Resources::Build::PriFileMerger
