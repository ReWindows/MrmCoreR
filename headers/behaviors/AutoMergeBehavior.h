#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources::Build {
class AutoMergeBehavior {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoMergeBehavior@Build@Resources@Microsoft@@QEAA@XZ
    AutoMergeBehavior();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsOverlayPresent@AutoMergeBehavior@Build@Resources@Microsoft@@UEAAXXZ
    virtual void SetIsOverlayPresent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOverlayPris@AutoMergeBehavior@Build@Resources@Microsoft@@IEAAJPEAVCoreProfile@34@PEBGPEAVResourcePackMerge@34@PEAV?$DefPointerList@$$CBVStringResult@Resources@Microsoft@@P6AHPEAPEBV123@0@ZP6A_N0PEAH@Z@34@@Z
    long AddOverlayPris(WindissectOpaque *, unsigned short const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOverlayPrisCollection@AutoMergeBehavior@Build@Resources@Microsoft@@IEAAJPEAVCoreProfile@34@IIPEBV?$DefList@PEBVPriFileInfo@PriFileMerger@Build@Resources@Microsoft@@P6AHPEAPEAV12345@0@ZP6A_NPEAPEBV12345@PEAH@Z@34@PEAVResourcePackMerge@34@PEAV?$DefPointerList@$$CBVStringResult@Resources@Microsoft@@P6AHPEAPEBV123@0@ZP6A_N0PEAH@Z@34@@Z
    long AddOverlayPrisCollection(WindissectOpaque *, unsigned int, unsigned int, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
