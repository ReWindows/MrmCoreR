#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Microsoft::Resources {
class EnvironmentReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsIdentical@EnvironmentReference@Resources@Microsoft@@SA_NPEBGPEBVIEnvironmentVersionInfo@23@01@Z
    static bool CheckIsIdentical(unsigned short const *, WindissectOpaque const *, unsigned short const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EnvironmentReference@Resources@Microsoft@@SAJPEBU_MRMFILE_ENVIRONMENT_REF@@PEAPEAV123@@Z
    static long CreateInstance(_MRMFILE_ENVIRONMENT_REF const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMajorVersion@EnvironmentReference@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMajorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinorVersion@EnvironmentReference@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMinorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumConditionOperators@EnvironmentReference@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumConditionOperators() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItemTypes@EnvironmentReference@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumItemTypes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifierTypes@EnvironmentReference@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifierTypes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifiers@EnvironmentReference@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumResourceValueLocators@EnvironmentReference@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumResourceValueLocators() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumResourceValueTypes@EnvironmentReference@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumResourceValueTypes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionChecksum@EnvironmentReference@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetVersionChecksum() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionInfo@EnvironmentReference@Resources@Microsoft@@UEBAXPEAU_MRMFILE_ENVIRONMENT_VERSION_INFO@@@Z
    virtual void GetVersionInfo(_MRMFILE_ENVIRONMENT_VERSION_INFO *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnvironmentReference@Resources@Microsoft@@IEAA@XZ
    EnvironmentReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@EnvironmentReference@Resources@Microsoft@@IEAAJPEBVIEnvironment@23@@Z
    long Init(WindissectOpaque const *);
};
} // namespace Microsoft::Resources
