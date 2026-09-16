#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 14 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceManagerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceManagerFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentResourceManagerForSystemProfile@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceManager@2345@@Z
    virtual long GetCurrentResourceManagerForSystemProfile(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentResourceManagerInternal@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@QEAAJPEAPEAVCResourceManagerInternal@Runtime@3Microsoft@@@Z
    long GetCurrentResourceManagerInternal(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentResourceManagerState@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAK@Z
    virtual long GetCurrentResourceManagerState(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceManagerForSystemProfile@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceManager@2345@@Z
    virtual long GetResourceManagerForSystemProfile(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceReference@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsResourceReference(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceManager@2345@@Z
    virtual long get_Current(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCurrentResourceManagerForSystemProfileWithPackageName@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@AEAAJPEBG@Z
    long _CreateCurrentResourceManagerForSystemProfileWithPackageName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateInternalResourceManagerWithStoreProfile@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@AEAAJPEAPEAVCResourceManagerInternal@Runtime@3Microsoft@@@Z
    long _CreateInternalResourceManagerWithStoreProfile(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInternalResourceManagerFromSingleResourceManager@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@AEAAJPEAPEAVCResourceManagerInternal@Runtime@3Microsoft@@@Z
    long _GetInternalResourceManagerFromSingleResourceManager(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteToLifetimeStore@CResourceManagerFactory@Core@Resources@ApplicationModel@Windows@@AEAAJPEAUIResourceManager@2345@@Z
    long _WriteToLifetimeStore(WindissectOpaque *);
};
} // namespace Windows::ApplicationModel::Resources::Core
