#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
namespace Microsoft::Resources {
class EmptyInitClientProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EmptyInitClientProfile@Resources@Microsoft@@SAJW4_MrmPlatformVersionInternal@23@PEAPEAV123@@Z
    static long CreateInstance(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPriFilePathForResourceMapName@EmptyInitClientProfile@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@PEA_N@Z
    virtual long GetMainPriFilePathForResourceMapName(unsigned short const *, WindissectOpaque *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergeFolders@EmptyInitClientProfile@Resources@Microsoft@@UEBAJPEAVStringResult@23@0@Z
    virtual long GetMergeFolders(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullyQualifiedReferenceAllowed@EmptyInitClientProfile@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool IsFullyQualifiedReferenceAllowed(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadResourceMapAllowed@EmptyInitClientProfile@Resources@Microsoft@@UEAA_NPEBGW4_MRMPROFILE_PHASE@23@0@Z
    virtual bool IsLoadResourceMapAllowed(unsigned short const *, int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceMapLookupByNameAllowed@EmptyInitClientProfile@Resources@Microsoft@@UEBA_NPEBG@Z
    virtual bool IsResourceMapLookupByNameAllowed(unsigned short const *) const;
};
} // namespace Microsoft::Resources
