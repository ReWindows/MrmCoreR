#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 29 member(s).
namespace Windows::ApplicationModel::Resources {
class CResourceLoader {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceLoader@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceLoader@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceLoader();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceLoader@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceLoader@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CResourceLoader@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU5@@Z
    virtual long GetString(HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringForUri@CResourceLoader@Resources@ApplicationModel@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAPEAUHSTRING__@@@Z
    virtual long GetStringForUri(WindissectOpaque *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceLoader@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CResourceLoader@Resources@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CResourceLoader@Resources@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceLoader@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceLoader@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CResourceLoader@Resources@ApplicationModel@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultResourceContext@CResourceLoader@Resources@ApplicationModel@Windows@@AEAAJPEAPEAUIResourceContext@Core@234@@Z
    long _GetDefaultResourceContext(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RuntimeClassInitialize@CResourceLoader@Resources@ApplicationModel@Windows@@AEAAJPEAUIResourceContext@Core@234@PEAUHSTRING__@@@Z
    long _RuntimeClassInitialize(WindissectOpaque *, HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceLoader@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceLoader();
};
} // namespace Windows::ApplicationModel::Resources
