#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 32 member(s).
namespace Microsoft::Resources {
class MrmEnvironment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToBestValueType@MrmEnvironment@Resources@Microsoft@@SA?AW4ResourceValueType@123@W44123@I@Z
    static int ConvertToBestValueType(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MrmEnvironment@Resources@Microsoft@@SAJPEAVAtomPoolGroup@23@PEBU_ENVIRONMENT_INITIALIZER@@HHPEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, _ENVIRONMENT_INITIALIZER const *, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindInfoForCurrentVersion@MrmEnvironment@Resources@Microsoft@@SAJPEBU_ENVIRONMENT_DESCRIPTION@@PEAPEBU_MRMFILE_ENVIRONMENT_VERSION_INFO@@PEAVStringResult@23@2@Z
    static long FindInfoForCurrentVersion(_ENVIRONMENT_DESCRIPTION const *, _MRMFILE_ENVIRONMENT_VERSION_INFO const * *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindInfoForVersion@MrmEnvironment@Resources@Microsoft@@SAJPEBU_ENVIRONMENT_DESCRIPTION@@HHPEAPEBU_MRMFILE_ENVIRONMENT_VERSION_INFO@@PEAVStringResult@23@2@Z
    static long FindInfoForVersion(_ENVIRONMENT_DESCRIPTION const *, int, int, _MRMFILE_ENVIRONMENT_VERSION_INFO const * *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindInfoForVersion@MrmEnvironment@Resources@Microsoft@@SAJPEBU_ENVIRONMENT_DESCRIPTION@@HPEAPEBU_MRMFILE_ENVIRONMENT_VERSION_INFO@@PEAVStringResult@23@2@Z
    static long FindInfoForVersion(_ENVIRONMENT_DESCRIPTION const *, int, _MRMFILE_ENVIRONMENT_VERSION_INFO const * *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtoms@MrmEnvironment@Resources@Microsoft@@UEBAPEAVAtomPoolGroup@23@XZ
    virtual WindissectOpaque * GetAtoms() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionOperatorNames@MrmEnvironment@Resources@Microsoft@@UEBAPEBVIAtomPool@23@XZ
    virtual WindissectOpaque const * GetConditionOperatorNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@MrmEnvironment@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetDisplayName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironmentDescription@MrmEnvironment@Resources@Microsoft@@UEBAPEBU_ENVIRONMENT_DESCRIPTION@@XZ
    virtual _ENVIRONMENT_DESCRIPTION const * GetEnvironmentDescription() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemTypeNames@MrmEnvironment@Resources@Microsoft@@UEBAPEBVIAtomPool@23@XZ
    virtual WindissectOpaque const * GetItemTypeNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@MrmEnvironment@Resources@Microsoft@@UEBAJPEBGPEAUResourceQualifier@23@@Z
    virtual long GetQualifier(unsigned short const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@MrmEnvironment@Resources@Microsoft@@UEBAJUAtom@23@PEAUResourceQualifier@23@@Z
    virtual long GetQualifier(WindissectOpaque, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@MrmEnvironment@Resources@Microsoft@@UEBAJHPEAUResourceQualifier@23@@Z
    virtual long GetQualifier(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierInfo@MrmEnvironment@Resources@Microsoft@@UEBAJHPEAPEBU_QUALIFIER_INFO@@@Z
    virtual long GetQualifierInfo(int, _QUALIFIER_INFO const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierInfo@MrmEnvironment@Resources@Microsoft@@UEBAPEBU_QUALIFIER_INFO@@XZ
    virtual _QUALIFIER_INFO const * GetQualifierInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierNames@MrmEnvironment@Resources@Microsoft@@UEBAPEBVIAtomPool@23@XZ
    virtual WindissectOpaque const * GetQualifierNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierTypeNames@MrmEnvironment@Resources@Microsoft@@UEBAPEBVIAtomPool@23@XZ
    virtual WindissectOpaque const * GetQualifierTypeNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceValueLocatorNames@MrmEnvironment@Resources@Microsoft@@UEBAPEBVIAtomPool@23@XZ
    virtual WindissectOpaque const * GetResourceValueLocatorNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceValueTypeNames@MrmEnvironment@Resources@Microsoft@@UEBAPEBVIAtomPool@23@XZ
    virtual WindissectOpaque const * GetResourceValueTypeNames() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueName@MrmEnvironment@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetUniqueName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionInfo@MrmEnvironment@Resources@Microsoft@@UEBAPEBVIEnvironmentVersionInfo@23@XZ
    virtual WindissectOpaque const * GetVersionInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPathResourceValueType@MrmEnvironment@Resources@Microsoft@@SA_NW4ResourceValueType@123@@Z
    static bool IsPathResourceValueType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStringResourceValueType@MrmEnvironment@Resources@Microsoft@@SA_NW4ResourceValueType@123@@Z
    static bool IsStringResourceValueType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapResourceValueTypeToEncoding@MrmEnvironment@Resources@Microsoft@@SAIW4ResourceValueType@123@@Z
    static unsigned int MapResourceValueTypeToEncoding(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceValueTypesAreCompatible@MrmEnvironment@Resources@Microsoft@@SA_NW4ResourceValueType@123@0@Z
    static bool ResourceValueTypesAreCompatible(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrmEnvironment@Resources@Microsoft@@UEAA@XZ
    virtual ~MrmEnvironment();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseVersion@MrmEnvironment@Resources@Microsoft@@KAJPEBU_ENVIRONMENT_DESCRIPTION@@HHPEAPEBU_MRMFILE_ENVIRONMENT_VERSION_INFO@@@Z
    static long ChooseVersion(_ENVIRONMENT_DESCRIPTION const *, int, int, _MRMFILE_ENVIRONMENT_VERSION_INFO const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNames@MrmEnvironment@Resources@Microsoft@@KAJPEBU_MRMFILE_ENVIRONMENT_VERSION_INFO@@PEBU_QUALIFIER_INFO@@W4EnvironmentNames@123@PEAVAtomPoolGroup@23@PEAPEAVIAtomPool@23@@Z
    static long CreateNames(_MRMFILE_ENVIRONMENT_VERSION_INFO const *, _QUALIFIER_INFO const *, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateQualifiers@MrmEnvironment@Resources@Microsoft@@KAJPEBU_MRMFILE_ENVIRONMENT_VERSION_INFO@@PEBU_QUALIFIER_INFO@@PEBVIAtomPool@23@2PEAPEAUResourceQualifier@23@PEAH@Z
    static long CreateQualifiers(_MRMFILE_ENVIRONMENT_VERSION_INFO const *, _QUALIFIER_INFO const *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@MrmEnvironment@Resources@Microsoft@@IEAAJPEAVAtomPoolGroup@23@PEBU_ENVIRONMENT_INITIALIZER@@HH@Z
    long Init(WindissectOpaque *, _ENVIRONMENT_INITIALIZER const *, int, int);
};
} // namespace Microsoft::Resources
