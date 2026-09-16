#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 28 member(s).
namespace Microsoft::Resources {
class PriFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriFile@Resources@Microsoft@@SAJPEBVIMrmFile@23@PEAVIUnifiedResourceView@23@PEAPEBV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriFile@Resources@Microsoft@@SAJPEBVIMrmFile@23@PEAPEBV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSchema@PriFile@Resources@Microsoft@@UEBAJPEBVHierarchicalSchemaReference@23@PEAPEBVIHierarchicalSchema@23@@Z
    virtual long FindSchema(WindissectOpaque const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtoms@PriFile@Resources@Microsoft@@UEBAPEAVAtomPoolGroup@23@XZ
    virtual WindissectOpaque * GetAtoms() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseFile@PriFile@Resources@Microsoft@@QEBAJPEAPEBVBaseFile@23@@Z
    long GetBaseFile(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionInfo@PriFile@Resources@Microsoft@@QEBAJHPEAPEBVDecisionInfoFileSection@23@@Z
    long GetDecisionInfo(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultDecisionInfo@PriFile@Resources@Microsoft@@UEBAPEAVUnifiedDecisionInfo@23@XZ
    virtual WindissectOpaque * GetDefaultDecisionInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileDefaultEnvironment@PriFile@Resources@Microsoft@@UEBAJPEAVStringResult@23@PEAVEnvironmentVersionInfo@23@@Z
    virtual long GetFileDefaultEnvironment(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDeploymentMergeable@PriFile@Resources@Microsoft@@UEBA_NXZ
    virtual bool GetIsDeploymentMergeable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumResourceMaps@PriFile@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumResourceMaps() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumSchemas@PriFile@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumSchemas() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryResourceMap@PriFile@Resources@Microsoft@@UEBAJPEAPEBVIResourceMapBase@23@@Z
    virtual long GetPrimaryResourceMap(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimarySchema@PriFile@Resources@Microsoft@@UEBAJPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetPrimarySchema(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfile@PriFile@Resources@Microsoft@@UEBAPEAVCoreProfile@23@XZ
    virtual WindissectOpaque * GetProfile() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMap@PriFile@Resources@Microsoft@@UEBAJHPEAPEBVIResourceMapBase@23@@Z
    virtual long GetResourceMap(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMapById@PriFile@Resources@Microsoft@@UEBAJPEBGPEAPEBVIResourceMapBase@23@@Z
    virtual long GetResourceMapById(unsigned short const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@PriFile@Resources@Microsoft@@UEBAJHPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetSchema(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaById@PriFile@Resources@Microsoft@@UEBAJPEBGPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetSchemaById(unsigned short const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetOsVersion@PriFile@Resources@Microsoft@@UEBAJPEAVStringResult@23@0@Z
    virtual long GetTargetOsVersion(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedEnvironment@PriFile@Resources@Microsoft@@UEBAPEAVUnifiedEnvironment@23@XZ
    virtual WindissectOpaque * GetUnifiedEnvironment() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindResourceMap@PriFile@Resources@Microsoft@@UEBA_NPEBVHierarchicalSchemaReference@23@PEAPEBVIResourceMapBase@23@@Z
    virtual bool TryFindResourceMap(WindissectOpaque const *, WindissectOpaque const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetReverseFileMap@PriFile@Resources@Microsoft@@UEBA_NPEAPEBVReverseFileMap@23@@Z
    virtual bool TryGetReverseFileMap(WindissectOpaque const * *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PriFile@Resources@Microsoft@@UEAA@XZ
    virtual ~PriFile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPriFile@PriFile@Resources@Microsoft@@IEAAJPEBVIMrmFile@23@PEAVIUnifiedResourceView@23@PEBVISchemaCollection@23@@Z
    long InitPriFile(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PriFile@Resources@Microsoft@@IEAA@XZ
    PriFile();
};
} // namespace Microsoft::Resources
