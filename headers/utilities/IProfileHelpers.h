#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 11 member(s).
namespace Microsoft::Resources {
class IProfileHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseBestVersionForPackage@IProfileHelpers@Resources@Microsoft@@SA?AW4_MrmPlatformVersionInternal@23@PEBGW4423@W4VersionOverrideFlags@123@@Z
    static int ChooseBestVersionForPackage(unsigned short const *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentModulePath@IProfileHelpers@Resources@Microsoft@@SAJPEAVStringResult@23@@Z
    static long GetCurrentModulePath(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemMetadataPathForPackage@IProfileHelpers@Resources@Microsoft@@SAJPEBGPEAVStringResult@23@@Z
    static long GetSystemMetadataPathForPackage(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemWindowsDirectoryW@IProfileHelpers@Resources@Microsoft@@SAJPEAG_K@Z
    static long GetSystemWindowsDirectoryW(unsigned short *, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IProfileHelpers@Resources@Microsoft@@QEAA@XZ
    IProfileHelpers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentProcessInDesignMode@IProfileHelpers@Resources@Microsoft@@SA_NXZ
    static bool IsCurrentProcessInDesignMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PathIsInSystemWindowsDirectory@IProfileHelpers@Resources@Microsoft@@SA_NPEBG@Z
    static bool PathIsInSystemWindowsDirectory(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadMrtConfigUInt32Value@IProfileHelpers@Resources@Microsoft@@SAJPEBGPEAIPEA_N@Z
    static long ReadMrtConfigUInt32Value(unsigned short const *, unsigned int *, bool *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPackageInfo@IProfileHelpers@Resources@Microsoft@@CAJPEAVStringResult@23@0PEA_N@Z
    static long GetCurrentPackageInfo(WindissectOpaque *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsClaimPresentInToken@IProfileHelpers@Resources@Microsoft@@CA_NPEAXPEBG@Z
    static bool IsClaimPresentInToken(void *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesignModeClaimPresentOnCurrentProcess@IProfileHelpers@Resources@Microsoft@@CA_NXZ
    static bool IsDesignModeClaimPresentOnCurrentProcess();
};
} // namespace Microsoft::Resources
