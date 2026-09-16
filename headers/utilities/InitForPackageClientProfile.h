#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 17 member(s).
namespace Microsoft::Resources {
class InitForPackageClientProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@InitForPackageClientProfile@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEBGPEAPEAV123@@Z
    static long CreateInstance(int, unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@InitForPackageClientProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergeFolders@InitForPackageClientProfile@Resources@Microsoft@@UEBAJPEAVStringResult@23@0@Z
    virtual long GetMergeFolders(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumPackages@InitForPackageClientProfile@Resources@Microsoft@@UEAAHXZ
    virtual int GetNumPackages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInfo@InitForPackageClientProfile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@00@Z
    virtual long GetPackageInfo(int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootFolder@InitForPackageClientProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@@Z
    virtual long GetPackageRootFolder(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderForQualifier@InitForPackageClientProfile@Resources@Microsoft@@UEBAJPEBVIEnvironment@23@UAtom@23@PEAPEAVIQualifierValueProvider@23@@Z
    virtual long GetProviderForQualifier(WindissectOpaque const *, WindissectOpaque, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadPriFileAllowed@InitForPackageClientProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@@Z
    virtual bool IsLoadPriFileAllowed(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadResourceMapAllowed@InitForPackageClientProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@0@Z
    virtual bool IsLoadResourceMapAllowed(unsigned short const *, int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedFileMagicNumber@InitForPackageClientProfile@Resources@Microsoft@@UEBA_NAEBT_DEFFILE_MAGIC@@@Z
    virtual bool IsSupportedFileMagicNumber(_DEFFILE_MAGIC const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationSetting@InitForPackageClientProfile@Resources@Microsoft@@UEBAJPEBG00@Z
    virtual long SetApplicationSetting(unsigned short const *, unsigned short const *, unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetApplicationSetting@InitForPackageClientProfile@Resources@Microsoft@@UEBA_NPEBG0PEAVStringResult@23@@Z
    virtual bool TryGetApplicationSetting(unsigned short const *, unsigned short const *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitForPackageClientProfile@Resources@Microsoft@@UEAA@XZ
    virtual ~InitForPackageClientProfile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@InitForPackageClientProfile@Resources@Microsoft@@IEAAJW4_MrmPlatformVersionInternal@23@PEBG@Z
    long Init(int, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InitForPackageClientProfile@Resources@Microsoft@@IEAA@W4_MrmPlatformVersionInternal@12@@Z
    InitForPackageClientProfile(int);
};
} // namespace Microsoft::Resources
