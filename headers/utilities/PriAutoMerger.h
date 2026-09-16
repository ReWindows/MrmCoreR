#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 14 member(s).
namespace Microsoft::Resources::Build {
class PriAutoMerger {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriAutoMerger@Build@Resources@Microsoft@@SAJPEBGPEAVCoreProfile@34@PEAPEAV1234@@Z
    static long CreateInstance(unsigned short const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoMergedFileIfExists@PriAutoMerger@Build@Resources@Microsoft@@UEAAJPEBG00PEAVStringResult@34@@Z
    virtual long GetAutoMergedFileIfExists(unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoMergedFilePathFromRegistry@PriAutoMerger@Build@Resources@Microsoft@@UEBAJPEBGAEAVStringResult@34@@Z
    virtual long GetAutoMergedFilePathFromRegistry(unsigned short const *, WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomergeFolderAndFileNames@PriAutoMerger@Build@Resources@Microsoft@@UEAAJPEAVStringResult@34@0@Z
    virtual long GetAutomergeFolderAndFileNames(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateAutoMergedFile@PriAutoMerger@Build@Resources@Microsoft@@UEAAJPEBG00PEAVStringResult@34@@Z
    virtual long GetOrCreateAutoMergedFile(unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveAutoMergedFilePathToRegistry@PriAutoMerger@Build@Resources@Microsoft@@UEBAXPEBG0@Z
    virtual void SaveAutoMergedFilePathToRegistry(unsigned short const *, unsigned short const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PriAutoMerger@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~PriAutoMerger();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PriAutoMerger@Build@Resources@Microsoft@@IEAA@PEBGPEAVCoreProfile@23@@Z
    PriAutoMerger(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSystemPriCollectionLoaded@PriAutoMerger@Build@Resources@Microsoft@@IEAAJXZ
    long _EnsureSystemPriCollectionLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOsApp@PriAutoMerger@Build@Resources@Microsoft@@IEAA_NXZ
    bool _IsOsApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MergePris@PriAutoMerger@Build@Resources@Microsoft@@IEAAJPEBG00PEAVStringResult@34@@Z
    long _MergePris(unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryGetLanguageOverlayChecksum@PriAutoMerger@Build@Resources@Microsoft@@IEAAJXZ
    long _TryGetLanguageOverlayChecksum();
};
} // namespace Microsoft::Resources::Build
