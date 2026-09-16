#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 21 member(s).
namespace Microsoft::Resources {
class FileFileList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FileFileList@Resources@Microsoft@@SAJPEAVIFileSection@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileName@FileFileList@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetFileName(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileParentFolderIndex@FileFileList@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetFileParentFolderIndex(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@FileFileList@Resources@Microsoft@@UEBAJHPEAVStringResult@23@PEAG@Z
    virtual long GetFilePath(int, WindissectOpaque *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@FileFileList@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetFilePath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFiles@FileFileList@Resources@Microsoft@@UEBAJHPEAH0@Z
    virtual long GetFiles(int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderName@FileFileList@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetFolderName(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderParentFolderIndex@FileFileList@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetFolderParentFolderIndex(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderPath@FileFileList@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetFolderPath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLongestPath@FileFileList@Resources@Microsoft@@UEBAHXZ
    virtual int GetLongestPath() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumRootFolders@FileFileList@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumRootFolders() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubfolders@FileFileList@Resources@Microsoft@@UEBAJHPEAH0@Z
    virtual long GetSubfolders(int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalNumFiles@FileFileList@Resources@Microsoft@@UEBAHXZ
    virtual int GetTotalNumFiles() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalNumFolders@FileFileList@Resources@Microsoft@@UEBAHXZ
    virtual int GetTotalNumFolders() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyNameSegment@FileFileList@Resources@Microsoft@@IEBAJIHHPEAG@Z
    long CopyNameSegment(unsigned int, int, int, unsigned short *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileFileList@Resources@Microsoft@@IEAA@XZ
    FileFileList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUtf16Name@FileFileList@Resources@Microsoft@@IEBAJHHPEAPEBG@Z
    long GetUtf16Name(int, int, unsigned short const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@FileFileList@Resources@Microsoft@@IEAAJPEBVIFileSection@23@PEBXH@Z
    long Init(WindissectOpaque const *, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@FileFileList@Resources@Microsoft@@KAJPEBX_K@Z
    static long Validate(void const *, uint64_t);
};
} // namespace Microsoft::Resources
