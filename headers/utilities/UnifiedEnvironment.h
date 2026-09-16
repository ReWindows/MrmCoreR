#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 18 member(s).
namespace Microsoft::Resources {
class UnifiedEnvironment {
public:
    class CompatibleEnvironmentInfo;
    class PerQualifierPoolInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCompatibleEnvironment@UnifiedEnvironment@Resources@Microsoft@@QEAAJPEBGPEBVEnvironmentVersionInfo@23@HPEBQEBG0PEAPEBVRemapAtomPool@23@@Z
    long AddCompatibleEnvironment(unsigned short const *, WindissectOpaque const *, int, unsigned short const * const *, unsigned short const *, WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@UnifiedEnvironment@Resources@Microsoft@@SAJPEAVCoreProfile@23@PEAVAtomPoolGroup@23@PEAPEAV123@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnvironmentIsCompatible@UnifiedEnvironment@Resources@Microsoft@@QEBA_NPEBGPEBVEnvironmentVersionInfo@23@PEAPEBVRemapAtomPool@23@@Z
    bool EnvironmentIsCompatible(unsigned short const *, WindissectOpaque const *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllAtoms@UnifiedEnvironment@Resources@Microsoft@@QEBAJW4EnvironmentNamesType@123@PEAPEAV?$DynamicArray@UAtom@Resources@Microsoft@@@23@@Z
    long GetAllAtoms(int, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtom@UnifiedEnvironment@Resources@Microsoft@@QEBAJW4EnvironmentNamesType@123@PEBGPEAUAtom@23@@Z
    long GetAtom(int, unsigned short const *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultEnvironment@UnifiedEnvironment@Resources@Microsoft@@UEBAPEBVIEnvironment@23@XZ
    virtual WindissectOpaque const * GetDefaultEnvironment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironment@UnifiedEnvironment@Resources@Microsoft@@UEBAJHPEAPEBVIEnvironment@23@@Z
    virtual long GetEnvironment(int, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@UnifiedEnvironment@Resources@Microsoft@@QEBAJW4EnvironmentNamesType@123@UAtom@23@PEAVStringResult@23@@Z
    long GetName(int, WindissectOpaque, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumEnvironments@UnifiedEnvironment@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumEnvironments() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierNameAtom@UnifiedEnvironment@Resources@Microsoft@@QEBAJPEBGPEAUAtom@23@PEAPEBVIEnvironment@23@@Z
    long GetQualifierNameAtom(unsigned short const *, WindissectOpaque *, WindissectOpaque const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceQualifier@UnifiedEnvironment@Resources@Microsoft@@QEBAJPEBGPEAUResourceQualifier@23@@Z
    long GetResourceQualifier(unsigned short const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOrMakeCompatibleQualifierValue@UnifiedEnvironment@Resources@Microsoft@@QEBAJPEBG0PEAVStringResult@23@@Z
    long ValidateOrMakeCompatibleQualifierValue(unsigned short const *, unsigned short const *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQualifierValue@UnifiedEnvironment@Resources@Microsoft@@QEBAJPEBG0@Z
    long ValidateQualifierValue(unsigned short const *, unsigned short const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnifiedEnvironment@Resources@Microsoft@@UEAA@XZ
    virtual ~UnifiedEnvironment();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@UnifiedEnvironment@Resources@Microsoft@@IEAAJPEAVCoreProfile@23@PEAVAtomPoolGroup@23@@Z
    long Init(WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnifiedEnvironment@Resources@Microsoft@@IEAA@XZ
    UnifiedEnvironment();
};
} // namespace Microsoft::Resources
