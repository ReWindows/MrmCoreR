#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 26 member(s).
class CResourceMap {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceMap@@QEAA@XZ
    CResourceMap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateForContext@CResourceMap@@UEAAJPEAUIResourceContext@@PEBGPEAPEAUIResourceCandidate2@@@Z
    virtual long GetCandidateForContext(IResourceContext *, unsigned short const *, IResourceCandidate2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateWithQuery@CResourceMap@@UEAAJPEBGPEAPEAUIResourceCandidate2@@@Z
    virtual long GetCandidateWithQuery(unsigned short const *, IResourceCandidate2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@CResourceMap@@UEAAJPEBGPEAPEAG@Z
    virtual long GetFilePath(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePathByUri@CResourceMap@@UEAAJPEAUIUri@@PEAPEAG@Z
    virtual long GetFilePathByUri(IUri *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePathForContext@CResourceMap@@UEAAJPEAUIResourceContext@@PEBGPEAPEAG@Z
    virtual long GetFilePathForContext(IResourceContext *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePathForContextByUri@CResourceMap@@UEAAJPEAUIResourceContext@@PEAUIUri@@PEAPEAG@Z
    virtual long GetFilePathForContextByUri(IResourceContext *, IUri *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullyQualifiedReference@CResourceMap@@UEAAJPEBG0PEAPEAG@Z
    virtual long GetFullyQualifiedReference(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedResource@CResourceMap@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long GetNamedResource(unsigned short const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedResourceByIndex@CResourceMap@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetNamedResourceByIndex(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedResourceCount@CResourceMap@@UEAAJPEAI@Z
    virtual long GetNamedResourceCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedResourceUri@CResourceMap@@UEAAJIPEAPEAG@Z
    virtual long GetNamedResourceUri(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CResourceMap@@UEAAJPEBGPEAPEAUIStream@@@Z
    virtual long GetStream(unsigned short const *, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamForContext@CResourceMap@@UEAAJPEAUIResourceContext@@PEBGPEAPEAUIStream@@@Z
    virtual long GetStreamForContext(IResourceContext *, unsigned short const *, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CResourceMap@@UEAAJPEBGPEAPEAG@Z
    virtual long GetString(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringByIndex@CResourceMap@@UEAAJIPEAPEAG@Z
    virtual long GetStringByIndex(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringForContext@CResourceMap@@UEAAJPEAUIResourceContext@@PEBGPEAPEAG@Z
    virtual long GetStringForContext(IResourceContext *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtree@CResourceMap@@UEAAJPEBGPEAPEAUIResourceMap@@@Z
    virtual long GetSubtree(unsigned short const *, IResourceMap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUri@CResourceMap@@UEAAJPEAPEAG@Z
    virtual long GetUri(unsigned short * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceMap@@MEAA@XZ
    virtual ~CResourceMap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCandidateForContext@CResourceMap@@AEAAJPEAUIResourceContext@@PEBG_NPEAPEAUIResourceCandidate2@@@Z
    long _GetCandidateForContext(IResourceContext *, unsigned short const *, bool, IResourceCandidate2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMrtQueryIsPresent@CResourceMap@@AEAAJPEBG@Z
    long _GetMrtQueryIsPresent(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResource@CResourceMap@@AEAAJPEAUIResourceContext@@PEBGPEAUIUri@@1PEAPEAG@Z
    long _GetResource(IResourceContext *, unsigned short const *, IUri *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResource@CResourceMap@@AEAAJPEAUIResourceContext@@PEBGPEAPEAUIStream@@@Z
    long _GetResource(IResourceContext *, unsigned short const *, IStream * *);
};
