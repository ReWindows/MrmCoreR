#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 48 member(s).
namespace Microsoft {
class Resources {
public:
    class AppContrastQVProvider;
    class AppThemeQVProvider;
    class AtomPoolGroup;
    class AutoReaderWriterLock;
    class BaseFile;
    class BaseFileSectionResult;
    class BlobResult;
    class Build;
    class BundledPackageVariantProfile;
    class CStringResolverInternal;
    class ConfigurationQVProvider;
    class ContrastQualifierType;
    class CoreEnvironment;
    class CoreProfile;
    class CoreWindowContainer;
    class DXFeatureLevelQualifierType;
    class DecisionInfoFileData;
    class DecisionInfoFileSection;
    class DecisionResult;
    class DefChecksum;
    class DefObject;
    class DeviceFamilyQVProvider;
    class DeviceFamilyQualifierType;
    class DownlevelClientProfile;
    class DynamicPackageProfile;
    class EmptyInitClientProfile;
    class EnumeratedScaleQualifierType;
    class EnumerationQualifierType;
    class EnvironmentCollectionBase;
    class EnvironmentMapping;
    class EnvironmentReference;
    class EnvironmentVersionInfo;
    class FileAtomPool;
    class FileDataItemsSection;
    class FileDataSection;
    class FileFileList;
    class FileSectionBase;
    class GenericQVProvider;
    class HierarchicalNames;
    class HierarchicalNamesAtomPool;
    class HierarchicalNamesConfig;
    class HierarchicalSchema;
    class HierarchicalSchemaReference;
    class HierarchicalSchemaVersionInfo;
    class HomeRegionQVProvider;
    class IAtomPool;
    class IBuildQualifierType;
    class ICondition;
    class IDecision;
    class IDecisionInfo;
    class IEnvironment;
    class IEnvironmentCollection;
    class IEnvironmentVersionInfo;
    class IFileList;
    class IFileSection;
    class IFileSectionResolver;
    class IHierarchicalNames;
    class IHierarchicalSchema;
    class IHierarchicalSchemaDescription;
    class IHierarchicalSchemaVersionInfo;
    class IMrmFile;
    class IProfileHelpers;
    class IQualifier;
    class IQualifierSet;
    class IQualifierType;
    class IQualifierValueProvider;
    class IRawDecisionInfo;
    class IRawResourceMap;
    class IResolver;
    class IResourceLinks;
    class IResourceMapBase;
    class IResourceMapCollection;
    class ISchemaCollection;
    class IUnifiedResourceView;
    class InboxApplicationProfile;
    class InitForFileClientProfile;
    class InitForPackageClientProfile;
    class IntegerQualifierType;
    class LanguageQualifierType;
    class LayoutDirectionQVProvider;
    class ManagedFile;
    class ManagedResourceMap;
    class ManagedSchema;
    class MetroAppClientProfile;
    class MrmBuildConfiguration;
    class MrmEnvironment;
    class MrmFile;
    class MrmFileResolver;
    class MrmFileSection;
    class MrmProfile;
    class NamedResourceResult;
    class NormalizedFilePath;
    class OverrideResolver;
    class PackageUserLanguageProfileQVProvider;
    class PerThreadQualifier;
    class PersistentOnlyQVProvider;
    class PriDescriptor;
    class PriFile;
    class PriFileManager;
    class ProviderResolver;
    class QualifierResult;
    class QualifierSetResult;
    class QualifierTypeBase;
    class QualifierValueProviderBase;
    class ReferenceBuilder;
    class RegionQualifierType;
    class RemapAtomPool;
    class RemapInfo;
    class RemapUInt16;
    class ResolverBase;
    class ResourceCandidateResult;
    class ResourceLinkSection;
    class ResourceMapBase;
    class ResourceMapFileData;
    class ResourceMapSubtree;
    class ResourcePackMerge;
    class ResourceReference;
    class ReverseFileMap;
    class Runtime;
    class ScalePerWindowQVProvider;
    class ScaleQVProvider;
    class ScaleQualifierType;
    class StandalonePriFile;
    class StateRepositoryHelper;
    class StaticAtomPool;
    class StringIdentifierQualifierType;
    class StringResult;
    class SystemComponentProfile;
    class SystemContrastQVProvider;
    class SystemSingletonComponentProfile;
    class SystemThemeQVProvider;
    class TestClientProfile;
    class UnifiedDecisionInfo;
    class UnifiedEnvironment;
    class UnifiedResourceView;
    class UserLanguageProfileQVProvider;
    class Win32AppClientProfile;
    class WindowsClientProfileBase;
    class WindowsClientProfileBaseHelpers;
    class WindowsDisplayLanguageProvider;
    class WindowsLayoutDirectionQVProvider;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckEnvironmentVersionIsCompatible@Resources@Microsoft@@YA_NPEBVIEnvironment@12@PEBVIEnvironmentVersionInfo@12@@Z
    bool CheckEnvironmentVersionIsCompatible(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckEnvironmentVersionIsIdentical@Resources@Microsoft@@YA_NPEBVIEnvironmentVersionInfo@12@0@Z
    bool CheckEnvironmentVersionIsIdentical(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckHierarchicalSchemaVersionIsCompatible@Resources@Microsoft@@YA_NPEBVIHierarchicalSchema@12@PEBVIHierarchicalSchemaVersionInfo@12@@Z
    bool CheckHierarchicalSchemaVersionIsCompatible(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckHierarchicalSchemaVersionIsIdentical@Resources@Microsoft@@YA_NPEBVIHierarchicalSchemaVersionInfo@12@0@Z
    bool CheckHierarchicalSchemaVersionIsIdentical(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeEnvironmentPoolMappings@Resources@Microsoft@@YAJPEBVIEnvironment@12@0PEAVRemapInfo@12@@Z
    long ComputeEnvironmentPoolMappings(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeEnvironmentVersionChecksum@Resources@Microsoft@@YAJPEBVIEnvironment@12@PEBVIEnvironmentVersionInfo@12@PEAI@Z
    long ComputeEnvironmentVersionChecksum(WindissectOpaque const *, WindissectOpaque const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeHierarchicalSchemaVersionChecksum@Resources@Microsoft@@YAJPEBVIHierarchicalSchema@12@PEBVIHierarchicalSchemaVersionInfo@12@PEAI@Z
    long ComputeHierarchicalSchemaVersionChecksum(WindissectOpaque const *, WindissectOpaque const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertScaleValueToStringValue@Resources@Microsoft@@YAJW4DEVICE_SCALE_FACTOR@@_NPEAVStringResult@12@@Z
    long ConvertScaleValueToStringValue(int, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDirectoryIfNotPresent@Resources@Microsoft@@YAJPEAG_KPEBG@Z
    long CreateDirectoryIfNotPresent(unsigned short *, uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DebugBreakIfAppropriate@Resources@Microsoft@@YAXXZ
    void DebugBreakIfAppropriate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefFreeMemory@Resources@Microsoft@@YAXPEAX@Z
    void DefFreeMemory(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FatalExceptionFilter@Resources@Microsoft@@YAJPEAU_EXCEPTION_POINTERS@@@Z
    long FatalExceptionFilter(_EXCEPTION_POINTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileExists@Resources@Microsoft@@YA_NPEBG@Z
    bool FileExists(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlobResultFromStringResult@Resources@Microsoft@@YAJPEAVStringResult@12@PEAVBlobResult@12@@Z
    long GetBlobResultFromStringResult(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContrastQualifierValue@Resources@Microsoft@@YAJPEAVStringResult@12@@Z
    long GetContrastQualifierValue(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadataFolderForPackageFullName@Resources@Microsoft@@YAJPEBG0PEAVStringResult@12@@Z
    long GetMetadataFolderForPackageFullName(unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackagePathByFullName@Resources@Microsoft@@YAJPEBGPEAIPEAG@Z
    long GetPackagePathByFullName(unsigned short const *, unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootFromFullName@Resources@Microsoft@@YAJPEBGPEAVStringResult@12@@Z
    long GetPackageRootFromFullName(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringResultFromBlobResult@Resources@Microsoft@@YAJPEAVBlobResult@12@IPEAVStringResult@12@_N@Z
    long GetStringResultFromBlobResult(WindissectOpaque *, unsigned int, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeFromRegistry@Resources@Microsoft@@YAJ_NPEA_N@Z
    long GetThemeFromRegistry(bool, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeQualifierValue@Resources@Microsoft@@YAJ_NPEAVStringResult@12@@Z
    long GetThemeQualifierValue(bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsLayoutDirection@Resources@Microsoft@@YA?AW4BCP47_SCRIPT_DIRECTIONALITY@Internal@Windows@@UAtom@12@PEBVIProviderDataSources@12@@Z
    int GetWindowsLayoutDirection(WindissectOpaque, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFatalError@Resources@Microsoft@@YAJJW4MRT_ERROR_SCENARIO_TYPE@12@@Z
    long HandleFatalError(long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCapability@Resources@Microsoft@@YA_NPEBG@Z
    bool HasCapability(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPackageContentsCapability@Resources@Microsoft@@YA_NXZ
    bool HasPackageContentsCapability();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InShutdownOrLogoff@Resources@Microsoft@@YA_NXZ
    bool InShutdownOrLogoff();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentTokenMemberOf@Resources@Microsoft@@YA_NW4WELL_KNOWN_SID_TYPE@@@Z
    bool IsCurrentTokenMemberOf(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrast@Resources@Microsoft@@YAJPEA_N@Z
    long IsHighContrast(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayFile@Resources@Microsoft@@YA_NPEBVNormalizedFilePath@12@@Z
    bool IsOverlayFile(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackaged@Resources@Microsoft@@YA_NXZ
    bool IsPackaged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackagedAndAppContainer@Resources@Microsoft@@YA_NXZ
    bool IsPackagedAndAppContainer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlatformAtLeastTH1@Resources@Microsoft@@YA_NW4_MrmPlatformVersionInternal@12@@Z
    bool IsPlatformAtLeastTH1(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRunningInFirewallService@Resources@Microsoft@@YA_NXZ
    bool IsRunningInFirewallService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemProcess@Resources@Microsoft@@YAHXZ
    int IsSystemProcess();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTestMrmPlatformVersionInternal@Resources@Microsoft@@YA_NW4_MrmPlatformVersionInternal@12@@Z
    bool IsTestMrmPlatformVersionInternal(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MrmDirectionFromBcp47ScriptDirection@Resources@Microsoft@@YAPEBGW4BCP47_SCRIPT_DIRECTIONALITY@Internal@Windows@@@Z
    unsigned short const * MrmDirectionFromBcp47ScriptDirection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportFatalException_AppIssue@Resources@Microsoft@@YAHJW4MRT_ERROR_SCENARIO_TYPE@12@@Z
    int ReportFatalException_AppIssue(long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportFatalException_Generic@Resources@Microsoft@@YAHJW4MRT_ERROR_SCENARIO_TYPE@12@@Z
    int ReportFatalException_Generic(long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportFatalException_MachineIssue_AccessDenied@Resources@Microsoft@@YAXW4MRT_ERROR_SCENARIO_TYPE@12@@Z
    void ReportFatalException_MachineIssue_AccessDenied(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportFatalException_MachineIssue_FileNotFound@Resources@Microsoft@@YAXW4MRT_ERROR_SCENARIO_TYPE@12@@Z
    void ReportFatalException_MachineIssue_FileNotFound(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportFatalException_MachineIssue_PathNotFound@Resources@Microsoft@@YAXW4MRT_ERROR_SCENARIO_TYPE@12@@Z
    void ReportFatalException_MachineIssue_PathNotFound(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseWindowsDisplayLanguageFromAppxManifest@Resources@Microsoft@@YA_NXZ
    bool UseWindowsDisplayLanguageFromAppxManifest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SECTION_BUILDER_PAD@Resources@Microsoft@@YAXPEAU?$SectionParserBase@XE@12@_KPEAJ@Z
    void _SECTION_BUILDER_PAD(WindissectOpaque *, uint64_t, long *);
};
} // namespace Microsoft
