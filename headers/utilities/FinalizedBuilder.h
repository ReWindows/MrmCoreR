#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 15 member(s).
namespace Microsoft::Resources::Build::FileListBuilder {
class FinalizedBuilder {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileName@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAJHPEAVStringResult@45@@Z
    virtual long GetFileName(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileParentFolderIndex@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetFileParentFolderIndex(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAJHPEAVStringResult@45@@Z
    virtual long GetFilePath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAJHPEAVStringResult@45@PEAG@Z
    virtual long GetFilePath(int, WindissectOpaque *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFiles@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAJHPEAH0@Z
    virtual long GetFiles(int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderName@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAJHPEAVStringResult@45@@Z
    virtual long GetFolderName(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderParentFolderIndex@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAJHPEAH@Z
    virtual long GetFolderParentFolderIndex(int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderPath@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAJHPEAVStringResult@45@@Z
    virtual long GetFolderPath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLongestPath@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetLongestPath() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumRootFolders@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumRootFolders() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubfolders@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAJHPEAH0@Z
    virtual long GetSubfolders(int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalNumFiles@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetTotalNumFiles() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalNumFolders@FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetTotalNumFolders() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FinalizedBuilder@FileListBuilder@Build@Resources@Microsoft@@QEAA@XZ
    ~FinalizedBuilder();
};
} // namespace Microsoft::Resources::Build::FileListBuilder
