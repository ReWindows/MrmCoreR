#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 27 member(s).
namespace Microsoft::Resources::Build {
class ResourceMapSectionBuilder {
public:
    class MapBuilderFileData;
    class MapBuilderItemData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCandidate@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAAJHW4ResourceValueType@MrmEnvironment@34@PEAVIBuildInstanceReference@234@H@Z
    long AddCandidate(int, int, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCandidate@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAAJPEBGW4ResourceValueType@MrmEnvironment@34@PEAVIBuildInstanceReference@234@H@Z
    long AddCandidate(unsigned short const *, int, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCandidateWithInternalString@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAAJPEBGW4ResourceValueType@MrmEnvironment@34@0H@Z
    long AddCandidateWithInternalString(unsigned short const *, int, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCandidateWithInternalString@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAAJPEBGW4ResourceValueType@MrmEnvironment@34@0PEAVIQualifierSet@34@@Z
    long AddCandidateWithInternalString(unsigned short const *, int, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEAAJHPEBG@Z
    virtual long AddResourceLink(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEAAJHPEBVHierarchicalSchemaSectionBuilder@234@PEBG@Z
    virtual long AddResourceLink(int, WindissectOpaque const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEAAJPEBG0@Z
    virtual long AddResourceLink(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEAAJPEBGPEBVHierarchicalSchemaSectionBuilder@234@0@Z
    virtual long AddResourceLink(unsigned short const *, WindissectOpaque const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@ResourceMapSectionBuilder@0Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long Build(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ResourceMapSectionBuilder@Build@Resources@Microsoft@@SAJPEAVPriSectionBuilder@234@PEAVHierarchicalSchemaSectionBuilder@234@PEAVDecisionInfoSectionBuilder@234@PEBVUnifiedEnvironment@34@W4PriBuildType@234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytes@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEBAPEAVHierarchicalSchemaSectionBuilder@234@XZ
    virtual WindissectOpaque * GetSchema() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSectionIndex@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEAAXF@Z
    virtual void SetSectionIndex(short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~ResourceMapSectionBuilder();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddResourceValueTypeIndex@ResourceMapSectionBuilder@Build@Resources@Microsoft@@IEAAJW4ResourceValueType@MrmEnvironment@34@PEAH@Z
    long GetOrAddResourceValueTypeIndex(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ResourceMapSectionBuilder@Build@Resources@Microsoft@@IEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitLinks@ResourceMapSectionBuilder@Build@Resources@Microsoft@@IEAAJXZ
    long InitLinks();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceMapSectionBuilder@Build@Resources@Microsoft@@IEAA@PEAVPriSectionBuilder@123@PEAVHierarchicalSchemaSectionBuilder@123@PEAVDecisionInfoSectionBuilder@123@PEBVUnifiedEnvironment@23@W4PriBuildType@123@@Z
    ResourceMapSectionBuilder(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, int);
};
} // namespace Microsoft::Resources::Build
