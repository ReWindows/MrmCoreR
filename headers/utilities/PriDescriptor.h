#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace Microsoft::Resources {
class PriDescriptor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriDescriptor@Resources@Microsoft@@SAJQEBVIFileSectionResolver@23@QEBVISchemaCollection@23@QEBVIFileSection@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const * const, WindissectOpaque const * const, WindissectOpaque const * const, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionInfo@PriDescriptor@Resources@Microsoft@@QEBAJHPEAPEBVDecisionInfoFileSection@23@@Z
    long GetDecisionInfo(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMap@PriDescriptor@Resources@Microsoft@@QEBAJHPEAPEBVResourceMapBase@23@@Z
    long GetResourceMap(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@PriDescriptor@Resources@Microsoft@@QEBAJH_NPEAPEBVIHierarchicalSchema@23@@Z
    long GetSchema(int, bool, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetOsVersion@PriDescriptor@Resources@Microsoft@@QEBAJPEAVCoreProfile@23@PEAVStringResult@23@1@Z
    long GetTargetOsVersion(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PriDescriptor@Resources@Microsoft@@QEAA@XZ
    PriDescriptor();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@PriDescriptor@Resources@Microsoft@@IEAAJPEBVIFileSectionResolver@23@QEBVISchemaCollection@23@QEBVIFileSection@23@QEBXH@Z
    long Init(WindissectOpaque const *, WindissectOpaque const * const, WindissectOpaque const * const, void const * const, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSectionIndex@PriDescriptor@Resources@Microsoft@@AEBAJPEBFH@Z
    long ValidateSectionIndex(short const *, int) const;
};
} // namespace Microsoft::Resources
