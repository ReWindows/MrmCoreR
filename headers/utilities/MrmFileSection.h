#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace Microsoft::Resources {
class MrmFileSection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionInfoSection@MrmFileSection@Resources@Microsoft@@QEAAJPEBVIFileSectionResolver@23@PEAPEAVDecisionInfoFileSection@23@@Z
    long GetDecisionInfoSection(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironmentMappingSection@MrmFileSection@Resources@Microsoft@@QEAAJPEBVCoreProfile@23@PEBVIEnvironmentCollection@23@PEAPEBVEnvironmentMapping@23@@Z
    long GetEnvironmentMappingSection(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileListSection@MrmFileSection@Resources@Microsoft@@QEAAJPEAPEAVFileFileList@23@@Z
    long GetFileListSection(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceLinkSection@MrmFileSection@Resources@Microsoft@@QEAAJPEBVIFileSectionResolver@23@PEBVISchemaCollection@23@PEAPEBVResourceLinkSection@23@@Z
    long GetResourceLinkSection(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaSection@MrmFileSection@Resources@Microsoft@@QEAAJPEAPEAVHierarchicalSchema@23@@Z
    long GetSchemaSection(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@MrmFileSection@Resources@Microsoft@@QEAAJPEBVBaseFile@23@F@Z
    long Init(WindissectOpaque const *, short);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrmFileSection@Resources@Microsoft@@QEAA@XZ
    MrmFileSection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrmFileSection@Resources@Microsoft@@UEAA@XZ
    virtual ~MrmFileSection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSection@MrmFileSection@Resources@Microsoft@@IEAAXXZ
    void ResetSection();
};
} // namespace Microsoft::Resources
