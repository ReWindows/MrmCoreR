#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 36 member(s).
namespace Microsoft::Resources::Runtime {
class CResourceManagerInternal {
public:
    class CSchemaPriIndexInfo;
    class Iterator;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAA@XZ
    CResourceManagerInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllIndividualPriFilesImpl@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEAV?$DynamicArray@PEAG@34@@Z
    long GetAllIndividualPriFilesImpl(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationResources@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEAPEAVCResourceIndexInternal@234@@Z
    long GetApplicationResources(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultContext@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEAPEBVCContext@234@@Z
    long GetDefaultContext(WindissectOpaque const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalReferenceBlobForManifestFile@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEBAJPEBG00_KPEAEPEA_K@Z
    long GetInternalReferenceBlobForManifestFile(unsigned short const *, unsigned short const *, unsigned short const *, uint64_t, unsigned char *, uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalReferenceBlobForResource@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEBAJPEBG00_KPEAEPEA_K@Z
    long GetInternalReferenceBlobForResource(unsigned short const *, unsigned short const *, unsigned short const *, uint64_t, unsigned char *, uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrLoadResourceMap@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEBG0_NPEAPEAVCResourceIndexInternal@234@@Z
    long GetOrLoadResourceMap(unsigned short const *, unsigned short const *, bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriFilePathBySchema@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEBGPEAPEBG1@Z
    long GetPriFilePathBySchema(unsigned short const *, unsigned short const * *, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceHandler@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEAPEAVCResourceReferenceHandlerInternal@234@@Z
    long GetReferenceHandler(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceIndex@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEBGPEAPEAVCResourceIndexInternal@234@@Z
    long GetResourceIndex(unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForBundledPackageVariant@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEBG00@Z
    long InitializeForBundledPackageVariant(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForFile@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEBG@Z
    long InitializeForFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForPackage@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEBG@Z
    long InitializeForPackage(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForPackageFile@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEBG0@Z
    long InitializeForPackageFile(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithProfile@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJW4ProfileType@MrmProfile@34@PEBG11@Z
    long InitializeWithProfile(int, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithProfileSimple@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJW4ProfileType@MrmProfile@34@@Z
    long InitializeWithProfileSimple(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPriFile@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJW4_MRMPROFILE_PHASE@34@W4LoadPriFlags@34@PEBG22@Z
    long LoadPriFile(int, int, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPriFiles@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJW4_MRMPROFILE_PHASE@34@W4LoadPriFlags@34@PEAV?$DynamicArray@PEAVStringResult@Resources@Microsoft@@@34@22@Z
    long LoadPriFiles(int, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadResourcePackage@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJW4_MRMPROFILE_PHASE@34@PEBGPEAPEAVCResourceIndexInternal@234@@Z
    long LoadResourcePackage(int, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDefaultContext@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEAPEBVCContext@234@@Z
    long ResetDefaultContext(WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveReferenceBlobAsString@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEBAJ_KPEBX0PEAGPEA_K@Z
    long ResolveReferenceBlobAsString(uint64_t, void const *, uint64_t, unsigned short *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadPriFiles@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEAV?$DynamicArray@PEAVStringResult@Resources@Microsoft@@@34@@Z
    long UnloadPriFiles(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPathWithPackagesInfo@CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAAJPEBGW4_MRMPROFILE_PHASE@34@@Z
    long VerifyPathWithPackagesInfo(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreatePackageDefaultResourceManagerInternal@CResourceManagerInternal@Runtime@Resources@Microsoft@@SAJ_NPEAPEAV1234@PEAH@Z
    static long s_CreatePackageDefaultResourceManagerInternal(bool, WindissectOpaque * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetEmptyResourceManagerInternal@CResourceManagerInternal@Runtime@Resources@Microsoft@@SAJW4ProfileType@MrmProfile@34@PEAPEAV1234@@Z
    static long s_GetEmptyResourceManagerInternal(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetIsInbox@CResourceManagerInternal@Runtime@Resources@Microsoft@@SAJPEBGPEA_N@Z
    static long s_GetIsInbox(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetPackageDefaultResourceManagerInternal@CResourceManagerInternal@Runtime@Resources@Microsoft@@SAJPEAPEAV1234@PEAH@Z
    static long s_GetPackageDefaultResourceManagerInternal(WindissectOpaque * *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceManagerInternal@Runtime@Resources@Microsoft@@QEAA@XZ
    ~CResourceManagerInternal();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddOrUpdateResourceIndex@CResourceManagerInternal@Runtime@Resources@Microsoft@@AEAAJPEBVManagedResourceMap@34@H_NPEBG@Z
    long _AddOrUpdateResourceIndex(WindissectOpaque const *, int, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFilenameFromPackageNameForInit@CResourceManagerInternal@Runtime@Resources@Microsoft@@AEAAJPEBGPEAVMrmProfile@34@PEAVStringResult@34@@Z
    long _GetFilenameFromPackageNameForInit(unsigned short const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResourceIndexByPackageName@CResourceManagerInternal@Runtime@Resources@Microsoft@@AEAAJPEBGPEAPEAVCResourceIndexInternal@234@@Z
    long _GetResourceIndexByPackageName(unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CResourceManagerInternal@Runtime@Resources@Microsoft@@AEAAJ_N0@Z
    long _Initialize(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadCurrentDependentPackages@CResourceManagerInternal@Runtime@Resources@Microsoft@@AEAAJW4_MRMPROFILE_PHASE@34@PEBV1234@PEBG@Z
    long _LoadCurrentDependentPackages(int, WindissectOpaque const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryAddEmptyResourceIndex@CResourceManagerInternal@Runtime@Resources@Microsoft@@AEAAJPEAV?$DynamicArray@PEAVStringResult@Resources@Microsoft@@@34@PEA_N@Z
    long _TryAddEmptyResourceIndex(WindissectOpaque *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryGetIndexFromCollection@CResourceManagerInternal@Runtime@Resources@Microsoft@@AEAA_NPEBGPEAPEAVCSchemaPriIndexInfo@1234@@Z
    bool _TryGetIndexFromCollection(unsigned short const *, WindissectOpaque * *);
};
} // namespace Microsoft::Resources::Runtime
