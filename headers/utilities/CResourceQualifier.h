#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 22 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CResourceQualifier {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceQualifier@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    CResourceQualifier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@0EEN@Z
    long RuntimeClassInitialize(HSTRING__*, HSTRING__*, unsigned char, unsigned char, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDefault@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsDefault(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMatch@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsMatch(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QualifierName@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QualifierName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QualifierValue@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QualifierValue(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Score@CResourceQualifier@Core@Resources@ApplicationModel@Windows@@UEAAJPEAN@Z
    virtual long get_Score(double *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceQualifier@Core@Resources@ApplicationModel@Windows@@EEAA@XZ
    virtual ~CResourceQualifier();
};
} // namespace Windows::ApplicationModel::Resources::Core
