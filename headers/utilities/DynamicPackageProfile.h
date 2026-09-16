#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Microsoft::Resources {
class DynamicPackageProfile {
public:
    class AppxPackageInfo;
    class PackageIndexMap;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@DynamicPackageProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumPackages@DynamicPackageProfile@Resources@Microsoft@@UEAAHXZ
    virtual int GetNumPackages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameForFile@DynamicPackageProfile@Resources@Microsoft@@UEAAJHPEBVIRawResourceMap@23@PEAVStringResult@23@@Z
    virtual long GetPackageFullNameForFile(int, WindissectOpaque const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInfo@DynamicPackageProfile@Resources@Microsoft@@UEBAJHPEAVStringResult@23@00@Z
    virtual long GetPackageInfo(int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootFolder@DynamicPackageProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@@Z
    virtual long GetPackageRootFolder(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageForFile@DynamicPackageProfile@Resources@Microsoft@@UEAA_NPEBGPEAH@Z
    virtual bool TryGetPackageForFile(unsigned short const *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicPackageProfile@Resources@Microsoft@@UEAA@XZ
    virtual ~DynamicPackageProfile();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DynamicPackageProfile@Resources@Microsoft@@IEAA@W4_MrmPlatformVersionInternal@12@@Z
    DynamicPackageProfile(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePackageIndexMapForResourceMap@DynamicPackageProfile@Resources@Microsoft@@IEAAJPEBVIRawResourceMap@23@PEAPEBV?$DynamicArray@H@23@@Z
    long GeneratePackageIndexMapForResourceMap(WindissectOpaque const *, WindissectOpaque const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInfoFromCache@DynamicPackageProfile@Resources@Microsoft@@IEBAJHPEAVStringResult@23@00@Z
    long GetPackageInfoFromCache(int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DynamicPackageProfile@Resources@Microsoft@@IEAAJW4_MrmPlatformVersionInternal@23@@Z
    long Init(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPackageAliases@DynamicPackageProfile@Resources@Microsoft@@IEAAJXZ
    long InitPackageAliases();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPackagesInfo@DynamicPackageProfile@Resources@Microsoft@@IEAAJXZ
    long InitPackagesInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPackagesInfo@DynamicPackageProfile@Resources@Microsoft@@IEAAJIPEAPEAVAppxPackageInfo@123@PEAPEAPEAV4123@PEAH@Z
    long InitPackagesInfo(unsigned int, WindissectOpaque * *, WindissectOpaque * * *, int *);
};
} // namespace Microsoft::Resources
