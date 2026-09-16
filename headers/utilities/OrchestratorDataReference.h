#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 11 member(s).
namespace Microsoft::Resources::Build {
class OrchestratorDataReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneDataReference@OrchestratorDataReference@Build@Resources@Microsoft@@SAJPEAV1234@PEAPEAV1234@@Z
    static long CloneDataReference(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@OrchestratorDataReference@Build@Resources@Microsoft@@SAJIPEBX_KPEAVDataItemsSectionBuilder@234@PEAU_PrebuildItemReference@5234@PEAPEAV1234@@Z
    static long CreateInstance(unsigned int, void const *, uint64_t, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateInstance@OrchestratorDataReference@Build@Resources@Microsoft@@UEBAJPEAU_MRMFILE_INDEX_INSTANCE@@@Z
    virtual long GenerateInstance(_MRMFILE_INDEX_INSTANCE *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualValue@OrchestratorDataReference@Build@Resources@Microsoft@@QEBAPEBXXZ
    void const * GetActualValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataBlob@OrchestratorDataReference@Build@Resources@Microsoft@@UEBAJPEAVBlobResult@34@@Z
    virtual long GetDataBlob(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstanceLocatorTypeIndex@OrchestratorDataReference@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetInstanceLocatorTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocatorType@OrchestratorDataReference@Build@Resources@Microsoft@@UEBAEXZ
    virtual unsigned char GetLocatorType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReferenceEqual@OrchestratorDataReference@Build@Resources@Microsoft@@UEBA_NPEBVIBuildInstanceReference@234@@Z
    virtual bool IsReferenceEqual(WindissectOpaque const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OrchestratorDataReference@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~OrchestratorDataReference();
};
} // namespace Microsoft::Resources::Build
