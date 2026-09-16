#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 24 member(s).
class CMrtResourceManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMrtResourceManager@@QEAA@XZ
    CMrtResourceManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllIndividualPriFiles@CMrtResourceManager@@UEAAJPEAPEAUIPriFilePathCollection@@@Z
    virtual long GetAllIndividualPriFiles(IPriFilePathCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultContext@CMrtResourceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetDefaultContext(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMrtResourceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainResourceMap@CMrtResourceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetMainResourceMap(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReference@CMrtResourceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetReference(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMap@CMrtResourceManager@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z
    virtual long GetResourceMap(unsigned short const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMrtResourceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMrtResourceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMrtResourceManager@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForBundledPackageVariant@CMrtResourceManager@@UEAAJPEBG00@Z
    virtual long InitializeForBundledPackageVariant(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForCurrentApplication@CMrtResourceManager@@UEAAJXZ
    virtual long InitializeForCurrentApplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForFile@CMrtResourceManager@@UEAAJPEBG@Z
    virtual long InitializeForFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForInboxApplication@CMrtResourceManager@@UEAAJPEBG0@Z
    virtual long InitializeForInboxApplication(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForPackage@CMrtResourceManager@@UEAAJPEBG@Z
    virtual long InitializeForPackage(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForPackageFile@CMrtResourceManager@@UEAAJPEBG0@Z
    virtual long InitializeForPackageFile(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForPackageOrBundle@CMrtResourceManager@@UEAAJPEBG@Z
    virtual long InitializeForPackageOrBundle(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForSystemProfile@CMrtResourceManager@@QEAAJPEAUIInspectable@@PEAX@Z
    long InitializeForSystemProfile(IInspectable *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceReference@CMrtResourceManager@@UEAAJPEBGPEAH@Z
    virtual long IsResourceReference(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInitializeForCurrentApplication@CMrtResourceManager@@UEAAJXZ
    virtual long TryInitializeForCurrentApplication();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMrtResourceManager@@MEAA@XZ
    virtual ~CMrtResourceManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResourceManagerForCurrentApplication@CMrtResourceManager@@AEAAJPEAPEAVCResourceManagerInternal@Runtime@Resources@Microsoft@@@Z
    long _GetResourceManagerForCurrentApplication(WindissectOpaque * *);
};
