#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 24 member(s).
namespace Microsoft::Resources::Build {
class PriFileMerger {
public:
    class PriFileInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAllApplicationPackagesSid@PriFileMerger@Build@Resources@Microsoft@@SAJPEBG_N@Z
    static long AddAllApplicationPackagesSid(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupMergeFolder@PriFileMerger@Build@Resources@Microsoft@@SAJPEBG00@Z
    static long CleanupMergeFolder(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareFuncPriFileInfoCollection@PriFileMerger@Build@Resources@Microsoft@@SAHPEAPEAVPriFileInfo@1234@0@Z
    static int CompareFuncPriFileInfoCollection(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareFuncStringResult@PriFileMerger@Build@Resources@Microsoft@@SAHPEAPEBVStringResult@34@0@Z
    static int CompareFuncStringResult(WindissectOpaque const * *, WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriFileMerger@Build@Resources@Microsoft@@SAJPEAVCoreProfile@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUniqueTempDirectory@PriFileMerger@Build@Resources@Microsoft@@SAJKPEAG@Z
    static long CreateUniqueTempDirectory(unsigned long, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoMergedFilePathFromRegistry@PriFileMerger@Build@Resources@Microsoft@@QEBAJPEBGAEAVStringResult@34@@Z
    long GetAutoMergedFilePathFromRegistry(unsigned short const *, WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomergedFileIfExists@PriFileMerger@Build@Resources@Microsoft@@QEBAJPEBG00PEAVStringResult@34@@Z
    long GetAutomergedFileIfExists(unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateSubDirectory@PriFileMerger@Build@Resources@Microsoft@@SAJPEBGPEAVStringResult@34@@Z
    static long GetOrCreateSubDirectory(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriFileComponentName@PriFileMerger@Build@Resources@Microsoft@@QEBAJPEBGAEAVStringResult@34@@Z
    long GetPriFileComponentName(unsigned short const *, WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeFolderFromPriFilePath@PriFileMerger@Build@Resources@Microsoft@@SAJPEBGPEAVStringResult@34@@Z
    static long GetRelativeFolderFromPriFilePath(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HashFuncPriFileInfoCollection@PriFileMerger@Build@Resources@Microsoft@@SA_NPEAPEBVPriFileInfo@1234@PEAH@Z
    static bool HashFuncPriFileInfoCollection(WindissectOpaque const * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HashFuncStringResult@PriFileMerger@Build@Resources@Microsoft@@SA_NPEAPEBVStringResult@34@PEAH@Z
    static bool HashFuncStringResult(WindissectOpaque const * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWithPri@PriFileMerger@Build@Resources@Microsoft@@QEAAJPEBE_KW4PriMergeFlags@1234@PEBGPEAVCoreProfile@34@@Z
    long InitWithPri(unsigned char const *, uint64_t, int, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeMap@PriFileMerger@Build@Resources@Microsoft@@QEAAJPEBVIResourceMapBase@34@_NW4PriMergeFlags@1234@PEBG@Z
    long MergeMap(WindissectOpaque const *, bool, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveAutoMergedFilePathToRegistry@PriFileMerger@Build@Resources@Microsoft@@QEBAXPEBG0@Z
    void SaveAutoMergedFilePathToRegistry(unsigned short const *, unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteToFile@PriFileMerger@Build@Resources@Microsoft@@QEAAJPEBG@Z
    long WriteToFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteToUniqueTempDirectory@PriFileMerger@Build@Resources@Microsoft@@QEAAJPEBGPEAVStringResult@34@@Z
    long WriteToUniqueTempDirectory(unsigned short const *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PriFileMerger@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~PriFileMerger();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteOldMergedFiles@PriFileMerger@Build@Resources@Microsoft@@KAJPEBG0II0@Z
    static long DeleteOldMergedFiles(unsigned short const *, unsigned short const *, unsigned int, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@PriFileMerger@Build@Resources@Microsoft@@IEAAJPEAVCoreProfile@34@@Z
    long Init(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PriFileMerger@Build@Resources@Microsoft@@IEAA@XZ
    PriFileMerger();
};
} // namespace Microsoft::Resources::Build
