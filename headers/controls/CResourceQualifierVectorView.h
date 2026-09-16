#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 27 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceQualifierVectorView {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceQualifierVectorView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IIterator@PEAVResourceQualifier@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJIPEAPEAUIResourceQualifier@2345@@Z
    virtual long GetAt(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJIIPEAPEAUIResourceQualifier@2345@PEAI@Z
    virtual long GetMany(unsigned int, unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUIResourceQualifier@2345@PEAIPEAE@Z
    virtual long IndexOf(WindissectOpaque *, unsigned int *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceQualifierVectorView@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceQualifierVectorView();
};
} // namespace Windows::ApplicationModel::Resources::Core
