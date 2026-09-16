#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 21 member(s).
namespace Microsoft::Resources {
class MrmProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseDefaultProfile@MrmProfile@Resources@Microsoft@@SAJW4ProfileType@123@W4_MrmPlatformVersionInternal@23@PEBG22PEAPEAV123@@Z
    static long ChooseDefaultProfile(int, int, unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultEnvironmentForFileMagic@MrmProfile@Resources@Microsoft@@UEBAJAEBT_DEFFILE_MAGIC@@PEAVStringResult@23@PEAVEnvironmentVersionInfo@23@@Z
    virtual long GetDefaultEnvironmentForFileMagic(_DEFFILE_MAGIC const &, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultTargetOsVersionForFileMagic@MrmProfile@Resources@Microsoft@@SAJAEBT_DEFFILE_MAGIC@@PEAVStringResult@23@1@Z
    static long GetDefaultTargetOsVersionForFileMagic(_DEFFILE_MAGIC const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsChangeNotificationSupported@MrmProfile@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool GetIsChangeNotificationSupported(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguageProviderType@MrmProfile@Resources@Microsoft@@UEBA?AW4LanguageProviderType@23@XZ
    virtual int GetLanguageProviderType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@MrmProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumPackages@MrmProfile@Resources@Microsoft@@UEAAHXZ
    virtual int GetNumPackages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectSharedState@MrmProfile@Resources@Microsoft@@UEBAJPEAW4_MrtSharedObjectState@23@@Z
    virtual long GetObjectSharedState(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameForFile@MrmProfile@Resources@Microsoft@@UEAAJHPEBVIRawResourceMap@23@PEAVStringResult@23@@Z
    virtual long GetPackageFullNameForFile(int, WindissectOpaque const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInfo@MrmProfile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@00@Z
    virtual long GetPackageInfo(int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootFolder@MrmProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@@Z
    virtual long GetPackageRootFolder(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierInfoForEnvironment@MrmProfile@Resources@Microsoft@@UEBAJPEBGPEBVIEnvironmentVersionInfo@23@PEBVIEnvironment@23@PEAHPEAPEBQEBGPEAPEBG@Z
    virtual long GetQualifierInfoForEnvironment(unsigned short const *, WindissectOpaque const *, WindissectOpaque const *, int *, unsigned short const * const * *, unsigned short const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetPlatformVersionForFileMagic@MrmProfile@Resources@Microsoft@@UEAAJAEBT_DEFFILE_MAGIC@@PEAW4_MrmPlatformVersionInternal@23@@Z
    virtual long GetTargetPlatformVersionForFileMagic(_DEFFILE_MAGIC const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadPriFileAllowed@MrmProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@@Z
    virtual bool IsLoadPriFileAllowed(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageLoadAllowedDuringStartup@MrmProfile@Resources@Microsoft@@UEBA_NH@Z
    virtual bool IsPackageLoadAllowedDuringStartup(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceFileAutoLoadSupported@MrmProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsResourceFileAutoLoadSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemPackage@MrmProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsSystemPackage() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRedirectResources@MrmProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool ShouldRedirectResources() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageForFile@MrmProfile@Resources@Microsoft@@UEAA_NPEBGPEAH@Z
    virtual bool TryGetPackageForFile(unsigned short const *, int *);
};
} // namespace Microsoft::Resources
