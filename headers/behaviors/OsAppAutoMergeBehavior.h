#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 7 member(s).
namespace Microsoft::Resources::Build {
class OsAppAutoMergeBehavior {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemPriCandidates@OsAppAutoMergeBehavior@Build@Resources@Microsoft@@UEAAJPEBGPEAPEAV?$DefPointerList@$$CBVPriFileInfo@PriFileMerger@Build@Resources@Microsoft@@P6AHPEAPEAV12345@0@ZP6A_NPEAPEBV12345@PEAH@Z@34@PEAI@Z
    virtual long GetSystemPriCandidates(unsigned short const *, WindissectOpaque * *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OsAppAutoMergeBehavior@Build@Resources@Microsoft@@QEAA@XZ
    OsAppAutoMergeBehavior();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformMerge@OsAppAutoMergeBehavior@Build@Resources@Microsoft@@UEAAJPEAVCoreProfile@34@PEBGPEBV?$DefPointerList@$$CBVPriFileInfo@PriFileMerger@Build@Resources@Microsoft@@P6AHPEAPEAV12345@0@ZP6A_NPEAPEBV12345@PEAH@Z@34@PEAVResourcePackMerge@34@@Z
    virtual long PerformMerge(WindissectOpaque *, unsigned short const *, WindissectOpaque const *, WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPriToMerger@OsAppAutoMergeBehavior@Build@Resources@Microsoft@@MEAAJPEBGPEAVResourcePackMerge@34@PEAV?$DefPointerList@$$CBVStringResult@Resources@Microsoft@@P6AHPEAPEBV123@0@ZP6A_N0PEAH@Z@34@@Z
    virtual long AddPriToMerger(unsigned short const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCulturePriSubfolderName@OsAppAutoMergeBehavior@Build@Resources@Microsoft@@MEAAJPEBG0PEAVStringResult@34@1@Z
    virtual long GetCulturePriSubfolderName(unsigned short const *, unsigned short const *, WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
