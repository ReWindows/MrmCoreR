#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 11 member(s).
class CMrtStringResolver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CMrtStringResolver@@UEAAJPEBG000@Z
    virtual long Add(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWithQualifiers@CMrtStringResolver@@UEAAJPEBG0IPEAURESOURCE_QUALIFIER@@H@Z
    virtual long AddWithQualifiers(unsigned short const *, unsigned short const *, unsigned int, RESOURCE_QUALIFIER *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultContext@CMrtStringResolver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetDefaultContext(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterfaceSupportsErrorInfo@CMrtStringResolver@@UEAAJAEBU_GUID@@@Z
    virtual long InterfaceSupportsErrorInfo(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CMrtStringResolver@@UEAAJPEBGPEAPEAG@Z
    virtual long Resolve(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAll@CMrtStringResolver@@UEAAJPEBGPEAPEAUIResourceCandidateCollection@@@Z
    virtual long ResolveAll(unsigned short const *, IResourceCandidateCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAllForContext@CMrtStringResolver@@UEAAJPEAUIResourceContext@@PEBGPEAPEAUIResourceCandidateCollection@@@Z
    virtual long ResolveAllForContext(IResourceContext *, unsigned short const *, IResourceCandidateCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveForContext@CMrtStringResolver@@UEAAJPEAUIResourceContext@@PEBGPEAPEAG@Z
    virtual long ResolveForContext(IResourceContext *, unsigned short const *, unsigned short * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMrtStringResolver@@MEAA@XZ
    virtual ~CMrtStringResolver();
};
