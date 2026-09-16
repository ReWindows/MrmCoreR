#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 38 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceContext {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceContext@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceContext@2345@@Z
    virtual long Clone(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextManager@CResourceContext@Core@Resources@ApplicationModel@Windows@@QEAAJPEAPEAVIContextManager@2345@@Z
    long GetContextManager(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtResourceContextForResourceContext@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetMrtResourceContextForResourceContext(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CResourceContext@Core@Resources@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CResourceContext@Core@Resources@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideToMatch@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJPEAU?$IIterable@PEAVResourceQualifier@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long OverrideToMatch(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetQualifierValues@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    virtual long ResetQualifierValues(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CResourceContext@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUIWeakReference@@W4ContextType@Runtime@3Microsoft@@PEAUIWindowContextPartner@UI@5@@Z
    long RuntimeClassInitialize(IWeakReference *, int, ::Windows::UI::IWindowContextPartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CResourceContext@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUIWeakReference@@PEAVCContext@Runtime@3Microsoft@@_N@Z
    long RuntimeClassInitialize(IWeakReference *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Languages@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    virtual long get_Languages(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QualifierValues@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAU?$IObservableMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z
    virtual long get_QualifierValues(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Languages@CResourceContext@Core@Resources@ApplicationModel@Windows@@UEAAJPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    virtual long put_Languages(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetContextInternal@CResourceContext@Core@Resources@ApplicationModel@Windows@@SAJAEAVWeakRef@WRL@Microsoft@@AEAV?$ComPtr@UIResourceContext@Core@Resources@ApplicationModel@Windows@@@78@PEAPEAVCContext@Runtime@38@@Z
    static long s_GetContextInternal(::Microsoft::WRL::WeakRef &, WindissectOpaque &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetQualifierEvent@CResourceContext@Core@Resources@ApplicationModel@Windows@@SAJAEAVWeakRef@WRL@Microsoft@@AEAV?$ComPtr@UIResourceContext@Core@Resources@ApplicationModel@Windows@@@78@PEAPEAVCQualifierEvent@2345@@Z
    static long s_GetQualifierEvent(::Microsoft::WRL::WeakRef &, WindissectOpaque &, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetResourceContext@CResourceContext@Core@Resources@ApplicationModel@Windows@@CAJAEAVWeakRef@WRL@Microsoft@@AEAV?$ComPtr@UIResourceContext@Core@Resources@ApplicationModel@Windows@@@78@PEAPEAV12345@@Z
    static long s_GetResourceContext(::Microsoft::WRL::WeakRef &, WindissectOpaque &, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceContext@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceContext();
};
} // namespace Windows::ApplicationModel::Resources::Core
