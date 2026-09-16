#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 3 member(s).
namespace Microsoft::Resources::Build::ResourceMapSectionBuilder {
class MapBuilderFileData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@MapBuilderFileData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAAJPEAXIPEBU_MRMFILE_RESOURCE_MAP_HEADER@@PEBU_MRMFILE_RESOURCE_MAP_HEADER_LARGE@@@Z
    long Init(void *, unsigned int, _MRMFILE_RESOURCE_MAP_HEADER const *, _MRMFILE_RESOURCE_MAP_HEADER_LARGE const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MapBuilderFileData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAA@XZ
    MapBuilderFileData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteItem@MapBuilderFileData@ResourceMapSectionBuilder@Build@Resources@Microsoft@@QEAAXIII@Z
    void WriteItem(unsigned int, unsigned int, unsigned int);
};
} // namespace Microsoft::Resources::Build::ResourceMapSectionBuilder
