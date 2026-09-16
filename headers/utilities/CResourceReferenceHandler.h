#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
class CResourceReferenceHandler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedResource@CResourceReferenceHandler@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long GetNamedResource(unsigned short const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CResourceReferenceHandler@@UEAAJPEBGPEAPEAGPEAH@Z
    virtual long GetString(unsigned short const *, unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringForContext@CResourceReferenceHandler@@UEAAJPEAUIResourceContext@@PEBGPEAPEAGPEAH@Z
    virtual long GetStringForContext(IResourceContext *, unsigned short const *, unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullyQualifiedResourceReference@CResourceReferenceHandler@@UEAAJPEBGPEAH@Z
    virtual long IsFullyQualifiedResourceReference(unsigned short const *, int *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceReferenceHandler@@MEAA@XZ
    virtual ~CResourceReferenceHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResource@CResourceReferenceHandler@@AEAAJPEAUIResourceContext@@PEBGPEAPEAGPEAHPEAVCResolvedInstanceCollectionInternal@Runtime@Resources@Microsoft@@PEAPEAVCResourceIndexInternal@456@@Z
    long _GetResource(IResourceContext *, unsigned short const *, unsigned short * *, int *, WindissectOpaque *, WindissectOpaque * *);
};
