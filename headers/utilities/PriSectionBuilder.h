#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 39 member(s).
namespace Microsoft::Resources::Build {
class PriSectionBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCandidateByReference@PriSectionBuilder@Build@Resources@Microsoft@@QEAAJPEBG0W4ResourceValueType@MrmEnvironment@34@PEAVIBuildInstanceReference@234@H@Z
    long AddCandidateByReference(unsigned short const *, unsigned short const *, int, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCandidateWithString@PriSectionBuilder@Build@Resources@Microsoft@@QEAAJPEBG0W4ResourceValueType@MrmEnvironment@34@0PEAVIQualifierSet@34@@Z
    long AddCandidateWithString(unsigned short const *, unsigned short const *, int, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFileListSectionBuilder@PriSectionBuilder@Build@Resources@Microsoft@@QEAAJPEAVFileListBuilder@234@@Z
    long AddFileListSectionBuilder(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@PriSectionBuilder@Build@Resources@Microsoft@@UEAAJHPEBG@Z
    virtual long AddResourceLink(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@PriSectionBuilder@Build@Resources@Microsoft@@UEAAJHPEBVHierarchicalSchemaSectionBuilder@234@PEBG@Z
    virtual long AddResourceLink(int, WindissectOpaque const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@PriSectionBuilder@Build@Resources@Microsoft@@UEAAJPEBG0@Z
    virtual long AddResourceLink(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@PriSectionBuilder@Build@Resources@Microsoft@@UEAAJPEBGPEBVHierarchicalSchemaSectionBuilder@234@0@Z
    virtual long AddResourceLink(unsigned short const *, WindissectOpaque const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceMapBuilder@PriSectionBuilder@Build@Resources@Microsoft@@QEAAJPEAVResourceMapSectionBuilder@234@_NPEAH@Z
    long AddResourceMapBuilder(WindissectOpaque *, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceMapBuilder@PriSectionBuilder@Build@Resources@Microsoft@@QEAAJPEBVIHierarchicalSchema@34@_NW4PriBuildType@234@PEAH@Z
    long AddResourceMapBuilder(WindissectOpaque const *, bool, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSchemaBuilder@PriSectionBuilder@Build@Resources@Microsoft@@QEAAJPEAVHierarchicalSchemaSectionBuilder@234@_NPEAH@Z
    long AddSchemaBuilder(WindissectOpaque *, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@PriSectionBuilder@0Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long Build(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriSectionBuilder@Build@Resources@Microsoft@@SAJPEAVFileBuilder@234@PEAVCoreProfile@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriSectionBuilder@Build@Resources@Microsoft@@SAJPEAVFileBuilder@234@QEBVIHierarchicalSchema@34@PEAVCoreProfile@34@W4PriBuildType@234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque const * const, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriSectionBuilder@Build@Resources@Microsoft@@SAJPEAVFileBuilder@234@PEBGGPEAVCoreProfile@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, unsigned short const *, unsigned short, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@PriSectionBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@PriSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytes@PriSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddPrimaryResourceMapBuilder@PriSectionBuilder@Build@Resources@Microsoft@@QEAAJPEAPEAVResourceMapSectionBuilder@234@@Z
    long GetOrAddPrimaryResourceMapBuilder(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddResourceLinkBuilder@PriSectionBuilder@Build@Resources@Microsoft@@QEAAJPEAVResourceMapSectionBuilder@234@PEAPEAVResourceLinkSectionBuilder@234@@Z
    long GetOrAddResourceLinkBuilder(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierSetBuilder@PriSectionBuilder@Build@Resources@Microsoft@@QEBAJPEAPEAVDecisionInfoQualifierSetBuilder@234@@Z
    long GetQualifierSetBuilder(WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMapBuilder@PriSectionBuilder@Build@Resources@Microsoft@@QEBAPEAVResourceMapSectionBuilder@234@PEBG@Z
    WindissectOpaque * GetResourceMapBuilder(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceMapBuilder@PriSectionBuilder@Build@Resources@Microsoft@@QEBAPEAVResourceMapSectionBuilder@234@H@Z
    WindissectOpaque * GetResourceMapBuilder(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaBuilder@PriSectionBuilder@Build@Resources@Microsoft@@QEBAPEAVHierarchicalSchemaSectionBuilder@234@PEBG@Z
    WindissectOpaque * GetSchemaBuilder(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionFlags@PriSectionBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetSectionFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionIndex@PriSectionBuilder@Build@Resources@Microsoft@@UEBAFXZ
    virtual short GetSectionIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionQualifier@PriSectionBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetSectionQualifier() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionType@PriSectionBuilder@Build@Resources@Microsoft@@UEBA?AT_DEFFILE_SECTION_TYPEID@@XZ
    virtual _DEFFILE_SECTION_TYPEID GetSectionType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@PriSectionBuilder@Build@Resources@Microsoft@@UEBA_NXZ
    virtual bool IsValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPriFileFlags@PriSectionBuilder@Build@Resources@Microsoft@@QEAAJI@Z
    long SetPriFileFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSectionIndex@PriSectionBuilder@Build@Resources@Microsoft@@UEAAXF@Z
    virtual void SetSectionIndex(short);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PriSectionBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~PriSectionBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPrimarySchemaBuilder@PriSectionBuilder@Build@Resources@Microsoft@@AEAAJGPEBVIHierarchicalSchema@34@@Z
    long AddPrimarySchemaBuilder(unsigned short, WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanAddCandidate@PriSectionBuilder@Build@Resources@Microsoft@@AEBAJPEBG0@Z
    long GetCanAddCandidate(unsigned short const *, unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMapBuilderForAddCandidate@PriSectionBuilder@Build@Resources@Microsoft@@AEAAJPEBGPEAPEAVResourceMapSectionBuilder@234@@Z
    long GetMapBuilderForAddCandidate(unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@PriSectionBuilder@Build@Resources@Microsoft@@AEAAJPEAVCoreProfile@34@@Z
    long Init(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromScratch@PriSectionBuilder@Build@Resources@Microsoft@@AEAAJPEBGGPEAVCoreProfile@34@@Z
    long InitFromScratch(unsigned short const *, unsigned short, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PriSectionBuilder@Build@Resources@Microsoft@@AEAA@PEAVFileBuilder@123@@Z
    PriSectionBuilder(WindissectOpaque *);
};
} // namespace Microsoft::Resources::Build
