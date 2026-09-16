#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources::Build {
class AutoMergePriBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildMergedPri@AutoMergePriBuilder@Build@Resources@Microsoft@@QEAAJPEBG00PEAVAutoMergeBehavior@234@PEAVStringResult@34@@Z
    long BuildMergedPri(unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@AutoMergePriBuilder@Build@Resources@Microsoft@@SAJPEBGPEAVCoreProfile@34@PEBVPriFileMerger@234@PEBV?$DefPointerList@$$CBVPriFileInfo@PriFileMerger@Build@Resources@Microsoft@@P6AHPEAPEAV12345@0@ZP6A_NPEAPEBV12345@PEAH@Z@34@PEAPEAV1234@@Z
    static long CreateInstance(unsigned short const *, WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoMergePriBuilder@Build@Resources@Microsoft@@IEAA@PEBGPEAVCoreProfile@23@PEBVPriFileMerger@123@PEBV?$DefPointerList@$$CBVPriFileInfo@PriFileMerger@Build@Resources@Microsoft@@P6AHPEAPEAV12345@0@ZP6A_NPEAPEBV12345@PEAH@Z@23@@Z
    AutoMergePriBuilder(unsigned short const *, WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteOldMergedIndexPriFiles@AutoMergePriBuilder@Build@Resources@Microsoft@@IEAAXPEBG00@Z
    void _DeleteOldMergedIndexPriFiles(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Merge@AutoMergePriBuilder@Build@Resources@Microsoft@@IEAAJPEAVAutoMergeBehavior@234@@Z
    long _Merge(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergeAndPersist@AutoMergePriBuilder@Build@Resources@Microsoft@@IEAAJPEBG00PEAVAutoMergeBehavior@234@PEAVStringResult@34@@Z
    long _MergeAndPersist(unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Persist@AutoMergePriBuilder@Build@Resources@Microsoft@@IEAAJPEBG00PEAVStringResult@34@@Z
    long _Persist(unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
