#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Microsoft::Resources::Build {
class EnvironmentMappingSectionBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@EnvironmentMappingSectionBuilder@0Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long Build(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@SAJPEBVIEnvironment@34@0PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytes@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSectionIndex@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@UEAAXF@Z
    virtual void SetSectionIndex(short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~EnvironmentMappingSectionBuilder();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@AEAA@XZ
    EnvironmentMappingSectionBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@EnvironmentMappingSectionBuilder@Build@Resources@Microsoft@@AEAAJPEBVIEnvironment@34@0@Z
    long Init(WindissectOpaque const *, WindissectOpaque const *);
};
} // namespace Microsoft::Resources::Build
