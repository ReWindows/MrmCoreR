#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Microsoft::Resources {
class EnvironmentVersionInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEmpty@EnvironmentVersionInfo@Resources@Microsoft@@SAJPEAPEAV123@@Z
    static long CreateEmpty(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EnvironmentVersionInfo@Resources@Microsoft@@SAJPEBV123@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EnvironmentVersionInfo@Resources@Microsoft@@SAJPEBU_MRMFILE_ENVIRONMENT_VERSION_INFO@@PEAPEAV123@@Z
    static long CreateInstance(_MRMFILE_ENVIRONMENT_VERSION_INFO const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMajorVersion@EnvironmentVersionInfo@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMajorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinorVersion@EnvironmentVersionInfo@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMinorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumConditionOperators@EnvironmentVersionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumConditionOperators() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItemTypes@EnvironmentVersionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumItemTypes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifierTypes@EnvironmentVersionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifierTypes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumQualifiers@EnvironmentVersionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumQualifiers() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumResourceValueLocators@EnvironmentVersionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumResourceValueLocators() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumResourceValueTypes@EnvironmentVersionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumResourceValueTypes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionChecksum@EnvironmentVersionInfo@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetVersionChecksum() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionInfo@EnvironmentVersionInfo@Resources@Microsoft@@UEBAXPEAU_MRMFILE_ENVIRONMENT_VERSION_INFO@@@Z
    virtual void GetVersionInfo(_MRMFILE_ENVIRONMENT_VERSION_INFO *) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnvironmentVersionInfo@Resources@Microsoft@@IEAA@PEBU_MRMFILE_ENVIRONMENT_VERSION_INFO@@@Z
    EnvironmentVersionInfo(_MRMFILE_ENVIRONMENT_VERSION_INFO const *);
};
} // namespace Microsoft::Resources
