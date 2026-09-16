#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 52 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceManager@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllNamedResourcesForPackage@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@UResourceLayoutInfo@2345@PEAPEAU?$IVectorView@PEAVNamedResource@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long GetAllNamedResourcesForPackage(HSTRING__*, WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllSubtreesForPackage@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@UResourceLayoutInfo@2345@PEAPEAU?$IVectorView@PEAVResourceMap@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long GetAllSubtreesForPackage(HSTRING__*, WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultResourceContextForCurrentThread@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceContext@2345@@Z
    virtual long GetDefaultResourceContextForCurrentThread(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtResourceManagerForResourceManager@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetMrtResourceManagerForResourceManager(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtSharedObjectState@CResourceManager@Core@Resources@ApplicationModel@Windows@@QEAA?AW4_MrtSharedObjectState@3Microsoft@@XZ
    int GetMrtSharedObjectState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSingletonResourceManager@CResourceManager@Core@Resources@ApplicationModel@Windows@@SAJPEAPEAV12345@@Z
    static long GetSingletonResourceManager(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CResourceManager@Core@Resources@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CResourceManager@Core@Resources@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPriFileForSystemUse@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEBG@Z
    virtual long LoadPriFileForSystemUse(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPriFiles@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAU?$IIterable@PEAUIStorageFile@Storage@Windows@@@Collections@Foundation@5@@Z
    virtual long LoadPriFiles(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CResourceManager@Core@Resources@ApplicationModel@Windows@@QEAAJPEAVCResourceManagerInternal@Runtime@3Microsoft@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadPriFiles@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAU?$IIterable@PEAUIStorageFile@Storage@Windows@@@Collections@Foundation@5@@Z
    virtual long UnloadPriFiles(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllResourceMaps@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVResourceMap@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long get_AllResourceMaps(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultContext@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceContext@2345@@Z
    virtual long get_DefaultContext(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MainResourceMap@CResourceManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceMap@2345@@Z
    virtual long get_MainResourceMap(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckInitializeResourceManagerInternal@CResourceManager@Core@Resources@ApplicationModel@Windows@@AEAAJXZ
    long _CheckInitializeResourceManagerInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateContextManager@CResourceManager@Core@Resources@ApplicationModel@Windows@@AEAAJH@Z
    long _CreateContextManager(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFilePathsCollection@CResourceManager@Core@Resources@ApplicationModel@Windows@@AEAAJPEAU?$IIterable@PEAUIStorageFile@Storage@Windows@@@Collections@Foundation@5@PEAV?$DynamicArray@PEAVStringResult@Resources@Microsoft@@@3Microsoft@@@Z
    long _GetFilePathsCollection(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceManager@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceManager();
};
} // namespace Windows::ApplicationModel::Resources::Core
