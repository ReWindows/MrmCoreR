#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 23 member(s).
namespace Microsoft::Resources {
class StandalonePriFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StandalonePriFile@Resources@Microsoft@@SAJIPEBGPEAVCoreProfile@23@PEAPEAV123@@Z
    static long CreateInstance(unsigned int, unsigned short const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StandalonePriFile@Resources@Microsoft@@SAJIPEBE_KPEAVCoreProfile@23@PEAPEAV123@@Z
    static long CreateInstance(unsigned int, unsigned char const *, uint64_t, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtoms@StandalonePriFile@Resources@Microsoft@@UEBAPEAVAtomPoolGroup@23@XZ
    virtual WindissectOpaque * GetAtoms() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultDecisionInfo@StandalonePriFile@Resources@Microsoft@@UEBAPEAVUnifiedDecisionInfo@23@XZ
    virtual WindissectOpaque * GetDefaultDecisionInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDeploymentMergeable@StandalonePriFile@Resources@Microsoft@@UEBA_NXZ
    virtual bool GetIsDeploymentMergeable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimarySchema@StandalonePriFile@Resources@Microsoft@@UEBAJPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetPrimarySchema(WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfile@StandalonePriFile@Resources@Microsoft@@UEBAPEAVCoreProfile@23@XZ
    virtual WindissectOpaque * GetProfile() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@StandalonePriFile@Resources@Microsoft@@UEBAJHPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetSchema(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaById@StandalonePriFile@Resources@Microsoft@@UEBAJPEBGPEAPEBVIHierarchicalSchema@23@@Z
    virtual long GetSchemaById(unsigned short const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetOsVersion@StandalonePriFile@Resources@Microsoft@@UEBAJPEAVStringResult@23@0@Z
    virtual long GetTargetOsVersion(WindissectOpaque *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedEnvironment@StandalonePriFile@Resources@Microsoft@@UEBAPEAVUnifiedEnvironment@23@XZ
    virtual WindissectOpaque * GetUnifiedEnvironment() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StandalonePriFile@Resources@Microsoft@@UEAA@XZ
    virtual ~StandalonePriFile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@StandalonePriFile@Resources@Microsoft@@IEAAJPEAVCoreProfile@23@PEBVISchemaCollection@23@IPEBG@Z
    long Init(WindissectOpaque *, WindissectOpaque const *, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@StandalonePriFile@Resources@Microsoft@@IEAAJPEAVCoreProfile@23@PEBVISchemaCollection@23@IPEBE_K@Z
    long Init(WindissectOpaque *, WindissectOpaque const *, unsigned int, unsigned char const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitEnvironmentAndDecisions@StandalonePriFile@Resources@Microsoft@@IEAAJXZ
    long InitEnvironmentAndDecisions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitStandalonePriFile@StandalonePriFile@Resources@Microsoft@@IEAAJPEBVISchemaCollection@23@@Z
    long InitStandalonePriFile(WindissectOpaque const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StandalonePriFile@Resources@Microsoft@@IEAA@XZ
    StandalonePriFile();
};
} // namespace Microsoft::Resources
