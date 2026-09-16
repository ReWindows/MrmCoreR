#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
namespace Microsoft::Resources {
class Build {
public:
    class AtomIndexedDictionaryBase;
    class AutoMergeBehavior;
    class AutoMergePriBuilder;
    class AutoMerger;
    class BuilderItemInfo;
    class DataBlobBuilder;
    class DataItemOrchestrator;
    class DataItemsBuildInstanceReference;
    class DataItemsSectionBuilder;
    class DecisionBuilder;
    class DecisionInfoBuilder;
    class DecisionInfoBuilderData;
    class DecisionInfoQualifierSetBuilder;
    class DecisionInfoSectionBuilder;
    class EnvironmentMappingSectionBuilder;
    class EnvironmentReferenceBuilder;
    class ExternalFileStaticDataInstanceReference;
    class FileBuilder;
    class FileInfo;
    class FileListBuilder;
    class FolderInfo;
    class HNamesNode;
    class HNamesNodeAtomPool;
    class HierarchicalName;
    class HierarchicalNameSegment;
    class HierarchicalNamesBuilder;
    class HierarchicalSchemaReferenceSectionBuilder;
    class HierarchicalSchemaSectionBuilder;
    class HierarchicalSchemaVersionInfoBuilder;
    class IBuildInstanceReference;
    class ISectionBuilder;
    class ItemInfo;
    class ItemInfoAtomPool;
    class LinkBuilderFileData;
    class OrchestratorDataReference;
    class OrchestratorHashMap;
    class OrchestratorHashNode;
    class OsAppAutoMergeBehavior;
    class PriAutoMerger;
    class PriFileBuilder;
    class PriFileMerger;
    class PriMapMerger;
    class PriSectionBuilder;
    class ResourceLinkSectionBuilder;
    class ResourceMapSectionBuilder;
    class ScopeInfo;
    class ScopeInfoAtomPool;
    class SystemAppResourceAutoMergeBehavior;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPrisAndLogFailure@Build@Resources@Microsoft@@YAJPEBGPEAVResourcePackMerge@23@@Z
    long AddPrisAndLogFailure(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSystemPrisToMerger@Build@Resources@Microsoft@@YAXPEAVCoreProfile@23@PEBGPEBV?$DefList@PEBVPriFileInfo@PriFileMerger@Build@Resources@Microsoft@@P6AHPEAPEAV12345@0@ZP6A_NPEAPEBV12345@PEAH@Z@23@PEAVResourcePackMerge@23@PEAV?$DefPointerList@$$CBVStringResult@Resources@Microsoft@@P6AHPEAPEBV123@0@ZP6A_N0PEAH@Z@23@@Z
    void AddSystemPrisToMerger(WindissectOpaque *, unsigned short const *, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePriCollectionChecksum@Build@Resources@Microsoft@@YAJPEAV?$DefList@PEBVPriFileInfo@PriFileMerger@Build@Resources@Microsoft@@P6AHPEAPEAV12345@0@ZP6A_NPEAPEBV12345@PEAH@Z@23@PEAI@Z
    long ComputePriCollectionChecksum(WindissectOpaque *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoMerger@Build@Resources@Microsoft@@YAJPEBGPEAVCoreProfile@23@PEAPEAVAutoMerger@123@@Z
    long GetAutoMerger(unsigned short const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageNameFromFullName@Build@Resources@Microsoft@@YAJPEBGPEAVStringResult@23@@Z
    long GetPackageNameFromFullName(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemAutoMergeCandidates@Build@Resources@Microsoft@@YAJPEBGPEAPEAV?$DefPointerList@$$CBVPriFileInfo@PriFileMerger@Build@Resources@Microsoft@@P6AHPEAPEAV12345@0@ZP6A_NPEAPEBV12345@PEAH@Z@23@PEAI@Z
    long GetSystemAutoMergeCandidates(unsigned short const *, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraverseCandidatePrisFolder@Build@Resources@Microsoft@@YAJPEBG0PEAV?$DefList@PEBVPriFileInfo@PriFileMerger@Build@Resources@Microsoft@@P6AHPEAPEAV12345@0@ZP6A_NPEAPEBV12345@PEAH@Z@23@@Z
    long TraverseCandidatePrisFolder(unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddPrisToMergerIfNotAlreadyAdded@Build@Resources@Microsoft@@YA_NPEBGPEAVResourcePackMerge@23@PEAV?$DefPointerList@$$CBVStringResult@Resources@Microsoft@@P6AHPEAPEBV123@0@ZP6A_N0PEAH@Z@23@@Z
    bool TryAddPrisToMergerIfNotAlreadyAdded(unsigned short const *, WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::Resources
