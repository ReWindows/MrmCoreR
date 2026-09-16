#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class PerViewContextManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEAAJU_CONTEXT_ID@@PEAPEAVCContext@Runtime@3Microsoft@@@Z
    virtual long Clone(_CONTEXT_ID, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerThreadContext@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEBAJU_CONTEXT_ID@@PEAPEAVCContext@Runtime@3Microsoft@@@Z
    virtual long GetPerThreadContext(_CONTEXT_ID, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierEvent@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEBAJU_CONTEXT_ID@@PEAPEAVCQualifierEvent@2345@@Z
    virtual long GetQualifierEvent(_CONTEXT_ID, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAVMrmProfile@3Microsoft@@PEAVCContext@Runtime@37@@Z
    virtual long Initialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForClone@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEAVCContext@Runtime@3Microsoft@@PEAVCQualifierEvent@2345@@Z
    virtual long InitializeForClone(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForThread@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEAAJW4ContextType@Runtime@3Microsoft@@PEAUIWindowContextPartner@UI@5@PEAU_CONTEXT_ID@@@Z
    virtual long InitializeForThread(int, ::Windows::UI::IWindowContextPartner *, _CONTEXT_ID *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PerViewContextManager@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    PerViewContextManager();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEAAJU_CONTEXT_ID@@@Z
    virtual long Release(_CONTEXT_ID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAllQualifiers@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEAAJXZ
    virtual long ResetAllQualifiers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetQualifier@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEBG_N@Z
    virtual long ResetQualifier(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateQualifier@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEAAJPEBG0W4_SetQualifierFlags@Runtime@3Microsoft@@@Z
    virtual long UpdateQualifier(unsigned short const *, unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PerViewContextManager@Core@Resources@ApplicationModel@Windows@@UEAA@XZ
    virtual ~PerViewContextManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePerViewContext@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@AEAAJU_CONTEXT_ID@@W4ContextType@Runtime@3Microsoft@@PEAUIWindowContextPartner@UI@5@PEAUCONTEXT_PER_VIEW@12345@@Z
    long _CreatePerViewContext(_CONTEXT_ID, int, ::Windows::UI::IWindowContextPartner *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPerViewContext@PerViewContextManager@Core@Resources@ApplicationModel@Windows@@AEBAJU_CONTEXT_ID@@PEAUCONTEXT_PER_VIEW@12345@@Z
    long _GetPerViewContext(_CONTEXT_ID, WindissectOpaque *) const;
};
} // namespace Windows::ApplicationModel::Resources::Core
