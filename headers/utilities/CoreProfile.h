#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 35 member(s).
namespace Microsoft::Resources {
class CoreProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEnvironment@CoreProfile@Resources@Microsoft@@UEBAJHPEAVAtomPoolGroup@23@PEAPEAVIEnvironment@23@@Z
    virtual long CreateEnvironment(int, WindissectOpaque *, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuildConfiguration@CoreProfile@Resources@Microsoft@@UEAAPEAVMrmBuildConfiguration@23@XZ
    virtual WindissectOpaque * GetBuildConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedWindowsFolderName@CoreProfile@Resources@Microsoft@@QEBAJPEAVStringResult@23@@Z
    long GetCachedWindowsFolderName(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultEnvironmentForFileMagic@CoreProfile@Resources@Microsoft@@UEBAJAEBT_DEFFILE_MAGIC@@PEAVStringResult@23@PEAVEnvironmentVersionInfo@23@@Z
    virtual long GetDefaultEnvironmentForFileMagic(_DEFFILE_MAGIC const &, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultUniqueName@CoreProfile@Resources@Microsoft@@UEBAJPEBGPEAVStringResult@23@@Z
    virtual long GetDefaultUniqueName(unsigned short const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironmentVersionInfo@CoreProfile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@PEAPEAVIEnvironmentVersionInfo@23@@Z
    virtual long GetEnvironmentVersionInfo(int, WindissectOpaque *, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergeFolders@CoreProfile@Resources@Microsoft@@UEBAJPEAVStringResult@23@0@Z
    virtual long GetMergeFolders(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumEnvironments@CoreProfile@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumEnvironments() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumThreadAwareQualifiers@CoreProfile@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumThreadAwareQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOsAppsFolderName@CoreProfile@Resources@Microsoft@@QEBAJPEAVStringResult@23@@Z
    long GetOsAppsFolderName(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInfo@CoreProfile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@00@Z
    virtual long GetPackageInfo(int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierInfoForEnvironment@CoreProfile@Resources@Microsoft@@UEBAJPEBGPEBVIEnvironmentVersionInfo@23@PEBVIEnvironment@23@PEAHPEAPEBQEBGPEAPEBG@Z
    virtual long GetQualifierInfoForEnvironment(unsigned short const *, WindissectOpaque const *, WindissectOpaque const *, int *, unsigned short const * const * *, unsigned short const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootFolderForPriFile@CoreProfile@Resources@Microsoft@@UEBAJPEBGPEAVStringResult@23@@Z
    virtual long GetRootFolderForPriFile(unsigned short const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetPlatformAndVersion@CoreProfile@Resources@Microsoft@@UEAAJPEAVStringResult@23@0@Z
    virtual long GetTargetPlatformAndVersion(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetPlatformAndVersionForFileMagic@CoreProfile@Resources@Microsoft@@UEAAJAEBT_DEFFILE_MAGIC@@PEAVStringResult@23@1@Z
    virtual long GetTargetPlatformAndVersionForFileMagic(_DEFFILE_MAGIC const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetPlatformVersionForFileMagic@CoreProfile@Resources@Microsoft@@UEAAJAEBT_DEFFILE_MAGIC@@PEAW4_MrmPlatformVersionInternal@23@@Z
    virtual long GetTargetPlatformVersionForFileMagic(_DEFFILE_MAGIC const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadAwareQualifierName@CoreProfile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetThreadAwareQualifierName(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompatibleEnvironment@CoreProfile@Resources@Microsoft@@UEBA_NPEBVEnvironmentReference@23@PEBVIEnvironment@23@PEAPEBVRemapAtomPool@23@@Z
    virtual bool IsCompatibleEnvironment(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullyQualifiedReferenceAllowed@CoreProfile@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool IsFullyQualifiedReferenceAllowed(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadPriFileAllowed@CoreProfile@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool IsLoadPriFileAllowed(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadResourceMapAllowed@CoreProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@0@Z
    virtual bool IsLoadResourceMapAllowed(unsigned short const *, int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceFileAutoLoadSupported@CoreProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsResourceFileAutoLoadSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceMapLookupByNameAllowed@CoreProfile@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool IsResourceMapLookupByNameAllowed(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedFileMagicNumber@CoreProfile@Resources@Microsoft@@UEBA_NAEBT_DEFFILE_MAGIC@@@Z
    virtual bool IsSupportedFileMagicNumber(_DEFFILE_MAGIC const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnsafeLoadPriFileAllowed@CoreProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsUnsafeLoadPriFileAllowed() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationSetting@CoreProfile@Resources@Microsoft@@UEBAJPEBG00@Z
    virtual long SetApplicationSetting(unsigned short const *, unsigned short const *, unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnvironmentInitializer@CoreProfile@Resources@Microsoft@@UEAAJPEBU_ENVIRONMENT_INITIALIZER@@H@Z
    virtual long SetEnvironmentInitializer(_ENVIRONMENT_INITIALIZER const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetApplicationSetting@CoreProfile@Resources@Microsoft@@UEBA_NPEBG0PEAVStringResult@23@@Z
    virtual bool TryGetApplicationSetting(unsigned short const *, unsigned short const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBaseEnvironmentIndex@CoreProfile@Resources@Microsoft@@UEBA_NPEAH@Z
    virtual bool TryGetBaseEnvironmentIndex(int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEnvironmentForChecksum@CoreProfile@Resources@Microsoft@@UEBA_NIPEAVStringResult@23@PEAVEnvironmentVersionInfo@23@@Z
    virtual bool TryGetEnvironmentForChecksum(unsigned int, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreProfile@Resources@Microsoft@@UEAA@XZ
    virtual ~CoreProfile();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreProfile@Resources@Microsoft@@IEAA@XZ
    CoreProfile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRedirectedSystemMergeFolder@CoreProfile@Resources@Microsoft@@IEBA_NPEAVStringResult@23@@Z
    bool TryGetRedirectedSystemMergeFolder(WindissectOpaque *) const;
};
} // namespace Microsoft::Resources
