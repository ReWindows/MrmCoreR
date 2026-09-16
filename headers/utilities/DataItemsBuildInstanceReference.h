#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 9 member(s).
namespace Microsoft::Resources::Build {
class DataItemsBuildInstanceReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DataItemsBuildInstanceReference@Build@Resources@Microsoft@@SAJPEAVDataItemsSectionBuilder@234@PEAU_PrebuildItemReference@5234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateInstance@DataItemsBuildInstanceReference@Build@Resources@Microsoft@@UEBAJPEAU_MRMFILE_INDEX_INSTANCE@@@Z
    virtual long GenerateInstance(_MRMFILE_INDEX_INSTANCE *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataBlob@DataItemsBuildInstanceReference@Build@Resources@Microsoft@@UEBAJPEAVBlobResult@34@@Z
    virtual long GetDataBlob(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstanceLocatorTypeIndex@DataItemsBuildInstanceReference@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetInstanceLocatorTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocatorType@DataItemsBuildInstanceReference@Build@Resources@Microsoft@@UEBAEXZ
    virtual unsigned char GetLocatorType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReferenceEqual@DataItemsBuildInstanceReference@Build@Resources@Microsoft@@UEBA_NPEBVIBuildInstanceReference@234@@Z
    virtual bool IsReferenceEqual(WindissectOpaque const *) const;
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemsBuildInstanceReference@Build@Resources@Microsoft@@AEAA@PEAVDataItemsSectionBuilder@123@PEAU_PrebuildItemReference@4123@@Z
    DataItemsBuildInstanceReference(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
