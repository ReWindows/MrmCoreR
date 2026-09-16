#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 27 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceCandidateVectorView {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceCandidateVectorView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IIterator@PEAVResourceCandidate@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJIPEAPEAUIResourceCandidate@2345@@Z
    virtual long GetAt(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJIIPEAPEAUIResourceCandidate@2345@PEAI@Z
    virtual long GetMany(unsigned int, unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUIResourceCandidate@2345@PEAIPEAE@Z
    virtual long IndexOf(WindissectOpaque *, unsigned int *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceCandidateVectorView@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceCandidateVectorView();
};
} // namespace Windows::ApplicationModel::Resources::Core
