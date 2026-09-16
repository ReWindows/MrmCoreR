#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class MrmFileResolver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReferencedFileInFileList@MrmFileResolver@Resources@Microsoft@@QEAAJPEBVFileFileList@23@@Z
    long AddReferencedFileInFileList(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MrmFileResolver@Resources@Microsoft@@SAJPEAVPriFileManager@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalIndex@MrmFileResolver@Resources@Microsoft@@QEAAJHPEAH@Z
    long GetGlobalIndex(int, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrmFileResolver@Resources@Microsoft@@QEAA@PEAVPriFileManager@12@@Z
    MrmFileResolver(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrmFileResolver@Resources@Microsoft@@QEAA@XZ
    ~MrmFileResolver();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootForAutoMergedFile@MrmFileResolver@Resources@Microsoft@@AEAAJPEAVStringResult@23@0@Z
    long GetPackageRootForAutoMergedFile(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::Resources
