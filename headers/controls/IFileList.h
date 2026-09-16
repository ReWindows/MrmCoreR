#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class IFileList {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidFileIndex@IFileList@Resources@Microsoft@@UEBA_NH@Z
    virtual bool IsValidFileIndex(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidFolderIndex@IFileList@Resources@Microsoft@@UEBA_NH@Z
    virtual bool IsValidFolderIndex(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFileIndex@IFileList@Resources@Microsoft@@UEBA_NPEBGPEAH@Z
    virtual bool TryGetFileIndex(unsigned short const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFolderIndex@IFileList@Resources@Microsoft@@UEBA_NPEBGPEAH@Z
    virtual bool TryGetFolderIndex(unsigned short const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPrefixFolderIndex@IFileList@Resources@Microsoft@@QEBA_NPEBGPEAH1@Z
    bool TryGetPrefixFolderIndex(unsigned short const *, int *, int *) const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidFolderRange@IFileList@Resources@Microsoft@@IEBA_NHH@Z
    bool IsValidFolderRange(int, int) const;
};
} // namespace Microsoft::Resources
