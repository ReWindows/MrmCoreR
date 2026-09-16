#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 39 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceCandidate {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceCandidate@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceCandidate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z
    virtual long GetQualifierValue(HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsFileAsync@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@5@@Z
    virtual long GetValueAsFileAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsStreamAsync@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@5@@Z
    virtual long GetValueAsStreamAsync(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUIResourceMap@2345@PEAVCResolvedInstanceInternal@Runtime@3Microsoft@@E@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDefault@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsDefault(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMatch@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsMatch(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMatchAsDefault@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsMatchAsDefault(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4ResourceCandidateKind@2345@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Qualifiers@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVResourceQualifier@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long get_Qualifiers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueAsString@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ValueAsString(HSTRING__* *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsStream@CResourceCandidate@Core@Resources@ApplicationModel@Windows@@EEAAJPEAPEAUIRandomAccessStream@Streams@Storage@5@@Z
    virtual long GetValueAsStream(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceCandidate@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceCandidate();
};
} // namespace Windows::ApplicationModel::Resources::Core
