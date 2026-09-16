#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace Microsoft::Resources {
class BundledPackageVariantProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@BundledPackageVariantProfile@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEBG11PEAPEAV123@@Z
    static long CreateInstance(int, unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@BundledPackageVariantProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergeFolders@BundledPackageVariantProfile@Resources@Microsoft@@UEBAJPEAVStringResult@23@0@Z
    virtual long GetMergeFolders(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadPriFileAllowed@BundledPackageVariantProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@@Z
    virtual bool IsLoadPriFileAllowed(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadResourceMapAllowed@BundledPackageVariantProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@0@Z
    virtual bool IsLoadResourceMapAllowed(unsigned short const *, int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BundledPackageVariantProfile@Resources@Microsoft@@UEAA@XZ
    virtual ~BundledPackageVariantProfile();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BundledPackageVariantProfile@Resources@Microsoft@@IEAA@W4_MrmPlatformVersionInternal@12@@Z
    BundledPackageVariantProfile(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@BundledPackageVariantProfile@Resources@Microsoft@@IEAAJW4_MrmPlatformVersionInternal@23@PEBG11@Z
    long Init(int, unsigned short const *, unsigned short const *, unsigned short const *);
};
} // namespace Microsoft::Resources
