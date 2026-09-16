#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 34 member(s).
class CMrtResourceContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMrtResourceContext@@QEAA@XZ
    CMrtResourceContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CMrtResourceContext@@UEAAJPEAPEAUIResourceContext@@@Z
    virtual long Clone(IResourceContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternateForm@CMrtResourceContext@@UEAAJPEAPEAG@Z
    virtual long GetAlternateForm(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContrast@CMrtResourceContext@@UEAAJPEAW4RESOURCE_CONTRAST@@@Z
    virtual long GetContrast(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHomeRegion@CMrtResourceContext@@UEAAJPEAPEAG@Z
    virtual long GetHomeRegion(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMrtResourceContext@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntegerScale@CMrtResourceContext@@UEAAJPEAI@Z
    virtual long GetIntegerScale(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguage@CMrtResourceContext@@UEAAJPEAPEAG@Z
    virtual long GetLanguage(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutDirection@CMrtResourceContext@@UEAAJPEAW4RESOURCE_LAYOUT_DIRECTION@@@Z
    virtual long GetLayoutDirection(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@CMrtResourceContext@@UEAAJPEBGPEAPEAG@Z
    virtual long GetQualifierValue(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMrtResourceContext@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScale@CMrtResourceContext@@UEAAJPEAW4RESOURCE_SCALE@@@Z
    virtual long GetScale(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetSize@CMrtResourceContext@@UEAAJPEAG@Z
    virtual long GetTargetSize(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMrtResourceContext@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMrtResourceContext@@QEAAJPEAVCContext@Runtime@Resources@Microsoft@@PEAUIMrtResourceManager@@_N@Z
    long Initialize(WindissectOpaque *, IMrtResourceManager *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForStringResolver@CMrtResourceContext@@QEAAJPEAVCContext@Runtime@Resources@Microsoft@@PEAUIMrtStringResolver@@_N@Z
    long InitializeForStringResolver(WindissectOpaque *, IMrtStringResolver *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForSystemProfile@CMrtResourceContext@@QEAAJPEAUIInspectable@@PEAXH@Z
    long InitializeForSystemProfile(IInspectable *, void *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemComponentProfile@CMrtResourceContext@@UEAAJPEAH@Z
    virtual long IsSystemComponentProfile(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideToMatch@CMrtResourceContext@@UEAAJPEAUIResourceCandidate@@@Z
    virtual long OverrideToMatch(IResourceCandidate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMrtResourceContext@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetQualifierValue@CMrtResourceContext@@UEAAJPEBG@Z
    virtual long ResetQualifierValue(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlternateForm@CMrtResourceContext@@UEAAJPEBG@Z
    virtual long SetAlternateForm(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContrast@CMrtResourceContext@@UEAAJW4RESOURCE_CONTRAST@@@Z
    virtual long SetContrast(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHomeRegion@CMrtResourceContext@@UEAAJPEBG@Z
    virtual long SetHomeRegion(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIntegerScale@CMrtResourceContext@@UEAAJI@Z
    virtual long SetIntegerScale(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLanguage@CMrtResourceContext@@UEAAJPEBG@Z
    virtual long SetLanguage(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutDirection@CMrtResourceContext@@UEAAJW4RESOURCE_LAYOUT_DIRECTION@@@Z
    virtual long SetLayoutDirection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualifierValue@CMrtResourceContext@@UEAAJPEBG0@Z
    virtual long SetQualifierValue(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CMrtResourceContext@@UEAAJW4RESOURCE_SCALE@@@Z
    virtual long SetScale(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetSize@CMrtResourceContext@@UEAAJG@Z
    virtual long SetTargetSize(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetQualifierValue@CMrtResourceContext@@UEAAJPEBG0PEAI@Z
    virtual long TrySetQualifierValue(unsigned short const *, unsigned short const *, unsigned int *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMrtResourceContext@@MEAA@XZ
    virtual ~CMrtResourceContext();
};
