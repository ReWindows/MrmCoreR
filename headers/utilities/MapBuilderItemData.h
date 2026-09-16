#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 12 member(s).
namespace Microsoft::Resources::Build::ResourceMapSectionBuilder {
class MapBuilderItemData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInternalStringValue@MapBuilderItemData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAAJHHPEBGH@Z
    long AddInternalStringValue(int, int, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceLink@MapBuilderItemData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAAJH@Z
    long AddResourceLink(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CandidateValueMatches@MapBuilderItemData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEBA_NPEBU_BUILDER_CANDIDATE@345@PEBGH@Z
    bool CandidateValueMatches(WindissectOpaque const *, unsigned short const *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MapBuilderItemData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@SAJPEAV2345@W4PriBuildType@345@PEAPEAV12345@@Z
    static long CreateInstance(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeDecisionIndexes@MapBuilderItemData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAAJXZ
    long FinalizeDecisionIndexes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDataLocator@MapBuilderItemData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAAJPEAVDataBlobBuilder@345@PEBGHPEAU_MRMFILE_MAP_VALUE_LARGE@@@Z
    long InitDataLocator(WindissectOpaque *, unsigned short const *, int, _MRMFILE_MAP_VALUE_LARGE *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MapBuilderItemData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~MapBuilderItemData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extend@MapBuilderItemData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@AEAAJH@Z
    long Extend(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddResource@MapBuilderItemData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@AEAAJHPEAPEAVBuilderItemInfo@345@@Z
    long GetOrAddResource(int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MapBuilderItemData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@AEAA@PEAV1234@W4PriBuildType@234@@Z
    MapBuilderItemData(WindissectOpaque *, int);
};
} // namespace Microsoft::Resources::Build::ResourceMapSectionBuilder
