#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 24 member(s).
namespace Microsoft::Resources {
class MetroAppClientProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MetroAppClientProfile@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEAPEAV123@@Z
    static long CreateInstance(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsChangeNotificationSupported@MetroAppClientProfile@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool GetIsChangeNotificationSupported(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguageProviderType@MetroAppClientProfile@Resources@Microsoft@@UEBA?AW4LanguageProviderType@23@XZ
    virtual int GetLanguageProviderType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@MetroAppClientProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergeFolders@MetroAppClientProfile@Resources@Microsoft@@UEBAJPEAVStringResult@23@0@Z
    virtual long GetMergeFolders(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumThreadAwareQualifiers@MetroAppClientProfile@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumThreadAwareQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectSharedState@MetroAppClientProfile@Resources@Microsoft@@UEBAJPEAW4_MrtSharedObjectState@23@@Z
    virtual long GetObjectSharedState(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderForQualifier@MetroAppClientProfile@Resources@Microsoft@@UEBAJPEBVIEnvironment@23@UAtom@23@PEAPEAVIQualifierValueProvider@23@@Z
    virtual long GetProviderForQualifier(WindissectOpaque const *, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadAwareQualifierName@MetroAppClientProfile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetThreadAwareQualifierName(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadPriFileAllowed@MetroAppClientProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@@Z
    virtual bool IsLoadPriFileAllowed(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadResourceMapAllowed@MetroAppClientProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@0@Z
    virtual bool IsLoadResourceMapAllowed(unsigned short const *, int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageLoadAllowedDuringStartup@MetroAppClientProfile@Resources@Microsoft@@UEBA_NH@Z
    virtual bool IsPackageLoadAllowedDuringStartup(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceFileAutoLoadSupported@MetroAppClientProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsResourceFileAutoLoadSupported() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedFileMagicNumber@MetroAppClientProfile@Resources@Microsoft@@UEBA_NAEBT_DEFFILE_MAGIC@@@Z
    virtual bool IsSupportedFileMagicNumber(_DEFFILE_MAGIC const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemPackage@MetroAppClientProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsSystemPackage() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnsafeLoadPriFileAllowed@MetroAppClientProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsUnsafeLoadPriFileAllowed() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationSetting@MetroAppClientProfile@Resources@Microsoft@@UEBAJPEBG00@Z
    virtual long SetApplicationSetting(unsigned short const *, unsigned short const *, unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRedirectResources@MetroAppClientProfile@Resources@Microsoft@@UEBA_NXZ
    virtual bool ShouldRedirectResources() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetApplicationSetting@MetroAppClientProfile@Resources@Microsoft@@UEBA_NPEBG0PEAVStringResult@23@@Z
    virtual bool TryGetApplicationSetting(unsigned short const *, unsigned short const *, WindissectOpaque *) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@MetroAppClientProfile@Resources@Microsoft@@IEAAJW4_MrmPlatformVersionInternal@23@@Z
    long Init(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MetroAppClientProfile@Resources@Microsoft@@IEAA@W4_MrmPlatformVersionInternal@12@_N@Z
    MetroAppClientProfile(int, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSystemPackage@MetroAppClientProfile@Resources@Microsoft@@AEAAJXZ
    long CheckSystemPackage();
};
} // namespace Microsoft::Resources
