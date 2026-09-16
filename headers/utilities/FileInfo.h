#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
namespace Microsoft::Resources::Build {
class FileInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FileInfo@Build@Resources@Microsoft@@SAJPEBGPEAVFolderInfo@234@PEAPEAV1234@@Z
    static long CreateInstance(unsigned short const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileName@FileInfo@Build@Resources@Microsoft@@QEBAJPEAVStringResult@34@@Z
    long GetFileName(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullPath@FileInfo@Build@Resources@Microsoft@@QEBAJPEAVStringResult@34@@Z
    long GetFullPath(WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileInfo@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~FileInfo();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileInfo@Build@Resources@Microsoft@@IEAA@PEAVFolderInfo@123@@Z
    FileInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@FileInfo@Build@Resources@Microsoft@@IEAAJPEBG@Z
    long Init(unsigned short const *);
};
} // namespace Microsoft::Resources::Build
