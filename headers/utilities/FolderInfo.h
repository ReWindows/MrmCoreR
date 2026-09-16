#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 18 member(s).
namespace Microsoft::Resources::Build {
class FolderInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FolderInfo@Build@Resources@Microsoft@@SAJPEBGPEAV1234@PEAPEAV1234@@Z
    static long CreateInstance(unsigned short const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFile@FolderInfo@Build@Resources@Microsoft@@QEBAJHPEAPEAVFileInfo@234@@Z
    long GetFile(int, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderName@FolderInfo@Build@Resources@Microsoft@@QEBAJPEAVStringResult@34@@Z
    long GetFolderName(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullPath@FolderInfo@Build@Resources@Microsoft@@QEBAJPEAVStringResult@34@@Z
    long GetFullPath(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddFile@FolderInfo@Build@Resources@Microsoft@@QEAAJPEBGPEAPEAVFileInfo@234@@Z
    long GetOrAddFile(unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddSubfolder@FolderInfo@Build@Resources@Microsoft@@QEAAJPEBGPEAPEAV1234@@Z
    long GetOrAddSubfolder(unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubfolder@FolderInfo@Build@Resources@Microsoft@@QEBAJHPEAPEAV1234@@Z
    long GetSubfolder(int, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewRootFolder@FolderInfo@Build@Resources@Microsoft@@SAJPEAPEAV1234@@Z
    static long NewRootFolder(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFile@FolderInfo@Build@Resources@Microsoft@@QEBA_NPEBGPEAPEAVFileInfo@234@@Z
    bool TryGetFile(unsigned short const *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSubfolder@FolderInfo@Build@Resources@Microsoft@@QEBA_NPEBGPEAPEAV1234@@Z
    bool TryGetSubfolder(unsigned short const *, WindissectOpaque * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FolderInfo@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~FolderInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendFiles@FolderInfo@Build@Resources@Microsoft@@IEAAJXZ
    long ExtendFiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendSubfolders@FolderInfo@Build@Resources@Microsoft@@IEAAJXZ
    long ExtendSubfolders();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FolderInfo@Build@Resources@Microsoft@@IEAA@PEBGPEAV0123@@Z
    FolderInfo(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@FolderInfo@Build@Resources@Microsoft@@IEAAJPEBG@Z
    long Init(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoteSubfolderChanges@FolderInfo@Build@Resources@Microsoft@@IEAA_NHH@Z
    bool NoteSubfolderChanges(int, int);
};
} // namespace Microsoft::Resources::Build
