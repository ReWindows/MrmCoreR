#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 14 member(s).
namespace Microsoft::Resources::UnifiedResourceView {
class UnifiedViewFileInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptAutoMerge@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAAJW4FileInfoFlags@34@@Z
    long AttemptAutoMerge(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@SAJPEAV234@PEAVManagedFile@34@W4FileInfoFlags@34@PEAVCoreProfile@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddAllResourceMaps@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAAJPEBG@Z
    long GetOrAddAllResourceMaps(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateMergedIndexFile@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAAJW4FileInfoFlags@34@@Z
    long GetOrCreateMergedIndexFile(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalPri@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAAJPEAPEAVPriFile@34@@Z
    long GetOriginalPri(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPri@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAAJPEAPEAVPriFile@34@@Z
    long GetPri(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryResourceMap@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAAJPEAPEAVManagedResourceMap@34@@Z
    long GetPrimaryResourceMap(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrioritizedAutoMergeFileLocation@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAA_NW4FileInfoFlags@34@HPEAVStringResult@34@PEA_N2@Z
    bool GetPrioritizedAutoMergeFileLocation(int, int, WindissectOpaque *, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoMergeRequired@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAA_NPEAPEAG@Z
    bool IsAutoMergeRequired(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoMergedFilePathCached@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAA_NXZ
    bool IsAutoMergedFilePathCached();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveFileFileList@UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAAJXZ
    long ResolveFileFileList();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@QEAA@XZ
    ~UnifiedViewFileInfo();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedViewFileInfo@UnifiedResourceView@Resources@Microsoft@@IEAA@PEAV123@PEAVManagedFile@23@PEAVCoreProfile@23@@Z
    UnifiedViewFileInfo(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::Resources::UnifiedResourceView
