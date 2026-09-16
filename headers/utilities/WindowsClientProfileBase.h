#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 25 member(s).
namespace Microsoft::Resources {
class WindowsClientProfileBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEnvironment@WindowsClientProfileBase@Resources@Microsoft@@UEBAJHPEAVAtomPoolGroup@23@PEAPEAVIEnvironment@23@@Z
    virtual long CreateEnvironment(int, WindissectOpaque *, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuildConfiguration@WindowsClientProfileBase@Resources@Microsoft@@UEAAPEAVMrmBuildConfiguration@23@XZ
    virtual WindissectOpaque * GetBuildConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPriFileForResourceMapName@WindowsClientProfileBase@Resources@Microsoft@@SAJPEBG0_NPEAVStringResult@23@@Z
    static long GetDefaultPriFileForResourceMapName(unsigned short const *, unsigned short const *, bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPriFileForResourceMapNameWorker@WindowsClientProfileBase@Resources@Microsoft@@SAJPEBG0PEAVIProfileHelpers@23@_NPEAVStringResult@23@@Z
    static long GetDefaultPriFileForResourceMapNameWorker(unsigned short const *, unsigned short const *, WindissectOpaque *, bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironmentVersionInfo@WindowsClientProfileBase@Resources@Microsoft@@UEBAJHPEAPEAVIEnvironmentVersionInfo@23@PEAVStringResult@23@@Z
    virtual long GetEnvironmentVersionInfo(int, WindissectOpaque * *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@WindowsClientProfileBase@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergeFolders@WindowsClientProfileBase@Resources@Microsoft@@UEBAJPEAVStringResult@23@0@Z
    virtual long GetMergeFolders(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumEnvironments@WindowsClientProfileBase@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumEnvironments() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumSupportedTokens@WindowsClientProfileBase@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumSupportedTokens() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageNameFromFullName@WindowsClientProfileBase@Resources@Microsoft@@SAJPEBGPEAVStringResult@23@@Z
    static long GetPackageNameFromFullName(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderForQualifier@WindowsClientProfileBase@Resources@Microsoft@@UEBAJPEBVIEnvironment@23@UAtom@23@PEAPEAVIQualifierValueProvider@23@@Z
    virtual long GetProviderForQualifier(WindissectOpaque const *, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierBuildInfoByName@WindowsClientProfileBase@Resources@Microsoft@@UEBAJUAtom@23@PEBVUnifiedEnvironment@23@PEAUQualifierBuildInfo@23@@Z
    virtual long GetQualifierBuildInfoByName(WindissectOpaque, WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierBuildInfoByToken@WindowsClientProfileBase@Resources@Microsoft@@UEBAJPEBGPEBVUnifiedEnvironment@23@PEAUQualifierBuildInfo@23@@Z
    virtual long GetQualifierBuildInfoByToken(unsigned short const *, WindissectOpaque const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetPlatformAndVersion@WindowsClientProfileBase@Resources@Microsoft@@UEAAJPEAVStringResult@23@0@Z
    virtual long GetTargetPlatformAndVersion(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetPlatformAndVersionForFileMagic@WindowsClientProfileBase@Resources@Microsoft@@UEAAJAEBT_DEFFILE_MAGIC@@PEAVStringResult@23@1@Z
    virtual long GetTargetPlatformAndVersionForFileMagic(_DEFFILE_MAGIC const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToken@WindowsClientProfileBase@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetToken(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeForQualifier@WindowsClientProfileBase@Resources@Microsoft@@UEBAJPEBVIEnvironment@23@UAtom@23@PEAPEAVIBuildQualifierType@23@@Z
    virtual long GetTypeForQualifier(WindissectOpaque const *, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompatibleEnvironment@WindowsClientProfileBase@Resources@Microsoft@@UEBA_NPEBVEnvironmentReference@23@PEBVIEnvironment@23@PEAPEBVRemapAtomPool@23@@Z
    virtual bool IsCompatibleEnvironment(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedFileMagicNumber@WindowsClientProfileBase@Resources@Microsoft@@QEBA_N_NAEBT_DEFFILE_MAGIC@@@Z
    bool IsSupportedFileMagicNumber(bool, _DEFFILE_MAGIC const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedFileMagicNumber@WindowsClientProfileBase@Resources@Microsoft@@UEBA_NAEBT_DEFFILE_MAGIC@@@Z
    virtual bool IsSupportedFileMagicNumber(_DEFFILE_MAGIC const &) const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultTypeForQualifier@WindowsClientProfileBase@Resources@Microsoft@@KAJPEBVIEnvironment@23@W4_MrmPlatformVersionInternal@23@UAtom@23@PEAPEAVIBuildQualifierType@23@@Z
    static long GetDefaultTypeForQualifier(WindissectOpaque const *, int, WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumThreadAwareQualifiersForOSVersion@WindowsClientProfileBase@Resources@Microsoft@@IEBAH_K@Z
    int GetNumThreadAwareQualifiersForOSVersion(uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadAwareQualifierNameForOSVersion@WindowsClientProfileBase@Resources@Microsoft@@IEBAJH_KPEAVStringResult@23@@Z
    long GetThreadAwareQualifierNameForOSVersion(int, uint64_t, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WindowsClientProfileBase@Resources@Microsoft@@IEAAJW4_MrmPlatformVersionInternal@23@@Z
    long Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemapQualifierIndexToCore@WindowsClientProfileBase@Resources@Microsoft@@KAJW4_MrmPlatformVersionInternal@23@UAtom@23@PEAW4QualifierIndex@CoreEnvironment@23@PEA_N@Z
    static long RemapQualifierIndexToCore(int, WindissectOpaque, int *, bool *);
};
} // namespace Microsoft::Resources
