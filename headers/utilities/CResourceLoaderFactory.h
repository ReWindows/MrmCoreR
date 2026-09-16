#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 15 member(s).
namespace Windows::ApplicationModel::Resources {
class CResourceLoaderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceLoaderFactory@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceLoaderFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResourceLoaderByName@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIResourceLoader@234@@Z
    virtual long CreateResourceLoaderByName(HSTRING__*, ::Windows::ApplicationModel::Resources::IResourceLoader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultPriPath@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU5@@Z
    virtual long GetDefaultPriPath(HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceLoader@234@@Z
    virtual long GetForCurrentView(::Windows::ApplicationModel::Resources::IResourceLoader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentViewWithName@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIResourceLoader@234@@Z
    virtual long GetForCurrentViewWithName(HSTRING__*, ::Windows::ApplicationModel::Resources::IResourceLoader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUIContext@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@UEAAJPEAUIUIContext@UI@4@PEAPEAUIResourceLoader@234@@Z
    virtual long GetForUIContext(::Windows::UI::IUIContext *, ::Windows::ApplicationModel::Resources::IResourceLoader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForViewIndependentUse@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUIResourceLoader@234@@Z
    virtual long GetForViewIndependentUse(::Windows::ApplicationModel::Resources::IResourceLoader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForViewIndependentUseWithName@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIResourceLoader@234@@Z
    virtual long GetForViewIndependentUseWithName(HSTRING__*, ::Windows::ApplicationModel::Resources::IResourceLoader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringForReference@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAPEAUHSTRING__@@@Z
    virtual long GetStringForReference(WindissectOpaque *, HSTRING__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetForCurrentViewWithName@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@AEAAJPEAUHSTRING__@@PEAUIUIContext@UI@4@PEAPEAUIResourceLoader@234@@Z
    long _GetForCurrentViewWithName(HSTRING__*, ::Windows::UI::IUIContext *, ::Windows::ApplicationModel::Resources::IResourceLoader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStaticObject@CResourceLoaderFactory@Resources@ApplicationModel@Windows@@AEAAJPEAPEAUIResourceLoader@234@@Z
    long _GetStaticObject(::Windows::ApplicationModel::Resources::IResourceLoader * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceLoaderFactory@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceLoaderFactory();
};
} // namespace Windows::ApplicationModel::Resources
