#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 4 member(s).
namespace Windows::ApplicationModel::Resources {
class Core {
public:
    class AutoRtlWriterLock;
    class CInvokerHandler;
    class CNamedResource;
    class CQualifierEvent;
    class CQualifierEventRegister;
    class CResourceCandidate;
    class CResourceCandidateVectorView;
    class CResourceContext;
    class CResourceContextFactory;
    class CResourceContextLanguagesVectorView;
    class CResourceManager;
    class CResourceManagerFactory;
    class CResourceManagerPropertyBag;
    class CResourceMap;
    class CResourceMapMapView;
    class CResourceQualifier;
    class CResourceQualifierObservableMap;
    class CResourceQualifierVectorView;
    class IContextManager;
    class NamedResourceLookupTable;
    class PerAppContextManager;
    class PerViewContextManager;
    class ResourceSubtreeLookupTable;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LanguageChangeNotifyThreadProc@Core@Resources@ApplicationModel@Windows@@YAKPEAX@Z
    unsigned long LanguageChangeNotifyThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WnfRegionChangeCallback@Core@Resources@ApplicationModel@Windows@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    long WnfRegionChangeCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WnfUiLanguageChangeCallback@Core@Resources@ApplicationModel@Windows@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    long WnfUiLanguageChangeCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetApplicationLanguageHandle@Core@Resources@ApplicationModel@Windows@@YAJPEAPEAUHKEY__@@@Z
    long _GetApplicationLanguageHandle(HKEY__* *);
};
} // namespace Windows::ApplicationModel::Resources
