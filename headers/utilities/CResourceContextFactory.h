#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 15 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceContextFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceContextFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatchingContext@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAU?$IIterable@PEAVResourceQualifier@Core@Resources@ApplicationModel@Windows@@@Collections@Foundation@5@PEAPEAUIResourceContext@2345@@Z
    virtual long CreateMatchingContext(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceContext@2345@@Z
    virtual long GetForCurrentView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUIContext@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUIUIContext@UI@5@PEAPEAUIResourceContext@2345@@Z
    virtual long GetForUIContext(::Windows::UI::IUIContext *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForViewIndependentUse@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceContext@2345@@Z
    virtual long GetForViewIndependentUse(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetGlobalQualifierValues@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@UEAAJXZ
    virtual long ResetGlobalQualifierValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetGlobalQualifierValuesForSpecifiedQualifiers@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    virtual long ResetGlobalQualifierValuesForSpecifiedQualifiers(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalQualifierValue@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0@Z
    virtual long SetGlobalQualifierValue(HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalQualifierValueWithPersistence@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0W4ResourceQualifierPersistence@2345@@Z
    virtual long SetGlobalQualifierValueWithPersistence(HSTRING__*, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetSingletonResourceManager@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@SAJPEAPEAVCResourceManager@2345@@Z
    static long s_GetSingletonResourceManager(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextManager@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@AEAAJPEAPEAVIContextManager@2345@@Z
    long _GetContextManager(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetForCurrentView@CResourceContextFactory@Core@Resources@ApplicationModel@Windows@@AEAAJPEAUIWindowContextPartner@UI@5@PEAPEAUIResourceContext@2345@@Z
    long _GetForCurrentView(::Windows::UI::IWindowContextPartner *, WindissectOpaque * *);
};
} // namespace Windows::ApplicationModel::Resources::Core
