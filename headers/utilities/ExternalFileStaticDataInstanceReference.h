#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 9 member(s).
namespace Microsoft::Resources::Build {
class ExternalFileStaticDataInstanceReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateInstance@ExternalFileStaticDataInstanceReference@Build@Resources@Microsoft@@UEBAJPEAU_MRMFILE_INDEX_INSTANCE@@@Z
    virtual long GenerateInstance(_MRMFILE_INDEX_INSTANCE *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataBlob@ExternalFileStaticDataInstanceReference@Build@Resources@Microsoft@@UEBAJPEAVBlobResult@34@@Z
    virtual long GetDataBlob(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstanceLocatorTypeIndex@ExternalFileStaticDataInstanceReference@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetInstanceLocatorTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocatorType@ExternalFileStaticDataInstanceReference@Build@Resources@Microsoft@@UEBAEXZ
    virtual unsigned char GetLocatorType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReferenceEqual@ExternalFileStaticDataInstanceReference@Build@Resources@Microsoft@@UEBA_NPEBVIBuildInstanceReference@234@@Z
    virtual bool IsReferenceEqual(WindissectOpaque const *) const;
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExternalFileStaticDataInstanceReference@Build@Resources@Microsoft@@AEAA@PEAVResourceCandidateResult@23@PEBVFileInfo@123@@Z
    ExternalFileStaticDataInstanceReference(WindissectOpaque *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ExternalFileStaticDataInstanceReference@Build@Resources@Microsoft@@AEAAJXZ
    long Init();
};
} // namespace Microsoft::Resources::Build
