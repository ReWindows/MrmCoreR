#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 12 member(s).
namespace Microsoft::Resources {
class ResourcePackMerge {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPriFile@ResourcePackMerge@Resources@Microsoft@@QEAAJPEBGW4PriMergeFlags@PriFileMerger@Build@23@@Z
    long AddPriFile(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ResourcePackMerge@Resources@Microsoft@@SAJPEAVCoreProfile@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriFileChecksums@ResourcePackMerge@Resources@Microsoft@@SAJPEBGPEAVCoreProfile@23@PEAI2@Z
    static long GetPriFileChecksums(unsigned short const *, WindissectOpaque *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteToFile@ResourcePackMerge@Resources@Microsoft@@QEAAJPEBG@Z
    long WriteToFile(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourcePackMerge@Resources@Microsoft@@QEAA@XZ
    ~ResourcePackMerge();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFileToFileList@ResourcePackMerge@Resources@Microsoft@@AEAAJPEBGW4PriMergeFlags@PriFileMerger@Build@23@PEAPEAVFileInfo@623@@Z
    long AddFileToFileList(unsigned short const *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceMap@ResourcePackMerge@Resources@Microsoft@@AEAAJPEBVFileInfo@Build@23@PEBVIResourceMapBase@23@W4PriMergeFlags@PriFileMerger@523@@Z
    long AddResourceMap(WindissectOpaque const *, WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRootFolder@ResourcePackMerge@Resources@Microsoft@@AEAAJPEAGPEAPEAGPEAPEAVFolderInfo@Build@23@@Z
    long AddRootFolder(unsigned short *, unsigned short * *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderOrFileName@ResourcePackMerge@Resources@Microsoft@@AEBAJPEAGPEAVStringResult@23@PEA_NPEAPEAG@Z
    long GetFolderOrFileName(unsigned short *, WindissectOpaque *, bool *, unsigned short * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ResourcePackMerge@Resources@Microsoft@@AEAAJXZ
    long Init();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourcePackMerge@Resources@Microsoft@@AEAA@PEAVCoreProfile@12@@Z
    ResourcePackMerge(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateResourceMap@ResourcePackMerge@Resources@Microsoft@@AEBA_NPEBVIResourceMapBase@23@W4PriMergeFlags@PriFileMerger@Build@23@PEAW456723@@Z
    bool ValidateResourceMap(WindissectOpaque const *, int, int *) const;
};
} // namespace Microsoft::Resources
