#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 24 member(s).
namespace Microsoft::Resources {
class ResourceMapFileData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ResourceMapFileData@Resources@Microsoft@@SAJAEBT_DEFFILE_SECTION_TYPEID@@PEBVIFileSectionResolver@23@PEBVISchemaCollection@23@PEBEIPEAPEAV123@@Z
    static long CreateInstance(_DEFFILE_SECTION_TYPEID const &, WindissectOpaque const *, WindissectOpaque const *, unsigned char const *, unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecision@ResourceMapFileData@Resources@Microsoft@@UEBAJHPEAVDecisionResult@23@@Z
    virtual long GetDecision(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecisionInfo@ResourceMapFileData@Resources@Microsoft@@UEBAPEBVIDecisionInfo@23@XZ
    virtual WindissectOpaque const * GetDecisionInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@ResourceMapFileData@Resources@Microsoft@@UEBAJHPEAVStringResult@23@@Z
    virtual long GetFilePath(int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalData@ResourceMapFileData@Resources@Microsoft@@UEBAJIIPEAVBlobResult@23@@Z
    virtual long GetInternalData(unsigned int, unsigned int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalDataAsString@ResourceMapFileData@Resources@Microsoft@@UEBAJIIW4ResourceValueType@MrmEnvironment@23@PEAVStringResult@23@@Z
    virtual long GetInternalDataAsString(unsigned int, unsigned int, int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumFiles@ResourceMapFileData@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumFiles() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItems@ResourceMapFileData@Resources@Microsoft@@QEBAHXZ
    int GetNumItems() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootPath@ResourceMapFileData@Resources@Microsoft@@UEBAPEBGXZ
    virtual unsigned short const * GetPackageRootPath() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawResourceInfo@ResourceMapFileData@Resources@Microsoft@@UEBAJHPEAH0@Z
    virtual long GetRawResourceInfo(int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawValueInfo@ResourceMapFileData@Resources@Microsoft@@UEBAJHPEAEPEAIPEAG2PEAW4ResourceValueType@MrmEnvironment@23@@Z
    virtual long GetRawValueInfo(int, unsigned char *, unsigned int *, unsigned short *, unsigned short *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceDataAsBlob@ResourceMapFileData@Resources@Microsoft@@UEBAJIGGPEAVBlobResult@23@@Z
    virtual long GetReferenceDataAsBlob(unsigned int, unsigned short, unsigned short, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceDataAsString@ResourceMapFileData@Resources@Microsoft@@UEBAJIGGW4ResourceValueType@MrmEnvironment@23@PEAVStringResult@23@@Z
    virtual long GetReferenceDataAsString(unsigned int, unsigned short, unsigned short, int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchema@ResourceMapFileData@Resources@Microsoft@@UEBAPEBVIHierarchicalSchema@23@XZ
    virtual WindissectOpaque const * GetSchema() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalNumResourceValues@ResourceMapFileData@Resources@Microsoft@@UEBAHXZ
    virtual int GetTotalNumResourceValues() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidResourceValueIndex@ResourceMapFileData@Resources@Microsoft@@UEBA_NH@Z
    virtual bool IsValidResourceValueIndex(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageRootPath@ResourceMapFileData@Resources@Microsoft@@UEBAJPEBG@Z
    virtual long SetPackageRootPath(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetResourceLinkForResourceIndex@ResourceMapFileData@Resources@Microsoft@@UEBA_NIPEAPEBVIHierarchicalSchema@23@PEAI@Z
    virtual bool TryGetResourceLinkForResourceIndex(unsigned int, WindissectOpaque const * *, unsigned int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceMapFileData@Resources@Microsoft@@UEAA@XZ
    virtual ~ResourceMapFileData();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ResourceMapFileData@Resources@Microsoft@@IEAAJAEBT_DEFFILE_SECTION_TYPEID@@PEBVISchemaCollection@23@PEBEI@Z
    long Init(_DEFFILE_SECTION_TYPEID const &, WindissectOpaque const *, unsigned char const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceMapFileData@Resources@Microsoft@@IEAA@PEBVIFileSectionResolver@12@@Z
    ResourceMapFileData(WindissectOpaque const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataAsString@ResourceMapFileData@Resources@Microsoft@@AEBAJPEAVBlobResult@23@W4ResourceValueType@MrmEnvironment@23@HPEAVStringResult@23@@Z
    long GetDataAsString(WindissectOpaque *, int, int, WindissectOpaque *) const;
};
} // namespace Microsoft::Resources
